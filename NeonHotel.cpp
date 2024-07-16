//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("MainUnit.cpp", MainForm);
USEFORM("GuestTypesUnit.cpp", GuestTypesForm);
USEFORM("EventGuestsUnit.cpp", EventGuestsForm);
USEFORM("EventsUnit.cpp", EventsForm);
USEFORM("EventTypesUnit.cpp", EventTypesForm);
USEFORM("EventGuestAttendeesUnit.cpp", EventGuestAttendeesForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TEventsForm), &EventsForm);
		Application->CreateForm(__classid(TEventGuestsForm), &EventGuestsForm);
		Application->CreateForm(__classid(TGuestTypesForm), &GuestTypesForm);
		Application->CreateForm(__classid(TEventTypesForm), &EventTypesForm);
		Application->CreateForm(__classid(TEventGuestAttendeesForm), &EventGuestAttendeesForm);
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
