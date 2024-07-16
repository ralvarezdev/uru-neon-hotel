//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "EventsUnit.h"
#include "GuestTypesUnit.h"
#include "EventTypesUnit.h"
#include "EventGuestsUnit.h"
#include "EventGuestAttendeesUnit.h"
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

void __fastcall TEventsForm::GuestsButtonClick(TObject *Sender)
{
	EventsForm->Hide();
	EventGuestsForm->ShowModal();
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

void __fastcall TEventsForm::EventGuestAttendeesButtonClick(TObject *Sender)
{
	EventsForm->Hide();
	EventGuestAttendeesForm->ShowModal();
}
//---------------------------------------------------------------------------

