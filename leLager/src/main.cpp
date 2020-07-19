#include "main.h"
#include "mainWindow.h"
#include <iostream>
#include "part.h"


wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("leLager Lagerwirtschaft", wxDefaultPosition, wxSize(800, 600));
    
    Part lager("lager");
    lager.setManufacturer("superlager");



    wxLogDebug(lager.getManufacturer()->c_str());

   
    


    frame->Show(true);
    return true;
}
