#include <wx-3.1/wx/wx.h>

class App : public wxApp
{
public:
    App();
    ~App();
    bool OnInit();
};

DECLARE_APP(App);
