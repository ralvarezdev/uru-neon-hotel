//---------------------------------------------------------------------------

#ifndef EventTypesUnitH
#define EventTypesUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBCtrls.hpp>
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
//---------------------------------------------------------------------------
class TEventTypesForm : public TForm
{
__published:	// IDE-managed Components
	TImage *MainBanner;
	TLabel *EventsTypesLabel;
	TDBGrid *EventTypesDBGrid;
	TDBNavigator *SpecialGuestsDBNavigator;
	TFDConnection *EventTypesConnection;
	TFDQuery *EventTypesQuery;
	TDataSource *EventTypesDataSource;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TEventTypesForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEventTypesForm *EventTypesForm;
//---------------------------------------------------------------------------
#endif
