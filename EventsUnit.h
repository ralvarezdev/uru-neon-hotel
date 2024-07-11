//---------------------------------------------------------------------------

#ifndef EventsUnitH
#define EventsUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.ODBC.hpp>
#include <FireDAC.Phys.ODBCDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TEventsForm : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *EventsDBGrid;
	TDBNavigator *EventsDBNavigator;
	TFDConnection *SpecialGuestsConnection;
	TDataSource *EventsDataSource;
	TFDQuery *EventsQuery;
	TImage *MainBanner;
	TLabel *EventsLabel;
	TButton *SpecialGuestsButton;
	TButton *GuestTypesButton;
	TButton *EventTypesButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpecialGuestsButtonClick(TObject *Sender);
	void __fastcall GuestTypesButtonClick(TObject *Sender);
	void __fastcall EventTypesButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TEventsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEventsForm *EventsForm;
//---------------------------------------------------------------------------
#endif
