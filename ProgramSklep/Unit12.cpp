//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm12::Button1Click(TObject *Sender)
{
     Form10->StringGrid1->RowCount=Form10->StringGrid1->RowCount+1;
     int lp=Form10->StringGrid1->RowCount-1;
     Form10->StringGrid1->Cells[0][lp]=Edit1->Text;


     Edit1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::Button2Click(TObject *Sender)
{
       Form12->Close();
}
//---------------------------------------------------------------------------

