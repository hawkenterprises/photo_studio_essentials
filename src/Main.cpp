#include "Main.h"

Main::Main(wxWindow *parent,
           wxWindowID id,
           const wxString &title,
           const wxPoint &pos,
           const wxSize &size,
           long style,
           const wxString &name) : wxFrame(parent, id, title, pos, size, style, name)
{
    wxMenuBar *Menubar = new wxMenuBar();
    wxMenu *filemenu = new wxMenu();
    wxMenu *editmenu = new wxMenu();
    wxMenu *viewmenu = new wxMenu();
    wxMenuItem *quititem = new wxMenuItem(filemenu, wxID_EXIT);
    Menubar->Append(filemenu, "&File");
    filemenu->Append(wxID_NEW);
    filemenu->Append(quititem);
    Menubar->Append(editmenu, "&Edit");
    Menubar->Append(viewmenu, "&View");
    SetMenuBar(Menubar);
}

Main::~Main()
{
}