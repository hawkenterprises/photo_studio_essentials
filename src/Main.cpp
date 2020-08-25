#include "Main.h"
#include "../include/id.h"

//========================================EVENT TABLE OF MAIN===========================================

BEGIN_EVENT_TABLE(Main, wxFrame)
EVT_MENU(window::id::MENUID_FILE_QUIT, Main::OnQuit)
END_EVENT_TABLE()

//==================================CLASS MEMBER FUNCTIONS DEFINITIONS==================================
void Main::initializeMenuBar()
{
    wxMenuBar *Menubar = new wxMenuBar();
    wxMenu *filemenu = new wxMenu();
    wxMenu *editmenu = new wxMenu();
    wxMenu *viewmenu = new wxMenu();
    wxMenuItem *MENUITEMnew = new wxMenuItem(filemenu, window::id::MENUID_FILE_NEW, "New\tCtrl+n");
    wxMenuItem *MENUITEMquit = new wxMenuItem(filemenu, window::id::MENUID_FILE_QUIT, "&Quit\tAlt+q");
    Menubar->Append(filemenu, "&File");
    filemenu->Append(MENUITEMnew);
    filemenu->Append(MENUITEMquit);
    Menubar->Append(editmenu, "&Edit");
    Menubar->Append(viewmenu, "&View");
    SetMenuBar(Menubar);
}

void Main::initializeStatusBar()
{
    CreateStatusBar(2);
    SetStatusText(wxT("PSEssentials -- status: Loaded Successfully"));
}

void Main::OnAbout(wxCommandEvent &event)
{
}

void Main::OnQuit(wxCommandEvent &event)
{
    Close();
}

//===================================MAIN WINDOW DEFINITION=========================================

Main::Main(wxWindow *parent,
           wxWindowID id,
           const wxString &title,
           const wxPoint &pos,
           const wxSize &size,
           long style,
           const wxString &name) : wxFrame(parent, id, title, pos, size, style, name)
{

    this->initializeMenuBar();
    this->initializeStatusBar();
}

Main::~Main()
{
}