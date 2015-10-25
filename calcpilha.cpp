///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calcpilha.h"

///////////////////////////////////////////////////////////////////////////

CalcPilha::CalcPilha( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer( wxVERTICAL );
  /// Visor
    Visor = new wxTextCtrl( this, wxID_ANY, wxT("> "), wxDefaultPosition, wxSize( -1,150 ), wxTE_MULTILINE|wxTE_READONLY );
    Visor->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Sans") ) );
    bSizer1->Add( Visor, 0, wxALL|wxEXPAND, 5 );

    wxBoxSizer* bSizer2;
    bSizer2 = new wxBoxSizer( wxHORIZONTAL );
  /// Lista de Ângulos
    wxString ListaAnguloChoices[] = { wxT("Grau"), wxT("Rad") };
    int ListaAnguloNChoices = sizeof( ListaAnguloChoices ) / sizeof( wxString );
    ListaAngulo = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 70,-1 ), ListaAnguloNChoices, ListaAnguloChoices, 0 );
    ListaAngulo->SetSelection( 0 );
    ListaAngulo->SetToolTip( wxT("Lista de ângulos") );
    bSizer2->Add( ListaAngulo, 0, wxALL, 5 );
  /// Lista de Constantes
    wxString ListaConstChoices[] = { wxT("𝜋"), wxT("e") };
    int ListaConstNChoices = sizeof( ListaConstChoices ) / sizeof( wxString );
    ListaConst = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 60,-1 ), ListaConstNChoices, ListaConstChoices, 0 );
    ListaConst->SetSelection( 0 );
    ListaConst->SetToolTip( wxT("Lista de constantes") );
    bSizer2->Add( ListaConst, 0, wxALL, 5 );
  /// Lista de Funções
    wxString m_choice5Choices[] = { wxT("ABS") };
    int m_choice5NChoices = sizeof( m_choice5Choices ) / sizeof( wxString );
    m_choice5 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), m_choice5NChoices, m_choice5Choices, 0 );
    m_choice5->SetSelection( 0 );
    m_choice5->SetToolTip( wxT("Lista de funções") );
    bSizer2->Add( m_choice5, 0, wxALL, 5 );

    bSizer1->Add( bSizer2, 0, wxALIGN_CENTER, 5 );

    wxGridSizer* gSizer1;
    gSizer1 = new wxGridSizer( 2, 5, 0, 0 );
  /// Botão Função Inversa
    BotFuncInv = new wxToggleButton( this, wxID_ANY, wxT("Inv"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotFuncInv->SetToolTip( wxT("Ativa/Desativa função inversa.") );
    gSizer1->Add( BotFuncInv, 0, wxALL, 5 );
  /// Botão Log
    BotLog = new wxButton( this, wxID_ANY, wxT("Log"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotLog->SetToolTip( wxT("Logaritmo na base 10") );
    gSizer1->Add( BotLog, 0, wxALL, 5 );
  /// Botão Ln
    BotLn = new wxButton( this, wxID_ANY, wxT("Ln"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotLn->SetToolTip( wxT("Logaritmo natural") );
    gSizer1->Add( BotLn, 0, wxALL, 5 );
  /// Botão 1/x
    BotInv = new wxButton( this, wxID_ANY, wxT("⅟ₓ"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotInv->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Sans") ) );
    BotInv->SetToolTip( wxT("Inverso de X") );
    gSizer1->Add( BotInv, 0, wxALL, 5 );
  /// Botão Fat
    BotFat = new wxButton( this, wxID_ANY, wxT("X!"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotFat->SetToolTip( wxT("Fatorial de X") );
    gSizer1->Add( BotFat, 0, wxALL, 5 );
  /// Botão Seno
    BotSen = new wxButton( this, wxID_ANY, wxT("sen"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotSen->SetToolTip( wxT("Função seno") );
    gSizer1->Add( BotSen, 0, wxALL, 5 );
  /// Botão Cosseno
    BotCos = new wxButton( this, wxID_ANY, wxT("cos"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotCos->SetToolTip( wxT("Função cosseno") );
    gSizer1->Add( BotCos, 0, wxALL, 5 );
  /// Botão Tangente
    BotTan = new wxButton( this, wxID_ANY, wxT("tan"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotTan->SetToolTip( wxT("Função tangente") );
    gSizer1->Add( BotTan, 0, wxALL, 5 );
  /// Botão x^y
    BotPotencia = new wxButton( this, wxID_ANY, wxT("ₓʸ"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotPotencia->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Sans") ) );
    BotPotencia->SetToolTip( wxT("Potência de X elevado a Y") );
    gSizer1->Add( BotPotencia, 0, wxALL, 5 );
  /// Botão x^(1/y)
    BotRaiz = new wxButton( this, wxID_ANY, wxT("ʸ√x̅"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotRaiz->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Sans") ) );
    BotRaiz->SetToolTip( wxT("Radiciação de X com índice Y") );
    gSizer1->Add( BotRaiz, 0, wxALL, 5 );
  /// Botão Troca
    BotTroca = new wxButton( this, wxID_ANY, wxT("TROCA"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotTroca->SetToolTip( wxT("Muda dois numeros da pilha de lugar") );
    gSizer1->Add( BotTroca, 0, wxALL, 5 );
  /// Botão 7
    Bot7 = new wxButton( this, wxID_ANY, wxT("7"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot7, 0, wxALL, 5 );
  /// Botão 8
    Bot8 = new wxButton( this, wxID_ANY, wxT("8"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot8, 0, wxALL, 5 );
  /// Botão 9
    Bot9 = new wxButton( this, wxID_ANY, wxT("9"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot9, 0, wxALL, 5 );
  /// Botão Divisão
    BotDiv = new wxButton( this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotDiv->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Sans") ) );
    BotDiv->SetToolTip( wxT("Operação divisão") );
    gSizer1->Add( BotDiv, 0, wxALL, 5 );
  /// Botão +/-
    BotOposto = new wxButton( this, wxID_ANY, wxT("±"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotOposto->SetToolTip( wxT("Troca o sinal do número") );
    gSizer1->Add( BotOposto, 0, wxALL, 5 );
  /// Botão 4
    Bot4 = new wxButton( this, wxID_ANY, wxT("4"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot4, 0, wxALL, 5 );
  /// Botão 5
    Bot5 = new wxButton( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot5, 0, wxALL, 5 );
 /// Botão 6
    Bot6 = new wxButton( this, wxID_ANY, wxT("6"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot6, 0, wxALL, 5 );
 /// Botão Vezes
    BotVezes = new wxButton( this, wxID_ANY, wxT("x"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotVezes->SetToolTip( wxT("Operação múltiplicação") );
    gSizer1->Add( BotVezes, 0, wxALL, 5 );
 /// Botão Del
    BotDel = new wxButton( this, wxID_ANY, wxT("DEL"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotDel->SetToolTip( wxT("Deleta um dígito ou número do topo da pilha ") );
    gSizer1->Add( BotDel, 0, wxALL, 5 );
 /// Botão 1
    Bot1 = new wxButton( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot1, 0, wxALL, 5 );
 /// Botão 2
    Bot2 = new wxButton( this, wxID_ANY, wxT("2"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot2, 0, wxALL, 5 );
 /// Botão 3
    Bot3 = new wxButton( this, wxID_ANY, wxT("3"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot3, 0, wxALL, 5 );
 /// Botão Menos
    BotMenos = new wxButton( this, wxID_ANY, wxT("-"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotMenos->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Sans") ) );
    BotMenos->SetToolTip( wxT("Operação subtração") );
    gSizer1->Add( BotMenos, 0, wxALL, 5 );
 /// Botão CLR
    BotCLR = new wxButton( this, wxID_ANY, wxT("CLR"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotCLR->SetToolTip( wxT("Limpa a pilha") );
    gSizer1->Add( BotCLR, 0, wxALL, 5 );
 /// Botão Virgula
    BotVirgula = new wxButton( this, wxID_ANY, wxT(","), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotVirgula->SetFont( wxFont( 14, 74, 90, 90, false, wxT("Sans") ) );
    BotVirgula->SetToolTip( wxT("Vírgula decimal") );
    gSizer1->Add( BotVirgula, 0, wxALL, 5 );
 /// Botão 0
    Bot0 = new wxButton( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    gSizer1->Add( Bot0, 0, wxALL, 5 );
 /// Botão Enter
    BotEnter = new wxButton( this, wxID_ANY, wxT("ENTER"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotEnter->SetToolTip( wxT("Insere o número na pilha") );
    gSizer1->Add( BotEnter, 0, wxALL, 5 );
 /// Botão Mais
    BotMais = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxSize( 60,40 ), 0 );
    BotMais->SetToolTip( wxT("Operação adição") );
    gSizer1->Add( BotMais, 0, wxALL, 5 );
 ///
    bSizer1->Add( gSizer1, 1, wxEXPAND, 5 );

    this->SetSizer( bSizer1 );
    this->Layout();
 /// Barra de Status
    BarraStatus = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );

    Visor->SetInsertionPoint(2);

    // Connect Events
    ListaAngulo->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaAngulo ), NULL, this );
    ListaConst->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaConstante ), NULL, this );
    m_choice5->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaFuncao ), NULL, this );
    BotInv->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotInv ), NULL, this );
    BotLog->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotLog ), NULL, this );
    BotLn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotLn ), NULL, this );
    BotFat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotFat ), NULL, this );
    BotFuncInv->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotFuncInv ), NULL, this );
    BotSen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotSen ), NULL, this );
    BotCos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotCos ), NULL, this );
    BotTan->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotTan ), NULL, this );
    BotPotencia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotPot ), NULL, this );
    BotRaiz->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotRaiz ), NULL, this );
    BotTroca->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClicKBotTroca ), NULL, this );
    Bot7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot7 ), NULL, this );
    Bot8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot8 ), NULL, this );
    Bot9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot9 ), NULL, this );
    BotDiv->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotDiv ), NULL, this );
    BotOposto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotOposto ), NULL, this );
    Bot4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot4 ), NULL, this );
    Bot5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot5 ), NULL, this );
    Bot6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot6 ), NULL, this );
    BotVezes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotVezes ), NULL, this );
    BotDel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotDel ), NULL, this );
    Bot1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot1 ), NULL, this );
    Bot2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot2 ), NULL, this );
    Bot3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot3 ), NULL, this );
    BotMenos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotMenos ), NULL, this );
    BotCLR->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotClr ), NULL, this );
    BotVirgula->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotVirgula ), NULL, this );
    Bot0->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot0 ), NULL, this );
    BotEnter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotEnter ), NULL, this );
    BotMais->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotMais ), NULL, this );
}

CalcPilha::~CalcPilha()
{
    // Disconnect Events
    ListaAngulo->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaAngulo ), NULL, this );
    ListaConst->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaConstante ), NULL, this );
    m_choice5->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CalcPilha::EscolhaListaFuncao ), NULL, this );
    BotInv->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotInv ), NULL, this );
    BotLog->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotLog ), NULL, this );
    BotLn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotLn ), NULL, this );
    BotFat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotFat ), NULL, this );
    BotFuncInv->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotFuncInv ), NULL, this );
    BotSen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotSen ), NULL, this );
    BotCos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotCos ), NULL, this );
    BotTan->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotTan ), NULL, this );
    BotPotencia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotPot ), NULL, this );
    BotRaiz->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotRaiz ), NULL, this );
    BotTroca->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClicKBotTroca ), NULL, this );
    Bot7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot7 ), NULL, this );
    Bot8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot8 ), NULL, this );
    Bot9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot9 ), NULL, this );
    BotDiv->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotDiv ), NULL, this );
    BotOposto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotOposto ), NULL, this );
    Bot4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot4 ), NULL, this );
    Bot5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot5 ), NULL, this );
    Bot6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot6 ), NULL, this );
    BotVezes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotVezes ), NULL, this );
    BotDel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotDel ), NULL, this );
    Bot1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot1 ), NULL, this );
    Bot2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot2 ), NULL, this );
    Bot3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot3 ), NULL, this );
    BotMenos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotMenos ), NULL, this );
    BotCLR->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotClr ), NULL, this );
    BotVirgula->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotVirgula ), NULL, this );
    Bot0->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBot0 ), NULL, this );
    BotEnter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotEnter ), NULL, this );
    BotMais->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CalcPilha::ClickBotMais ), NULL, this );
}

////////////// Exibe as funções inversas
void CalcPilha::ClickBotFuncInv( wxCommandEvent& event )
{
    if( BotFuncInv->GetValue() )
    {
        BotLog->SetLabel( wxT("10ˣ") );
        BotLog->SetToolTip( wxT("Exponencial de base 10") );
        BotLn->SetLabel( wxT("eˣ") );
        BotLn->SetToolTip( wxT("Exponencial de base e") );
        BotSen->SetLabel( wxT("arcsen") );
        BotSen->SetToolTip( wxT("Função arco-seno") );
        BotCos->SetLabel( wxT("arccos") );
        BotCos->SetToolTip( wxT("Função arco-cosseno") );
        BotTan->SetLabel( wxT("arctan") );
        BotTan->SetToolTip( wxT("Função arco-tangente") );
    }
    else
    {
        BotLog->SetLabel( wxT("Log") );
        BotLog->SetToolTip( wxT("Logaritmo na base 10") );
        BotLn->SetLabel( wxT("Ln") );
        BotLn->SetToolTip( wxT("Logaritmo natural") );
        BotSen->SetLabel( wxT("sen") );
        BotSen->SetToolTip( wxT("Função seno") );
        BotCos->SetLabel( wxT("cos") );
        BotCos->SetToolTip( wxT("Função cosseno") );
        BotTan->SetLabel( wxT("tan") );
        BotTan->SetToolTip( wxT("Função tangente") );
    }
}

////////////// Exibe na pilha o resultado
int CalcPilha::InserirResultadoPilha(double num)
{
    if(fabs(num) < 9.0E-14) num = 0.0;
    if(fabs(num) > 1.0E14) return 1;
    wxString temp = wxString::Format( wxT("%.15G"), num );
    if( temp == wxT("-NAN") || temp == wxT("NAN") || temp == wxT("-INF") || temp == wxT("INF"))
    {
        return 1;
    }
    Visor->WriteText( wxT("\n")+temp );
    Visor->SetInsertionPoint(2);
    return 0;
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////    Operações aritméticas   /////////////////////////////////////////////////
/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////// Soma dois Números da Pilha
void CalcPilha::ClickBotMais( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação '+' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função '+': Numero(s) invalido(s)");
        return;
    }
    InserirResultadoPilha( temp1+temp2 );
}

////////////// Subtrai dois Números da Pilha
void CalcPilha::ClickBotMenos( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação '-' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função '-': Numero(s) invalido(s)");
        return;
    }
    InserirResultadoPilha( temp1-temp2 );
}

////////////// Multiplica dois Números da Pilha
void CalcPilha::ClickBotVezes( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação 'x' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'x': Numero(s) invalido(s)");
        return;
    }
    InserirResultadoPilha( temp1*temp2 );
}

////////////// Divide dois Números da Pilha
void CalcPilha::ClickBotDiv( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação '' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função '/': Numero(s) invalido(s)");
        return;
    }
    if( InserirResultadoPilha( temp1/temp2 ) )
    {
        BarraStatus->SetStatusText( wxT("Erro operação '': Indeterminação."), 0);
        return;
    }
}

////////////// Potência de dois Números da Pilha
void CalcPilha::ClickBotPot( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação 'x^y' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'x^y': Numero(s) invalido(s)");
        return;
    }
    if( InserirResultadoPilha( pow(temp1, temp2 ) ) )
    {
        BarraStatus->SetStatusText( wxT("Erro operação 'x^y': Indeterminação."), 0);
        return;
    }
}

////////////// Raiz de dois Números da Pilha
void CalcPilha::ClickBotRaiz( wxCommandEvent& event )
{
    double temp1, temp2;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 3 )
    {
        BarraStatus->SetStatusText( wxT("Operação 'raiz' requer dois argumentos."), 0);
        return;
    }
    if(RetiraNumPilha( &temp2 ) || RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'raiz': Numero(s) invalido(s)");
        return;
    }
    if( InserirResultadoPilha( pow(temp1, 1.0/temp2) ) )
    {
        BarraStatus->SetStatusText( wxT("Erro operação 'raiz': Indeterminação."), 0);
        return;
    }
}

////////////// Logaritmo de base 10 de um Número da Pilha
void CalcPilha::ClickBotLog( wxCommandEvent& event )
{
    double temp1;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        if( BotFuncInv->GetValue() ) BarraStatus->SetStatusText( wxT("Operação '10^x' requer um argumento."), 0);
        else BarraStatus->SetStatusText( wxT("Operação 'Log' requer um argumento."), 0);
        return;
    }
    if( RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'Log': Numero invalido");
        return;
    }
    if( BotFuncInv->GetValue() )
    {
        InserirResultadoPilha( exp10(temp1) );
    }
    else
    {
        if( InserirResultadoPilha( log10(temp1) ) )
        {
            BarraStatus->SetStatusText( wxT("Erro operação 'Log': Indeterminação."), 0);
            return;
        }
    }
}

////////////// Logaritmo natural de um número
void CalcPilha::ClickBotLn( wxCommandEvent& event )
{
    double temp1;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        if( BotFuncInv->GetValue() ) BarraStatus->SetStatusText( wxT("Operação 'e^x' requer um argumento."), 0);
        else BarraStatus->SetStatusText( wxT("Operação 'Ln' requer um argumento."), 0);
        return;
    }
    if( RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'Ln': Numero invalido");
        return;
    }
    if( BotFuncInv->GetValue() )
    {
        InserirResultadoPilha( exp(temp1) );
    }
    else
    {
        if( InserirResultadoPilha( log(temp1) ) )
        {
            BarraStatus->SetStatusText( wxT("Erro operação 'Ln': Indeterminação."), 0);
            return;
        }
    }
}

////////////// Inverso de um Número da Pilha
void CalcPilha::ClickBotInv( wxCommandEvent& event )
{
    double temp1;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        BarraStatus->SetStatusText( wxT("Operação '1/x' requer um argumento."), 0);
        return;
    }
    if(RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função '1/x': Numero invalido");
        return;
    }
    if( InserirResultadoPilha( 1.0/temp1) )
    {
        BarraStatus->SetStatusText( wxT("Erro operação '1/x': Indeterminação."), 0);
        return;
    }
}

////////////// Seno de um Número da Pilha
void CalcPilha::ClickBotSen( wxCommandEvent& event )
{
    double temp1, c = 1.0;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        if( BotFuncInv->GetValue() ) BarraStatus->SetStatusText( wxT("Função 'arcsen' requer um argumento."), 0);
        else BarraStatus->SetStatusText( wxT("Função 'sen' requer um argumento."), 0);
        return;
    }
    if(RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'sen': Numero invalido");
        return;
    }
    if( BotFuncInv->GetValue() )
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = 180.0/M_PI;
        if( InserirResultadoPilha( c*asin(temp1) ) )
        {
            BarraStatus->SetStatusText( wxT("Erro função 'arcsin': Indeterminação."), 0);
            return;
        }
    }
    else
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = M_PI/180.0;
        InserirResultadoPilha( sin(temp1*c) );
    }
}

////////////// Cosseno de um Número da Pilha
void CalcPilha::ClickBotCos( wxCommandEvent& event )
{
    double temp1, c = 1.0;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        if( BotFuncInv->GetValue() ) BarraStatus->SetStatusText( wxT("Função 'arccos' requer um argumento."), 0);
        else BarraStatus->SetStatusText( wxT("Função 'cos' requer um argumento."), 0);
        return;
    }
    if(RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'cos': Numero invalido");
        return;
    }
    if( BotFuncInv->GetValue() )
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = 180.0/M_PI;
        if( InserirResultadoPilha( c*acos(temp1) ) )
        {
            BarraStatus->SetStatusText( wxT("Erro função 'arccos': Indeterminação."), 0);
            return;
        }
    }
    else
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = M_PI/180.0;
        InserirResultadoPilha( cos(temp1*c) );
    }
}

////////////// Tangente de um Número da Pilha
void CalcPilha::ClickBotTan( wxCommandEvent& event )
{
    double temp1, c = 1.0;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        if( BotFuncInv->GetValue() ) BarraStatus->SetStatusText( wxT("Função 'arctan' requer um argumento."), 0);
        else BarraStatus->SetStatusText( wxT("Função 'tan' requer um argumento."), 0);
        return;
    }
    if(RetiraNumPilha( &temp1 ) )
    {
        printf("\nErro função 'tan': Numero invalido");
        return;
    }
    if( BotFuncInv->GetValue() )
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = 180.0/M_PI;
        InserirResultadoPilha( c*atan(temp1) );
    }
    else
    {
        if( ListaAngulo->GetCurrentSelection() == 0) c = M_PI/180.0;
        if( InserirResultadoPilha( tan(temp1*c) ) )
        {
            BarraStatus->SetStatusText( wxT("Erro operação 'tan': Indeterminação."), 0);
            return;
        }
    }
}

///////////////// Fatorial de um número
void CalcPilha::ClickBotFat( wxCommandEvent& event )
{
    double temp, fat;

    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( InserirNumDigitadoPilha() ) return;
    }
    if( Visor->GetNumberOfLines() < 2 )
    {
        BarraStatus->SetStatusText( wxT("Função 'n!' requer um argumento."), 0);
        return;
    }
    if(RetiraNumPilha( &temp ) )
    {
        printf("\nErro função 'n!': Numero invalido");
        return;
    }
    if(fabs(temp) < 1.0E-15 )
    {
         InserirResultadoPilha(1.0);
         return;
    }
    fat = temp;
    if(temp > 0.0)
    {
        while(temp > 1.0)
        {
            temp = temp - 1.0;
            fat = fat * temp;
        }
    }
    else
    {
        while(temp < -1.0)
        {
            temp = temp + 1.0;
            fat = fat * temp;
        }
    }
    if( InserirResultadoPilha(fat) )
    {
        BarraStatus->SetStatusText( wxT("Erro operação 'n!': Indeterminação."), 0);
        return;
    }

}

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////// Retira um numero da pilha e insere no ponteiro *num
int CalcPilha::RetiraNumPilha(double* num)
{
    if( Visor->GetNumberOfLines() == 1 ) return 1;
    if( !Visor->GetRange( Visor->GetLineLength(0)+1, Visor->GetLineLength(0)+Visor->GetLineLength(1)+1 ).ToDouble( num ) )
    {
        BarraStatus->SetStatusText( wxT("Número inválido."), 0);
        printf("\nErro na funcao RetiraNumPilha: numero invalido");
        return 1;
    }
    Visor->Remove( Visor->GetLineLength(0), Visor->GetLineLength(0)+Visor->GetLineLength(1)+1 );
    Visor->SetInsertionPoint(2);
    return 0;
}

////////////// Insere constante na pilha
void CalcPilha::EscolhaListaConstante( wxCommandEvent& event )
{
    Visor->SetInsertionPoint(2);
    if(Visor->GetLineText(0) != wxT("> "))
    {
        Visor->Remove( 2, Visor->GetLineLength(0) );
    }

    switch( ListaConst->GetCurrentSelection() )
    {
        case 0:
            Visor->WriteText( wxT("\n3,1415926535897932") );
            Visor->SetInsertionPoint(2);
            return;
        case 1:
            Visor->WriteText( wxT("\n2,718281828459045") );
            Visor->SetInsertionPoint(2);
            return;
    }
}

/////////////// Insere Números na Pilha
int CalcPilha::InserirNumDigitadoPilha(void)
{
    double temp;

    Visor->SetInsertionPoint(2);
    if( !Visor->GetRange( 2, Visor->GetLineLength(0) ).ToDouble( &temp ) )
    {
        BarraStatus->SetStatusText( wxT("Número inválido."), 0);
        Visor->Remove( 2, Visor->GetLineLength(0) );
        return 1;
    }
    Visor->Remove( 2, Visor->GetLineLength(0) );
    Visor->WriteText( wxString::Format( wxT("\n%.15G"), temp ) );
    Visor->SetInsertionPoint(2);
    BarraStatus->SetStatusText( wxT(""), 0);
    return 0;
}


////////////// Botão Enter
void CalcPilha::ClickBotEnter( wxCommandEvent& event )
{
    InserirNumDigitadoPilha();
}

/////////////// Deleta dígitos do número e Apaga o elemento do topo da pilha
void CalcPilha::ClickBotDel( wxCommandEvent& event )
{
    if( Visor->GetLineText(0) != wxT("> ") )
    {
        Visor->Remove( Visor->GetLineLength(0)-1, Visor->GetLineLength(0) );
    }
    else
    {
        if( Visor->GetNumberOfLines() > 1 )
        {
            Visor->Remove( Visor->GetLineLength(0), Visor->GetLineLength(0)+Visor->GetLineLength(1)+1 );
        }
    }
}

/////////////// Permuta o numero do topo com o próximo
void CalcPilha::ClicKBotTroca( wxCommandEvent& event )
{
    if( Visor->GetNumberOfLines() >= 3 && Visor->GetLineText(0) == wxT("> ") )
    {
        Visor->SetSelection( Visor->GetLineLength(0)+1, Visor->GetLineLength(0)+Visor->GetLineLength(1)+1 );
        wxString temp = Visor->GetStringSelection();
        Visor->Remove( Visor->GetLineLength(0)+1, Visor->GetLineLength(0)+Visor->GetLineLength(1)+2 );
        Visor->SetInsertionPoint(Visor->GetLineLength(0)+Visor->GetLineLength(1)+1);
        Visor->WriteText( wxT("\n")+temp );
        Visor->SetInsertionPoint(2);
    }
}

////////////// Limpa a Pilha
void CalcPilha::ClickBotClr( wxCommandEvent& event )
{
    Visor->SetValue( wxT("> ") );
    Visor->SetInsertionPoint(2);
    BarraStatus->SetStatusText( wxT(""), 0);
}

//////////////// Função para inserir dígitos no visor
void CalcPilha::InserirDigitoVisor(wxString d)
{
    if(Visor->GetLineLength(0) < 20)
    {
        Visor->WriteText( d );
    }
    BarraStatus->SetStatusText( wxT(""), 0);
}

//////////////// Função para o botão '+-'
void CalcPilha::ClickBotOposto( wxCommandEvent& event )
{
    if( Visor->GetLineText(0) != wxT("> ") )
    {
        if( Visor->GetLineText(0).GetChar(2) != '-' )
        {
            Visor->SetInsertionPoint(2);
            Visor->WriteText( wxT("-") );
            Visor->SetInsertionPoint( Visor->GetLineLength(0) );
        }
        else Visor->Remove(2,3);
    }
    else
    {
        if( Visor->GetNumberOfLines() == 1 ) return;
        if( Visor->GetLineText(1).GetChar(0) != '-' )
        {
            Visor->SetInsertionPoint( Visor->GetLineLength(0)+1 );
            Visor->WriteText( wxT("-") );
            Visor->SetInsertionPoint( Visor->GetLineLength(0) );
        }
        else Visor->Remove(Visor->GetLineLength(0)+1,Visor->GetLineLength(0)+2);
    }
}

//////////////// Função para o botão ','
void CalcPilha::ClickBotVirgula( wxCommandEvent& event )
{
    if( Visor->GetLineLength(0) < 20 )
    {
        if( Visor->GetLineText(0).Find(wxChar(',') ) == wxNOT_FOUND) Visor->WriteText( wxT(",") );
    }
    BarraStatus->SetStatusText( wxT(""), 0);
}

/// /////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////    Digitos 0 - 9   /////////////////////////////////////////////
/// /////////////////////////////////////////////////////////////////////////////////////////////////

//////////////// Função para o botão '0'
void CalcPilha::ClickBot0( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("0") );
}

//////////////// Função para o botão '1'
void CalcPilha::ClickBot1( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("1") );
}

//////////////// Função para o botão '2'
void CalcPilha::ClickBot2( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("2") );
}

//////////////// Função para o botão '3'
void CalcPilha::ClickBot3( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("3") );
}

//////////////// Função para o botão '4'
void CalcPilha::ClickBot4( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("4") );
}

//////////////// Função para o botão '5'
void CalcPilha::ClickBot5( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("5") );
}

//////////////// Função para o botão '6'
void CalcPilha::ClickBot6( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("6") );
}

//////////////// Função para o botão '7'
void CalcPilha::ClickBot7( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("7") );
}

//////////////// Função para o botão '8'
void CalcPilha::ClickBot8( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("8") );
}

//////////////// Função para o botão '9'
void CalcPilha::ClickBot9( wxCommandEvent& event )
{
    InserirDigitoVisor( wxT("9") );
}
