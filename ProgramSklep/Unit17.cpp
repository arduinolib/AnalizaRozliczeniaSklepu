//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
#include "Unit16.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm17 *Form17;
//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Button1Click(TObject *Sender)
{
        if( Edit1->Text==""||Edit2->Text==""|| Edit3->Text==""|| Edit4->Text==""||
     Edit5->Text==""|| Edit6->Text=="")
     {
        Application->MessageBox(("Lista jest niepe³na „" +Edit5->Text+ "”").c_str(),
        "Uzupe³nij listê", MB_OK | MB_ICONINFORMATION);
        return;
     }
    Form16->StringGrid1->RowCount=Form16->StringGrid1->RowCount+1;
    int lp=Form16->StringGrid1->RowCount-1;
     Form16->StringGrid1->Cells[0][lp]=Edit4->Text;
     Form16->StringGrid1->Cells[1][lp]=Edit1->Text;
     Form16->StringGrid1->Cells[2][lp]=Edit2->Text;
     Form16->StringGrid1->Cells[3][lp]=Edit3->Text;
     Form16->StringGrid1->Cells[4][lp]=Edit5->Text;
     Form16->StringGrid1->Cells[5][lp]=Edit6->Text;
      Form17->Close();

}
//---------------------------------------------------------------------------
void __fastcall TForm17::Button2Click(TObject *Sender)
{
     Form17->Close();
}
//---------------------------------------------------------------------------

