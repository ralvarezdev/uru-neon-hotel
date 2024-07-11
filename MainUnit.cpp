//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "EventsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::LoginButtonClick(TObject *Sender)
{
	// Setting SQL Query parameters
	LoginQuery->Params->Items[0]->AsString =  PasswordEdit->Text;
	LoginQuery->Params->Items[1]->AsString =  UsernameEdit->Text;
	LoginQuery->Open();

	// Iterating record result
	LoginQuery->First();
	if(LoginQuery->RecordCount>0&&LoginQuery->FieldByName("user_type")->AsString=="ADMIN")  {
		MainForm->Hide();
		EventsForm->ShowModal();
	}

	LoginQuery->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::UsernameEditClick(TObject *Sender)
{
	if(UsernameEdit->Text=="Username"){
		UsernameEdit->Text="";
		UsernameEdit->Font->Color= clGrayText;
	}

	UsernameEdit->Font->Color= clBtnText;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::PasswordEditClick(TObject *Sender)
{
	if(PasswordEdit->Text=="Password")        {
		PasswordEdit->Text="";
		PasswordEdit->Font->Color= clGrayText;
	}

	PasswordEdit->Font->Color= clBtnText;
}
//---------------------------------------------------------------------------


