//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "about.h"
#include "forecastsettings.h"
#include "dir.h"                          // getcwd
#include "fstream.h"                      // ifstream
#include "constanten.h";
#include "htmlhelp.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
//#pragma link "ThemeMgr"
#pragma resource "*.dfm"
TForm1 *Form1;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
   ifstream is;
   const int MAXLENGTH = 255;
   const AnsiString desktop_sub_dir = "\\desktop\\";
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_desktop_path = "";
   AnsiString info = "";
   AnsiString desktop_name = "";


   // voor chm HTMLhelp
   hHelpOCX = ::LoadLibrary("hhctrl.ocx");
   if (!hHelpOCX)
      ::MessageBox(0, "Cannot use the html help", "TurboWin Error", MB_OK | MB_ICONERROR);


   //Image1 -> Width = Screen -> Width - 20;      // op deze manier de plaatjes altijd in midden van het scherm (i.v.m. center)

                                                // -20 i.v.m. breedte vertical scrollbar
   // nadeel: bij printen kan een deel niet geprint worden !


   // mogelijke scherm dimensies:
   // 800 * 600
   // 1024 * 768  (typisch 15 inch tft, 17 inch crt)
   // 1152 * 864
   // 1280 * 960
   // 1280 * 1024 (typisch 17 en 19 inch tft)
   // 1600 * 1200 (typisch 20 inch tft)
   // 1680 * 1050 (typisch 20 inch tft )
   // 2048 * 1536
   //
   //
   // nb files moeten van type bmp of jpg zijn (bij jpg #include <jpeg.hpp>)
   

   if (Screen -> Width <= 1280 && Screen -> Height <= 1024)
   {
      Image1 -> Width = 1280;
      Image1 -> Height = 1024;
      Image1 -> Stretch = false;
      desktop_name = "desktop_owa_1280_1024.jpg";
   }
   else if (Screen -> Width <= 2288 && Screen -> Height <= 1712)
   {
      Image1 -> Width = 2288;
      Image1 -> Height = 1712;
      Image1 -> Stretch = false;
      desktop_name = "desktop_owa_2288_1712.jpg";
   }
   else
   {
      desktop_name = "unknown";     // dit betekent dan dat er gewoon niets gebeurd (geen melding o.i.d) het desktopvlak blijft wit
   }



   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_desktop_path = wave_climate_atlas_root_path + desktop_sub_dir + desktop_name;

   is.open(volledig_desktop_path.c_str(), ios::in);
   if (is)
   {
      is.close();
      Image1 -> Picture -> LoadFromFile(volledig_desktop_path.c_str());
   }
   // indien desktop file niet te opnenen gewoon niets doen

   //else
   //{
   //   info = "Unable to open desktop";
   //   info += " (";
   //   info += volledig_desktop_path;
   //   info += ")";
   //   ::MessageBox(0, info.c_str(), "Wave Climate Atlas error", MB_OK);
   //} // else
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Quit_Program(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InfoAboutClick(TObject *Sender)
{
   //AboutForm -> ShowModal();    // op deze manier: na versleoen niet meer in centrum !
    AboutForm = new TAboutForm(this);
    AboutForm->ShowModal();
    delete AboutForm;
}
//---------------------------------------------------------------------------


void TForm1::ShowChart(AnsiString chart_name)
{
   ifstream is;
   const int MAXLENGTH = 255;
   const AnsiString chart_sub_dir = "\\charts\\";
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_chart_path = "";
   AnsiString info = "";


   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_chart_path = wave_climate_atlas_root_path + chart_sub_dir + chart_name;

   is.open(volledig_chart_path.c_str(), ios::in);
   //b.v. is.open("c:\\program files\\borland\\cbuilder5\\projects\\climate_atlas\\charts\\globaljanuary.bmp", ios::in);
   if (is)
   {
      is.close();

      Image1 -> Width = 800;
      Image1 -> Height = 1000;

      Image1 -> Picture -> LoadFromFile(volledig_chart_path.c_str());
      //b.v. Image1 -> Picture -> LoadFromFile("c:\\program files\\borland\\cbuilder5\\projects\\climate_atlas\\charts\\globaljanuary.bmp");
   }
   else
   {
      info = "Unable to open chart";
      info += " (";
      info += volledig_chart_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else

}

void __fastcall TForm1::Print_Chart(TObject *Sender)
{
   if (PrintDialog1 -> Execute())
   {
      Print();
   }   
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyGlobalJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyGlobalApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyGlobalMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "global_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyGlobalAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "global_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "global_all_months_1280_960.bmp";
   else
      chart_name = "global_all_months_1024_768.bmp";

   ShowChart(chart_name);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyNorthAtlanticJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyNorthAtlanticApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyNorthAtlanticMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthAtlanticDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northatlantic_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyNorthAtlanticAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "northatlantic_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "northatlantic_all_months_1280_960.bmp";
   else
      chart_name = "northatlantic_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologySouthAtlanticJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologySouthAtlanticApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologySouthAtlanticMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthAtlanticDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southatlantic_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologySouthAtlanticAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "southatlantic_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "southatlantic_all_months_1280_960.bmp";
   else
      chart_name = "southatlantic_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------



void __fastcall TForm1::ClimatologyNorthPacificJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyNorthPacificApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyNorthPacificMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyNorthPacificDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "northpacific_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyNorthPacificAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "northpacific_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "northpacific_all_months_1280_960.bmp";
   else
      chart_name = "northpacific_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------



void __fastcall TForm1::ClimatologySouthPacificJanuary(TObject *Sender)
{
   AnsiString chart_name;

   
   chart_name = "southpacific_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologySouthPacificApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologySouthPacificMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologySouthPacificDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "southpacific_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologySouthPacificAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "southpacific_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "southpacific_all_months_1280_960.bmp";
   else
      chart_name = "southpacific_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyIndianOceanJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyIndianOceanApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyIndianOceanMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyIndianOceanDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "indianocean_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyIndianOceanAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "indianocean_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "indianocean_all_months_1280_960.bmp";
   else
      chart_name = "indianocean_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------



void __fastcall TForm1::ClimatologyAntarcticOceanJanuary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_january.bmp";
   ShowChart(chart_name);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanFebruary(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_february.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanMarch(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_march.bmp";
   ShowChart(chart_name);
}


//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyAntarcticOceanApril(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_april.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ClimatologyAntarcticOceanMay(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_may.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanJune(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_june.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanJuly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_july.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanAugust(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_august.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanSeptember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_september.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanOctober(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_october.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanNovember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_november.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ClimatologyAntarcticOceanDecember(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "antarctic_december.bmp";
   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyAntarcticOceanAllMonths(TObject *Sender)
{
   AnsiString chart_name;


   //chart_name = "antarctic_all_months.bmp";
   if (Screen -> Width >= 1280)
      chart_name = "antarctic_all_months_1280_960.bmp";
   else
      chart_name = "antarctic_all_months_1024_768.bmp";

   ShowChart(chart_name);
}

//---------------------------------------------------------------------------


void __fastcall TForm1::ClimatologyGlobalYearly(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "yearly.bmp";
   ShowChart(chart_name);
}

void __fastcall TForm1::ClimatologyGlobalReturnValue(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "return_value_100.bmp";
   ShowChart(chart_name);
}


void __fastcall TForm1::ClimatologyGlobalExceedences(TObject *Sender)
{
   AnsiString chart_name;


   chart_name = "exceedences.bmp";
   ShowChart(chart_name);
}





void __fastcall TForm1::FormMouseWheel(TObject *Sender, TShiftState Shift, int WheelDelta, TPoint &MousePos, bool &Handled)
{
   if (WheelDelta < 0)
      VertScrollBar -> Position += 20;
   else
      VertScrollBar -> Position -= 20;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OnMouseMoveImage(TObject *Sender, TShiftState Shift, int X, int Y)
{
   Image1 -> Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OnKeyDownForm1(TObject *Sender, WORD &Key, TShiftState Shift)
{
   switch (Key)
   {
      case VK_NEXT  : VertScrollBar -> Position += 160;      // Page Down
                      break;
      case VK_PRIOR : VertScrollBar -> Position -= 160;      // Page Up
                      break;
      case VK_DOWN  : VertScrollBar -> Position += 20;       // Arrow Down
                      break;
      case VK_UP    : VertScrollBar -> Position -= 20;       // Arrow Up
                      break;
      case VK_RIGHT : HorzScrollBar -> Position += 20;       // Arrow right
                      break;
      case VK_LEFT  : HorzScrollBar -> Position -= 20;       // Arrow left
                      break;
      // TAB werkt niet (wordt eerder door Windows afgevangen voor ander gebruik
      //case VK_TAB   : HorzScrollBar -> Position += 160;      // TAB
      //                break;

   } // switch Key
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Forecastsettings1Click(TObject *Sender)
{
    forecastsettingsform = new Tforecastsettingsform(this);
    forecastsettingsform -> ShowModal();
    delete forecastsettingsform;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Global1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_GLOBAL;
   InternetLink(aanvraag_ocean);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::NorthAtlantic1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_NORTHATLANTIC;
   InternetLink(aanvraag_ocean);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SouthAtlantic1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_SOUTHATLANTIC;
   InternetLink(aanvraag_ocean);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::NorthPacific1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_NORTHPACIFIC;
   InternetLink(aanvraag_ocean);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SouthPacific1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_SOUTHPACIFIC;
   InternetLink(aanvraag_ocean);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::NorthSea1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_NORTHSEA;
   InternetLink(aanvraag_ocean);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::IndianOcean1Click(TObject *Sender)
{
   AnsiString aanvraag_ocean = TEXT_INDIANOCEAN;
   InternetLink(aanvraag_ocean);

}
//---------------------------------------------------------------------------

void TForm1::InternetLink(AnsiString aanvraag_ocean)
{
   ifstream is;
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   char char_record[MAXLENGTH];
   AnsiString volledig_internet_settings_path = "";
   AnsiString info = "";
   AnsiString record;


   getcwd(wave_climate_atlas_root_path, MAXLENGTH);
   volledig_internet_settings_path = wave_climate_atlas_root_path + settings_sub_dir + "internet.txt";

   is.open(volledig_internet_settings_path.c_str(), ios::in);
   if (is)
   {
      do // while (!is.eof())
      {
         char_record[0] = '\0';                         // initialisatie
         is.getline(char_record, 256);                  // record line inlezen

         if ((record = (AnsiString)char_record).SubString(1, 20) == aanvraag_ocean)
         {
            if (record.Length() >= 21)
            {
               AnsiString link = record.SubString(21, record.Length());
               ShellExecute(NULL, "open", link.c_str(), 0, 0, SW_SHOWNORMAL);
            } // if (record.Length() >= 21)
         }
      } while (!is.eof());
      is.close();
   } // if (is)
   else
   {
      info = "Unable to open file";
      info += " (";
      info += volledig_internet_settings_path;
      info += ")";
      ::MessageBox(0, info.c_str(), program_name.c_str(), MB_OK);
   } // else
}
//---------------------------------------------------------------------------


void __fastcall TForm1::InfoClimatologyClick(TObject *Sender)
{
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_help_path = "";
   const AnsiString help_sub_dir = "\\help\\";
   const int MAXLENGTH = 255;

   
   getcwd(wave_climate_atlas_root_path, MAXLENGTH);

   volledig_help_path = wave_climate_atlas_root_path + help_sub_dir + "CLIMATOL.CHM";
   HTMLHelp = (HtmlHelpFunc)::GetProcAddress(hHelpOCX, ATOM_HTMLHELP_API_ANSI);
   HTMLHelp(0, volledig_help_path.c_str(), HH_DISPLAY_TOPIC, 0);
}


//---------------------------------------------------------------------------

void __fastcall TForm1::InfoQualityStatementClick(TObject *Sender)
{
   char wave_climate_atlas_root_path[MAXLENGTH] = "";
   AnsiString volledig_help_path = "";
   const AnsiString help_sub_dir = "\\help\\";
   const int MAXLENGTH = 255;

   
   getcwd(wave_climate_atlas_root_path, MAXLENGTH);

   volledig_help_path = wave_climate_atlas_root_path + help_sub_dir + "QUALITY.CHM";
   HTMLHelp = (HtmlHelpFunc)::GetProcAddress(hHelpOCX, ATOM_HTMLHELP_API_ANSI);
   HTMLHelp(0, volledig_help_path.c_str(), HH_DISPLAY_TOPIC, 0);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormDestroy(TObject *Sender)
{
   // voor chm HTMLHelp
   ::FreeLibrary("hhctrl.ocx");
}
//---------------------------------------------------------------------------

