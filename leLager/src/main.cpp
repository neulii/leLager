#include "main.h"
#include "mainWindow.h"
#include <iostream>
#include "part.h"
#include "include/date.h"
#include "report.h"


wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MainWindow* frame = new MainWindow("leLager Lagerwirtschaft", wxDefaultPosition, wxSize(800, 600));
    
    Part lager("lager");
    std::string title = "title";
    std::string text = " das ist ein kleiner meldungsetxt";
    neulib::Date *date = new neulib::Date(10, 10, 1000);
    std::string plant = " ofen";

    
    Report* r = new Report("title", date,"mein text", "ofen");

    




    

  
   

   

    //wxMessageBox(lager.getManufacturer());





    //wxLogDebug(lager.getManufacturer());

   
    


    frame->Show(true);
    return true;
}
