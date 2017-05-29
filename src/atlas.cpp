//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "constanten.h"

USEFORM("forecastsettings.cpp", forecastsettingsform);
USEFORM("about.cpp", AboutForm);
USEFORM("main.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = program_name;
                 Application->Title = program_name;//"Ocean Wave Atlas";
                 Application->Title = "Ocean Wave Atlas";
       Application->CreateForm(__classid(TForm1), &Form1);
       Application->CreateForm(__classid(TAboutForm), &AboutForm);
       Application->CreateForm(__classid(Tforecastsettingsform), &forecastsettingsform);
       Application->CreateForm(__classid(Tforecastsettingsform), &forecastsettingsform);
       Application->CreateForm(__classid(TAboutForm), &AboutForm);
       Application->CreateForm(__classid(TForm1), &Form1);
       Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
