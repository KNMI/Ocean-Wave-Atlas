//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "about.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAboutForm *AboutForm;
//---------------------------------------------------------------------------


__fastcall TAboutForm::TAboutForm(TComponent* Owner) : TForm(Owner)
{
   //DevelopersEmailEdit -> Font -> Style = TFontStyles()<< fsUnderline;
   //caretPos

   //AnsiString tect = "test"

   //TEdit
         //DevelopersEmailEdit->Text = Edit2->Text ;
   //      DevelopersEmailEdit->SelLength = 0 ;
   //      DevelopersEmailEdit->SelStart = DevelopersEmailEdit->Text.Length();
   //      Key = NULL ;    // <- I forgot to do this

   //HideCaret(DevelopersEmailEdit->Handle);
   //ActiveControl = NULL;

}
//---------------------------------------------------------------------------
void __fastcall TAboutForm::OKClick(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
void __fastcall TAboutForm::DeveloperEditClick(TObject *Sender)
{
  // ShellExecute();
  // ShellExecute(0, static_cast<const char*>(x.data()), "File.txt", NULL, NULL, SW_SHOW);

  //ShellExecute(Handle, ZERO, " mailto:Paethon@cbuilder.de?subject = the subject ", ZERO, ZERO, SW_NORMAL);


  //ShellExecute(0, NULL, "mailto:martin.stam@knmi.nl ?Subject=Test&Body=Just testing the example", NULL, NULL, SW_NORMAL);
   // KillFocus();

   //::SendMessage(Memo1->Handle, EM_SCROLLCARET, 0, 0);

   //::CreateCaret(Handle, NULL, 10, abs(Font->Height));
   //::CreateCaret(Handle, NULL, 100, 100);

   //HideCaret(DevelopersEmailEdit->Handle);
   
   //ActiveControl = NULL;

   //DevelopersEmailEdit -> Text = "test";
   //HideCaret(DevelopersEmailEdit->Handle);

   //DevelopersEmailEdit->SelStart = 100;

   //::DestroyCaret();


   //::SetCaretBlinkTime(500);

   OK -> SetFocus();                                 // Focus naar OK button (Caret is zo verdwenen)
   AboutWebSiteEdit -> Font -> Color = clRed;     // na eerste bezoek link rood maken

   //ShellExecute(NULL, "open", "mailto:martin.stam@knmi.nl ?Subject=Ocean Wave Atlas&Body=Dear Martin", 0, 0, SW_SHOWNORMAL);
   ShellExecute(NULL, "open", "http://www.knmi.nl/onderzk/oceano/waves/era40/atlas.html", 0, 0, SW_SHOWNORMAL);


}
//---------------------------------------------------------------------------




