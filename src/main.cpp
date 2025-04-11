#include <wx/wx.h>
#include <wx/stc/stc.h>
#include <wx/settings.h>

class MainFrame : public wxFrame
{

public:
    MainFrame() : wxFrame(nullptr, wxID_ANY, "LightPad", wxDefaultPosition, wxSize(800, 600))
    {

        editor = new wxStyledTextCtrl(this, wxID_ANY);
        
        // Editor
        TextEditor();
        
        // Menu
        MenuBar();

        // System Theme Handler
        ApplySystemTheme();
    }

private:
    wxStyledTextCtrl* editor;

    void TextEditor()
    {
        // Margins
        editor->SetMarginWidth(0, 50);
        editor->SetMarginType(0, wxSTC_MARGIN_NUMBER);
        
        // Line Count
        editor->SetMarginWidth(0, editor->TextWidth(wxSTC_STYLE_LINENUMBER, "9999"));
        
        // Wrap Line
        editor->SetWrapMode(wxSTC_WRAP_WORD);
        
        // Indentation
        editor->SetUseTabs(false);
        editor->SetTabWidth(4);
        editor->SetIndent(4);
        
        editor->SetIndentationGuides(wxSTC_IV_LOOKBOTH);
    }

    void MenuBar()
    {
        wxMenuBar *menuBar = new wxMenuBar();
        
        wxMenu *fileMenu = new wxMenu();
        fileMenu->Append(wxID_NEW, "&New\tCtrl+N");
        fileMenu->Append(wxID_OPEN, "&Open\tCtrl+O");
        fileMenu->Append(wxID_SAVE, "&Save\tCtrl+S");
        fileMenu->AppendSeparator();
        fileMenu->Append(wxID_EXIT, "&Exit\tAlt+F4");
        
        menuBar->Append(fileMenu, "&File");
        SetMenuBar(menuBar);
    }

    void ApplySystemTheme()
    {

        wxColor bgColor = wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW);
        wxColor fgColor = wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT);
        wxColor selBgColor = wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT);
        wxColor selFgColor = wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT);

        bool isDark = (bgColor.Red() + bgColor.Green() + bgColor.Blue()) / 3 < 128;

        wxColor lineNumBg = isDark ? bgColor.ChangeLightness(95) : bgColor.ChangeLightness(95);
        wxColor lineNumFg = isDark ? fgColor.ChangeLightness(120) : fgColor.ChangeLightness(80);

        editor->StyleSetBackground(wxSTC_STYLE_DEFAULT, bgColor);
        editor->StyleSetForeground(wxSTC_STYLE_DEFAULT, fgColor);
        editor->StyleClearAll();

        editor->StyleSetForeground(wxSTC_STYLE_LINENUMBER, lineNumFg);
        editor->StyleSetBackground(wxSTC_STYLE_LINENUMBER, lineNumBg);

        editor->SetSelBackground(true, selBgColor);
        editor->SetSelForeground(true, selFgColor);

        editor->SetCaretForeground(fgColor);

        editor->Refresh();
    }
};

class LightPadApp : public wxApp
{
public:
    bool OnInit()
    {
        MainFrame *frame = new MainFrame();
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(LightPadApp);