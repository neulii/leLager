#include "main.h"
#include "mainWindow.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("leLager Lagerwirtschaft",wxDefaultPosition, wxSize(800, 600));
    frame->Show(true);
    return true;
}
