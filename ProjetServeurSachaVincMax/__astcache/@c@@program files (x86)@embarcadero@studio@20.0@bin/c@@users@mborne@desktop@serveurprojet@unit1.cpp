//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	//ServerSocket1->Active = False;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button1Click(TObject *Sender)
{

	ServerSocket1->Port = 23;
	ServerSocket1->Active = True;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Label2Click(TObject *Sender)
{
	if (ServerSocket1->Active) {

       Label2->Caption = "connecté" ;
	}
}
//---------------------------------------------------------------------------



