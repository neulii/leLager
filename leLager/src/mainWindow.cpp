#include "mainWindow.h"
#include "functions.h"
#include "wx/grid.h"
#include "wx/panel.h"
#include "wx/toolbar.h"

MainWindow::MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    //wxPanel* panel = new wxPanel(this, wxID_ANY);

  /*  testButton = new wxButton(panel, ID_EXIT, wxT("Quit"), wxPoint(20, 20));
    newButton = new wxButton(panel, ID_NEWBUTTON, wxT("NewButton"), wxPoint(20, 60));
    inputText = new wxTextCtrl(panel, ID_TEXTINPUT, wxT("super"), wxPoint(100, 100));*/

   
    wxMenu* menuFile = new wxMenu;

    //menuFile->Append(ID_SaveGame, "Speichern", "Speichert das bestehende Spiel");
    //menuFile->Append(ID_OpenGame, "Oeffnen", "oeffnet ein Spiel");


    //menuFile->AppendSeparator();
    menuFile->Append(ID_Exit,"Beenden", "Beendet das Programm");

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(ID_Info,"Info", "Blendet das Info Feld ein ;)");

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&Datei");
    menuBar->Append(menuHelp, "&Info");

    wxImage::AddHandler(new wxPNGHandler);

    wxBitmap exit(wxT("exit.png"), wxBITMAP_TYPE_PNG);

    toolbar = CreateToolBar();
    toolbar->AddTool(11111, wxT("Exit application"), exit,"Neue Meldung anlgegen",wxITEM_CHECK);
  /* 
    wxButton *b = new wxButton(toolbar,10100,"",wxDefaultPosition,wxSize(24,24),0);
    b->SetBackgroundColour(wxColor(210,10,10));
    b->SetForegroundColour(wxColor(0,0,250));
*/
 //   toolbar->AddControl(b);

    //toolbar->EnableTool(11111,1);
    toolbar->Realize(); 

    Connect(11111, wxEVT_COMMAND_TOOL_CLICKED,  wxCommandEventHandler(MainWindow::OnQuit));

   // mainPanel = new wxPanel(this, wxID_ANY);


    mainSizer = new wxBoxSizer(wxVERTICAL);

    reportGrid= new wxGrid(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    reportGrid->CreateGrid(1, 3);
    reportGrid->EnableEditing(false);
    reportGrid->EnableDragGridSize(false);
    reportGrid->SetMargins(0, 0);

    reportGrid->EnableDragColMove(false);
    reportGrid->EnableDragColSize(true);


    layoutGrid();

    //todo

    mainSizer->Add(reportGrid, 1, wxEXPAND | wxALL);
    this->SetSizer(mainSizer);

    this->Layout();

    SetMenuBar(menuBar);
    
    CreateStatusBar();
    SetStatusText("No do schaust ;)");

    Centre();

   
   
}

void MainWindow::OnExit(wxCommandEvent& event)
{

    Close(true);


}
void MainWindow::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("Das ist eine Info box!", "...nur zur Info...",  wxYES_NO | wxICON_QUESTION);
    //rxMessageDialog* dial = new wxMessageDialog(NULL,
    //wxT("Error loading file"), wxT("Error"), wxYES_NO );
    //dial->ShowModal();


}

void MainWindow::OnQuit(wxCommandEvent& WXUNUSED(event)) {
   //wxMessageBox("Das ist eine Info box!", "...nur zur Info...",  wxYES_NO | wxICON_QUESTION);
    toolbar->ToggleTool(11111,1);
    //toolbar->GetToolState();
    
   // Close(true);
}
void MainWindow::OnClose(wxCloseEvent& event)
{
    Destroy();

}

void MainWindow::loadDataToGrid(std::vector<Report*> *reports)
{
    
    //reportGrid->CreateGrid(reports->size(), 3);
   
    reportGrid->SetTable(new wxGridStringTable(reports->size(), 3));


    for (int i = 0; i < reports->size(); i++)
    {
        //TODO geh�rt noch ge�ndert
        std::string date = "";
        neulib::Date *test;
        test = reports->at(i)->getDate();
        date = test->dateToString();

        reportGrid->SetCellAlignment(i, 0, wxALIGN_CENTER,wxALIGN_CENTER);
        reportGrid->SetCellValue(i, 0, date);                           //date
        reportGrid->SetCellValue(i, 1, reports->at(i)->getPlant());     //plant
        reportGrid->SetCellValue(i, 2, reports->at(i)->getTitle());     //title
   
    }
   
    layoutGrid();

}

void MainWindow::layoutGrid()
{
    reportGrid->SetColLabelValue(0, "Datum");
    reportGrid->SetColLabelValue(1, "Anlage");
    reportGrid->SetColLabelValue(2, "Meldungstext");

    reportGrid->SetColSize(0, 80);
    reportGrid->SetColSize(1, 130);
    reportGrid->SetColSize(2, 350);
}


wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
    EVT_MENU(ID_Exit, MainWindow::OnExit)
    EVT_MENU(ID_Info, MainWindow::OnAbout)
    EVT_CLOSE(MainWindow::OnClose)


  /*  EVT_BUTTON(ID_NEWBUTTON, MainWindow::QuitButton)
    EVT_BUTTON(ID_EXIT, MainWindow::OnExit)*/
wxEND_EVENT_TABLE()
