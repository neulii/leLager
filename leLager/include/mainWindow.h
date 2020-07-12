#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif



#include "include/main_lib.h"

class MainWindow : public wxFrame
{
public:
    MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);

private:

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
