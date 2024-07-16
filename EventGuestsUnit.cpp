//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EventsUnit.h"
#include "EventGuestsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEventGuestsForm *EventGuestsForm;
//---------------------------------------------------------------------------
__fastcall TEventGuestsForm::TEventGuestsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEventGuestsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
 EventsForm->Show();
}
//---------------------------------------------------------------------------



