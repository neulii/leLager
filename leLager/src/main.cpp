#include "main.h"
#include "mainWindow.h"
#include <iostream>
#include "part.h"
#include "include/date.h"


wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("leLager Lagerwirtschaft", wxDefaultPosition, wxSize(800, 600));
    
    Part lager("lager");
    neulib::Date* date = new neulib::Date(10, 10, 10);

    const char* test = neulib::intToC_String(10);

    wxLogDebug(neulib::intToC_String(10));

    

   

    //wxMessageBox(lager.getManufacturer());





    //wxLogDebug(lager.getManufacturer());

   
    


    frame->Show(true);
    return true;
}
