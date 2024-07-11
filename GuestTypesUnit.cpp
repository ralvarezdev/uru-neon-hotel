//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GuestTypesUnit.h"
#include "EventsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGuestTypesForm *GuestTypesForm;
//---------------------------------------------------------------------------
__fastcall TGuestTypesForm::TGuestTypesForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGuestTypesForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	EventsForm->Show();
}
//---------------------------------------------------------------------------

