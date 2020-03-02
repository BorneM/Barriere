//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ProjetBarriere.h"
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






void __fastcall TForm1::Button3Click(TObject *Sender)
{
    ClientSocket1->Port = 23;
	ClientSocket1->Host = "172.20.101.152";
	ClientSocket1->Active = True;
	if( ClientSocket1->Active )
	Label9->Caption ="connecté";
	else{
        Label9->Caption="pas co";
	}


}
//---------------------------------------------------------------------------


void __fastcall TForm1::ClientSocket1Error(TObject *Sender, TCustomWinSocket *Socket,
          TErrorEvent ErrorEvent, int &ErrorCode)
{
    ErrorCode=0;
}
//---------------------------------------------------------------------------


