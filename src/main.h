//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
//#include "ThemeMgr.hpp"
#include <Dialogs.hpp>
#include <jpeg.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        // diversen
        TImage *Image1;
        TBevel *Bevel1;
        TPrintDialog *PrintDialog1;
        TMenuItem *Print1;

        // Main menu
        TMainMenu *MainMenu;

        // File menu
        TMenuItem *FileMenu;
        TMenuItem *FileExit;

        // Info menu
        TMenuItem *InfoMenu;
        TMenuItem *InfoAbout;

        // Maintenance menu
        TMenuItem *Maintenance1;
        TMenuItem *Forecastsettings1;

        // internet menu
        TMenuItem *Internet1;
        TMenuItem *Global1;
        TMenuItem *NorthAtlantic1;
        TMenuItem *SouthAtlantic1;
        TMenuItem *NorthPacific1;
        TMenuItem *SouthPacific1;
        TMenuItem *NorthSea1;
        TMenuItem *IndianOcean1;

        // Climatology menu
        TMenuItem *ClimatologyMenu;
        TMenuItem *ClimatologyGlobal;
        TMenuItem *ClimatologyNorthAtlantic;
        TMenuItem *ClimatologySouthAtlantic;
        TMenuItem *ClimatologyNorthPacific;
        TMenuItem *ClimatologySouthPacific;
        TMenuItem *ClimatologyIndianOcean;
        TMenuItem *ClimatologyAntarcticOcean;

        TMenuItem *GlobalJanuary;
        TMenuItem *GlobalFebruary;
        TMenuItem *GlobalMarch;
        TMenuItem *GlobalApril;
        TMenuItem *GlobalMay;
        TMenuItem *GlobalJune;
        TMenuItem *GlobalJuly;
        TMenuItem *GlobalAugust;
        TMenuItem *GlobalSeptember;
        TMenuItem *GlobalOctober;
        TMenuItem *GlobalNovember;
        TMenuItem *GlobalDecember;
        TMenuItem *N1;
        TMenuItem *GloballAllMonths;

        TMenuItem *NorthAtlanticJanuary;
        TMenuItem *NorthAtlanticFebruary;
        TMenuItem *NorthAtlanticMarch;
        TMenuItem *NorthAtlanticApril;
        TMenuItem *NorthAtlanticMay;
        TMenuItem *NorthAtlanticJune;
        TMenuItem *NorthAtlanticJuly;
        TMenuItem *NorthAtlanticAugust;
        TMenuItem *NorthAtlanticSeptember;
        TMenuItem *NorthAtlanticOctober;
        TMenuItem *NorthAtlanticNovember;
        TMenuItem *NorthAtlanticDecember;
        TMenuItem *N2;
        TMenuItem *NorthAtlanticAllMonths;

        TMenuItem *SouthAtlanticJanuary;
        TMenuItem *SouthAtlanticFebruary;
        TMenuItem *SouthAtlanticMarch;
        TMenuItem *SouthAtlanticApril;
        TMenuItem *SouthAtlanticMay;
        TMenuItem *SouthAtlanticJune;
        TMenuItem *SouthAtlanticJuly;
        TMenuItem *SouthAtlanticAugust;
        TMenuItem *SouthAtlanticSeptember;
        TMenuItem *SouthAtlanticOctober;
        TMenuItem *SouthAtlanticNovember;
        TMenuItem *SouthAtlanticDecember;
        TMenuItem *N3;
        TMenuItem *SouthAtlanticAllMonths;

        TMenuItem *NorthPacificJanuary;
        TMenuItem *NorthPacificFebruary;
        TMenuItem *NorthPacificMarch;
        TMenuItem *NorthPacificApril;
        TMenuItem *NorthPacificMay;
        TMenuItem *NorthPacifcJune;
        TMenuItem *NorthPacificJuly;
        TMenuItem *NorthPacificAugust;
        TMenuItem *NorthPacificSeptember;
        TMenuItem *NorthPacificOctober;
        TMenuItem *NorthPacificNovember;
        TMenuItem *NorthPacificDecember;
        TMenuItem *N4;
        TMenuItem *NorthPacificAllMonths;

        TMenuItem *SouthPacificJanuary;
        TMenuItem *SouthPacificFebruary;
        TMenuItem *SouthPacificMarch;
        TMenuItem *SouthPacificApril;
        TMenuItem *SouthPacificMay;
        TMenuItem *SouthPacificJune;
        TMenuItem *SouthPacificJuly;
        TMenuItem *SouthPacificAugust;
        TMenuItem *SouthPacificSeptember;
        TMenuItem *SouthPacificOctober;
        TMenuItem *SouthPacificNovember;
        TMenuItem *SouthPacificDecember;
        TMenuItem *N5;
        TMenuItem *SouthPacificAllMonths;

        TMenuItem *IndianJanuary;
        TMenuItem *IndianFebruary;
        TMenuItem *IndianMarch;
        TMenuItem *IndianApril;
        TMenuItem *IndianMay;
        TMenuItem *IndianJune;
        TMenuItem *IndianJuly;
        TMenuItem *IndianAugust;
        TMenuItem *IndianSeptember;
        TMenuItem *IndianOctober;
        TMenuItem *IndianNovember;
        TMenuItem *IndianDecember;
        TMenuItem *N6;
        TMenuItem *IndianAllMonths;

        TMenuItem *AntarcticJanuary;
        TMenuItem *AntarcticFebruary;
        TMenuItem *AntarcticMarch;
        TMenuItem *AntarcticApril;
        TMenuItem *AntarcticMay;
        TMenuItem *AntarcticJune;
        TMenuItem *AntarcticJuly;
        TMenuItem *AntarcticAugust;
        TMenuItem *AntarcticSeptember;
        TMenuItem *AntarcticOctober;
        TMenuItem *AntarcticNovember;
        TMenuItem *AntarcticDecember;
        TMenuItem *N7;
        TMenuItem *AntarcticAllmonths;

        // popup menu
        TPopupMenu *PopupMenu1;
        TMenuItem *PopupGlobal;
        TMenuItem *PopupGlobalDecember;
        TMenuItem *PopupGlobalNovember;
        TMenuItem *PopupGlobalOctober;
        TMenuItem *PopupGlobalSeptember;
        TMenuItem *PopupGlobalAugust;
        TMenuItem *PopupGlobalJuly;
        TMenuItem *PopupGlobalJune;
        TMenuItem *PopupGlobalMay;
        TMenuItem *PopupGlobalApril;
        TMenuItem *PopupGlobalMarch;
        TMenuItem *PopupGlobalFebruary;
        TMenuItem *PopupGlobalJanuary;
        TMenuItem *N8;
        TMenuItem *PopupGlobalAllMonths;

        TMenuItem *PopupNorthAtlantic;
        TMenuItem *PopupNorthAtlanticDecember;
        TMenuItem *PopupNorthAtlanticNovember;
        TMenuItem *PopupNorthAtlanticOctober;
        TMenuItem *PopupNorthAtlanticSeptember;
        TMenuItem *PopupNorthAtlanticAugust;
        TMenuItem *PopupNorthAtlanticJuly;
        TMenuItem *PopupNorthAtlanticJune;
        TMenuItem *PopupNorthAtlanticMay;
        TMenuItem *PopupNorthAtlanticApril;
        TMenuItem *PopupNorthAtlanticMarch;
        TMenuItem *PopupNorthAtlanticFebruary;
        TMenuItem *PopupNorthAtlanticJanuary;
        TMenuItem *N9;
        TMenuItem *PopupNorthAtlanticAllMonths;

        TMenuItem *PopupSouthAtlantic;
        TMenuItem *PopupSouthAtlanticDecember;
        TMenuItem *PopupSouthAtlanticNovember;
        TMenuItem *PopupSouthAtlanticOctober;
        TMenuItem *PopupSouthAtlanticSeptember;
        TMenuItem *PopupSouthAtlanticAugust;
        TMenuItem *PopupSouthAtlanticJuly;
        TMenuItem *PopupSouthAtlanticJune;
        TMenuItem *PopupSouthAtlanticMay;
        TMenuItem *PopupSouthAtlanticApril;
        TMenuItem *PopupSouthAtlanticMarch;
        TMenuItem *PopupSouthAtlanticFebruary;
        TMenuItem *PopupSouthAtlanticJanuary;
        TMenuItem *N10;
        TMenuItem *PopupSouthAtlanticAllMonths;

        TMenuItem *PopupNorthPacific;
        TMenuItem *PopupNorthPacificDecember;
        TMenuItem *PopupNorthPacificNovember;
        TMenuItem *PopupNorthPacificOctober;
        TMenuItem *PopupNorthPacificSeptember;
        TMenuItem *PopupNorthPacificAugust;
        TMenuItem *PopupNorthPacificJuly;
        TMenuItem *PopupNorthPacificJune;
        TMenuItem *PopupNorthPacificMay;
        TMenuItem *PopupNorthPacificApril;
        TMenuItem *PopupNorthPacificMarch;
        TMenuItem *PopupNorthPacificFebruary;
        TMenuItem *PopupNorthPacificJanuary;
        TMenuItem *N11;
        TMenuItem *PopupNorthPacificAllMonths;

        TMenuItem *PopupSouthPacific;
        TMenuItem *PopupSouthPacificDecember;
        TMenuItem *PopupSouthPacificNovember;
        TMenuItem *PopupSouthPacificOctober;
        TMenuItem *PopupSouthPacificSeptember;
        TMenuItem *PopupSouthPacificAugust;
        TMenuItem *PopupSouthPacificJuly;
        TMenuItem *PopupSouthPacificJune;
        TMenuItem *PopupSouthPacificMay;
        TMenuItem *PopupSouthPacificApril;
        TMenuItem *PopupSouthPacificMarch;
        TMenuItem *PopupSouthPacificFebruary;
        TMenuItem *PopupSouthPacificJanuary;
        TMenuItem *N12;
        TMenuItem *PopupSouthPacificAllMonths;

        TMenuItem *PopupIndianOcean;
        TMenuItem *PopupIndianOceanDecember;
        TMenuItem *PopupIndianOceanNovember;
        TMenuItem *PopupIndianOceanOctober;
        TMenuItem *PopupIndianOceanSeptember;
        TMenuItem *PopupIndianOceanAugust;
        TMenuItem *PopupIndianOceanJuly;
        TMenuItem *PopupIndianOceanJune;
        TMenuItem *PopupIndianOceanMay;
        TMenuItem *PopupIndianOceanApril;
        TMenuItem *PopupIndianOceanMarch;
        TMenuItem *PopupIndianOceanFebruary;
        TMenuItem *PopupIndianOceanJanuary;
        TMenuItem *N13;
        TMenuItem *PopupIndianOceanAllMonths;

        TMenuItem *PopupAntarcticOcean;
        TMenuItem *PopupAntarcticOceanJanuary;
        TMenuItem *PopupAntarcticOceanFebruary;
        TMenuItem *PopupAntarcticOceanMarch;
        TMenuItem *PopupAntarcticOceanApril;
        TMenuItem *PopupAntarcticOceanMay;
        TMenuItem *PopupAntarcticOceanJune;
        TMenuItem *PopupAntarcticOceanJuly;
        TMenuItem *PopupAntarcticOceanAugust;
        TMenuItem *PopupAntarcticOceanSeptember;
        TMenuItem *popupAntarcticOceanOctober;
        TMenuItem *PopupAntarcticOceanNovember;
        TMenuItem *PopupAntarcticOceanDecember;
        TMenuItem *N14;
        TMenuItem *PopupAntarcticOceanAllMonths;

        TMenuItem *InfoQualityStatement;
        TMenuItem *InfoClimatology;
        TMenuItem *N15;
        TMenuItem *GlobalYearly;
        TMenuItem *Global100YearReturnValue1;
        TMenuItem *GlobalExceedences;
   TMenuItem *N16;
   TMenuItem *PopupYearly;
   TMenuItem *Popupreturnvalue;
   TMenuItem *PopupExceedences;


        void __fastcall Quit_Program(TObject *Sender);
        void __fastcall InfoAboutClick(TObject *Sender);

        void __fastcall ClimatologyGlobalJanuary(TObject *Sender);
        void __fastcall ClimatologyGlobalFebruary(TObject *Sender);
        void __fastcall ClimatologyGlobalMarch(TObject *Sender);
        void __fastcall ClimatologyGlobalApril(TObject *Sender);
        void __fastcall ClimatologyGlobalMay(TObject *Sender);
        void __fastcall ClimatologyGlobalJune(TObject *Sender);
        void __fastcall ClimatologyGlobalJuly(TObject *Sender);
        void __fastcall ClimatologyGlobalAugust(TObject *Sender);
        void __fastcall ClimatologyGlobalSeptember(TObject *Sender);
        void __fastcall ClimatologyGlobalOctober(TObject *Sender);
        void __fastcall ClimatologyGlobalNovember(TObject *Sender);
        void __fastcall ClimatologyGlobalDecember(TObject *Sender);
        void __fastcall ClimatologyGlobalAllMonths(TObject *Sender);

        void __fastcall ClimatologyGlobalYearly(TObject *Sender);
        void __fastcall ClimatologyGlobalReturnValue(TObject *Sender);
        void __fastcall ClimatologyGlobalExceedences(TObject *Sender);

        void __fastcall ClimatologyNorthAtlanticJanuary(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticFebruary(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticMarch(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticApril(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticMay(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticJune(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticJuly(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticAugust(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticSeptember(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticOctober(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticNovember(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticDecember(TObject *Sender);
        void __fastcall ClimatologyNorthAtlanticAllMonths(TObject *Sender);

        void __fastcall ClimatologySouthAtlanticJanuary(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticFebruary(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticMarch(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticApril(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticMay(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticJune(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticJuly(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticAugust(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticSeptember(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticOctober(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticNovember(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticDecember(TObject *Sender);
        void __fastcall ClimatologySouthAtlanticAllMonths(TObject *Sender);

        void __fastcall ClimatologyNorthPacificJanuary(TObject *Sender);
        void __fastcall ClimatologyNorthPacificFebruary(TObject *Sender);
        void __fastcall ClimatologyNorthPacificMarch(TObject *Sender);
        void __fastcall ClimatologyNorthPacificApril(TObject *Sender);
        void __fastcall ClimatologyNorthPacificMay(TObject *Sender);
        void __fastcall ClimatologyNorthPacificJune(TObject *Sender);
        void __fastcall ClimatologyNorthPacificJuly(TObject *Sender);
        void __fastcall ClimatologyNorthPacificAugust(TObject *Sender);
        void __fastcall ClimatologyNorthPacificSeptember(TObject *Sender);
        void __fastcall ClimatologyNorthPacificOctober(TObject *Sender);
        void __fastcall ClimatologyNorthPacificNovember(TObject *Sender);
        void __fastcall ClimatologyNorthPacificDecember(TObject *Sender);
        void __fastcall ClimatologyNorthPacificAllMonths(TObject *Sender);

        void __fastcall ClimatologySouthPacificJanuary(TObject *Sender);
        void __fastcall ClimatologySouthPacificFebruary(TObject *Sender);
        void __fastcall ClimatologySouthPacificMarch(TObject *Sender);
        void __fastcall ClimatologySouthPacificApril(TObject *Sender);
        void __fastcall ClimatologySouthPacificMay(TObject *Sender);
        void __fastcall ClimatologySouthPacificJune(TObject *Sender);
        void __fastcall ClimatologySouthPacificJuly(TObject *Sender);
        void __fastcall ClimatologySouthPacificAugust(TObject *Sender);
        void __fastcall ClimatologySouthPacificSeptember(TObject *Sender);
        void __fastcall ClimatologySouthPacificOctober(TObject *Sender);
        void __fastcall ClimatologySouthPacificNovember(TObject *Sender);
        void __fastcall ClimatologySouthPacificDecember(TObject *Sender);
        void __fastcall ClimatologySouthPacificAllMonths(TObject *Sender);

        void __fastcall ClimatologyIndianOceanJanuary(TObject *Sender);
        void __fastcall ClimatologyIndianOceanFebruary(TObject *Sender);
        void __fastcall ClimatologyIndianOceanMarch(TObject *Sender);
        void __fastcall ClimatologyIndianOceanApril(TObject *Sender);
        void __fastcall ClimatologyIndianOceanMay(TObject *Sender);
        void __fastcall ClimatologyIndianOceanJune(TObject *Sender);
        void __fastcall ClimatologyIndianOceanJuly(TObject *Sender);
        void __fastcall ClimatologyIndianOceanAugust(TObject *Sender);
        void __fastcall ClimatologyIndianOceanSeptember(TObject *Sender);
        void __fastcall ClimatologyIndianOceanOctober(TObject *Sender);
        void __fastcall ClimatologyIndianOceanNovember(TObject *Sender);
        void __fastcall ClimatologyIndianOceanDecember(TObject *Sender);
        void __fastcall ClimatologyIndianOceanAllMonths(TObject *Sender);

        void __fastcall ClimatologyAntarcticOceanJanuary(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanFebruary(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanMarch(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanApril(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanMay(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanJune(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanJuly(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanAugust(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanSeptember(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanOctober(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanNovember(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanDecember(TObject *Sender);
        void __fastcall ClimatologyAntarcticOceanAllMonths(TObject *Sender);

        void __fastcall Print_Chart(TObject *Sender);
        void __fastcall FormMouseWheel(TObject *Sender, TShiftState Shift, int WheelDelta, TPoint &MousePos, bool &Handled);
        void __fastcall OnMouseMoveImage(TObject *Sender, TShiftState Shift, int X, int Y);
        void __fastcall OnKeyDownForm1(TObject *Sender, WORD &Key, TShiftState Shift);
        void __fastcall Forecastsettings1Click(TObject *Sender);
        void __fastcall Global1Click(TObject *Sender);
        void __fastcall NorthAtlantic1Click(TObject *Sender);
        void __fastcall SouthAtlantic1Click(TObject *Sender);
        void __fastcall NorthPacific1Click(TObject *Sender);
        void __fastcall SouthPacific1Click(TObject *Sender);
        void __fastcall NorthSea1Click(TObject *Sender);
        void __fastcall IndianOcean1Click(TObject *Sender);
        void __fastcall InfoClimatologyClick(TObject *Sender);
        void __fastcall InfoQualityStatementClick(TObject *Sender);
   void __fastcall FormDestroy(TObject *Sender);

private:	// User declarations
        void ShowChart(AnsiString chart_name);
        void InternetLink(AnsiString aanvraag_ocean);

        // voor HTMLHelp (chm)
        typedef HWND WINAPI (*HtmlHelpFunc)( HWND hwndCaller, LPCSTR pszFile, UINT uCommand, DWORD dwData );
        HtmlHelpFunc HTMLHelp;
        HINSTANCE hHelpOCX;
        
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
