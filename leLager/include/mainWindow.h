#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "report.h"
#include "wx/grid.h"
#include "include/main_lib.h"
#include "include/date.h"

class MainWindow : public wxFrame
{


    
public:
    MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);
    
    void loadDataToGrid(std::vector<Report*> *reports);
    void layoutGrid();

private:
    wxPanel* mainPanel;
    wxBoxSizer* mainSizer;
    wxGrid* reportGrid;
   
    

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);








    wxDECLARE_EVENT_TABLE();




    


};

//id's for wxcomponents

enum id
{
    ID_Exit = 1,
    ID_Info = 2 
};


#endif // !MAINWINDOW_H
