//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit9.h"
#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int razem=0;
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button2Click(TObject *Sender)
{
      Form11->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm11::Button1Click(TObject *Sender)
{
           if( Edit1->Text==""||Edit2->Text=="")  return;
     Form9-> StringGrid1->RowCount=Form9->StringGrid1->RowCount+1;
      int lp=Form9->StringGrid1->RowCount-1;
      AnsiString dat= Form9->DateTimePicker1->Date;
        dat.Delete(11,9);
     Form9->StringGrid1->Cells[0][lp]=dat;
     Form9->StringGrid1->Cells[1][lp]= Edit1->Text;
     Form9->StringGrid1->Cells[2][lp]= Edit2->Text;


     Form9->Edit2->Text=razem=razem+StrToInt( Edit2->Text);


     Edit1->Text="";
     Edit2->Text="";

         Form11->Close();

}
//---------------------------------------------------------------------------

