//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("MainUnit.cpp", MainForm);
USEFORM("EventsUnit.cpp", EventsForm);
USEFORM("EventSpecialGuestsUnit.cpp", SpecialGuestsForm);
USEFORM("GuestTypesUnit.cpp", GuestTypesForm);
USEFORM("EventTypesUnit.cpp", EventTypesForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TEventsForm), &EventsForm);
		Application->CreateForm(__classid(TSpecialGuestsForm), &SpecialGuestsForm);
		Application->CreateForm(__classid(TGuestTypesForm), &GuestTypesForm);
		Application->CreateForm(__classid(TEventTypesForm), &EventTypesForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
