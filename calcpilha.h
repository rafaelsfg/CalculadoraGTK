///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __calcpilha__
#define __calcpilha__

#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/tglbtn.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CalcPilha
///////////////////////////////////////////////////////////////////////////////
class CalcPilha : public wxFrame
{
    private:

    protected:
        wxTextCtrl* Visor;
        wxChoice* ListaAngulo;
        wxChoice* ListaConst;
        wxChoice* m_choice5;
        wxToggleButton* BotFuncInv;
        wxButton* BotInv;
        wxButton* BotLog;
        wxButton* BotLn;
        wxButton* BotFat;
        wxButton* BotSen;
        wxButton* BotCos;
        wxButton* BotTan;
        wxButton* BotPotencia;
        wxButton* BotRaiz;
        wxButton* BotTroca;
        wxButton* Bot7;
        wxButton* Bot8;
        wxButton* Bot9;
        wxButton* BotDiv;
        wxButton* BotOposto;
        wxButton* Bot4;
        wxButton* Bot5;
        wxButton* Bot6;
        wxButton* BotVezes;
        wxButton* BotDel;
        wxButton* Bot1;
        wxButton* Bot2;
        wxButton* Bot3;
        wxButton* BotMenos;
        wxButton* BotCLR;
        wxButton* BotVirgula;
        wxButton* Bot0;
        wxButton* BotEnter;
        wxButton* BotMais;
        wxStatusBar* BarraStatus;

        // Virtual event handlers, overide them in your derived class
        virtual void EscolhaListaAngulo( wxCommandEvent& event ) { event.Skip(); }
        virtual void EscolhaListaConstante( wxCommandEvent& event );
        virtual void EscolhaListaFuncao( wxCommandEvent& event ) { event.Skip(); }
        virtual void ClickBotFuncInv( wxCommandEvent& event );
        virtual void ClickBotInv( wxCommandEvent& event );
        virtual void ClickBotLn( wxCommandEvent& event );
        virtual void ClickBotLog( wxCommandEvent& event );
        virtual void ClickBot2( wxCommandEvent& event );
        virtual void ClickBot3( wxCommandEvent& event );
        virtual void ClickBot4( wxCommandEvent& event );
        virtual void ClickBotSen( wxCommandEvent& event );
        virtual void ClickBotCos( wxCommandEvent& event );
        virtual void ClickBotTan( wxCommandEvent& event );
        virtual void ClickBotPot( wxCommandEvent& event );
        virtual void ClickBotRaiz( wxCommandEvent& event );
        virtual void ClicKBotTroca( wxCommandEvent& event );
        virtual void ClickBot7( wxCommandEvent& event );
        virtual void ClickBot8( wxCommandEvent& event );
        virtual void ClickBot9( wxCommandEvent& event );
        virtual void ClickBotDiv( wxCommandEvent& event );
        virtual void ClickBotOposto( wxCommandEvent& event );
        virtual void ClickBot5( wxCommandEvent& event );
        virtual void ClickBot6( wxCommandEvent& event );
        virtual void ClickBotVezes( wxCommandEvent& event );
        virtual void ClickBotDel( wxCommandEvent& event );
        virtual void ClickBot1( wxCommandEvent& event );
        virtual void ClickBotMenos( wxCommandEvent& event );
        virtual void ClickBotClr( wxCommandEvent& event );
        virtual void ClickBotVirgula( wxCommandEvent& event );
        virtual void ClickBot0( wxCommandEvent& event );
        virtual void ClickBotEnter( wxCommandEvent& event );
        virtual void ClickBotMais( wxCommandEvent& event );
        virtual void ClickBotFat( wxCommandEvent& event );

        void InserirDigitoVisor(wxString d);
        int RetiraNumPilha(double* num);
        int InserirResultadoPilha(double num);
        int InserirNumDigitadoPilha(void);

    public:

        CalcPilha( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculadora"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 358,550 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
        ~CalcPilha();

};

#endif //__calcpilha__
