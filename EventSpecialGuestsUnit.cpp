//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EventsUnit.h"
#include "EventSpecialGuestsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSpecialGuestsForm *SpecialGuestsForm;
//---------------------------------------------------------------------------
__fastcall TSpecialGuestsForm::TSpecialGuestsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSpecialGuestsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
 EventsForm->Show();
}
//---------------------------------------------------------------------------


