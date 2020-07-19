#include "main.h"
#include "mainWindow.h"
#include <iostream>

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("leLager Lagerwirtschaft", wxDefaultPosition, wxSize(800, 600));
    neulib::log("super");


    frame->Show(true);
    return true;
}
