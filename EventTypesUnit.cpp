//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EventsUnit.h"
#include "EventTypesUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEventTypesForm *EventTypesForm;
//---------------------------------------------------------------------------
__fastcall TEventTypesForm::TEventTypesForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEventTypesForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	EventsForm->Show();
}
//---------------------------------------------------------------------------

