//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "EventsUnit.h"
#include "GuestTypesUnit.h"
#include "EventTypesUnit.h"
#include "EventSpecialGuestsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEventsForm *EventsForm;
//---------------------------------------------------------------------------
__fastcall TEventsForm::TEventsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TEventsForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	 MainForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TEventsForm::SpecialGuestsButtonClick(TObject *Sender)
{
	EventsForm->Hide();
	SpecialGuestsForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TEventsForm::GuestTypesButtonClick(TObject *Sender)
{
	 EventsForm->Hide();
	GuestTypesForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TEventsForm::EventTypesButtonClick(TObject *Sender)
{
		EventsForm->Hide();
	EventTypesForm->ShowModal();
}
//---------------------------------------------------------------------------

