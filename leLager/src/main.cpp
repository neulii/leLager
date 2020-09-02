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
    neulib::Date *date = new neulib::Date(23, 14, 2020);
    neulib::Date *newDate = new neulib::Date(10, 2, 2019);

    std::string plant = " ofen";

    
    Report* r = new Report("erste strung", date,"mein text", "ofen");
    Report* rr = new Report("noch eine strung", newDate, "meadsfasdfasdfin text", "ofadsfasdfasdfasdfen");

    
    std::vector<Report*>* reports = new std::vector<Report*>();

  

    reports->push_back(r);
    reports->push_back(rr);

    frame->loadDataToGrid(reports);





    

  
   

   

    //wxMessageBox(lager.getManufacturer());





    //wxLogDebug(lager.getManufacturer());

   
    


    frame->Show(true);
    return true;
}
