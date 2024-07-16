//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EventsUnit.h"
#include "EventGuestAttendeesUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEventGuestAttendeesForm *EventGuestAttendeesForm;
//---------------------------------------------------------------------------
__fastcall TEventGuestAttendeesForm::TEventGuestAttendeesForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEventGuestAttendeesForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	EventsForm->Show();
}
//---------------------------------------------------------------------------
