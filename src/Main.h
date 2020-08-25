#include <wx-3.1/wx/wx.h>

class Main : public wxFrame
{
protected:
    void OnAbout(wxCommandEvent &event);
    void OnQuit(wxCommandEvent &event);

    DECLARE_EVENT_TABLE();
    void initializeMenuBar();
    void initializeStatusBar();

public:
    Main(wxWindow *parent,
         wxWindowID id,
         const wxString &title,
         const wxPoint &pos = wxDefaultPosition,
         const wxSize &size = wxDefaultSize,
         long style = wxDEFAULT_FRAME_STYLE,
         const wxString &name = wxFrameNameStr);
    ~Main();
};
