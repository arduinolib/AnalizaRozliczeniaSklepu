//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
         ComboBox1->Items->Add("szt");
         ComboBox1->Items->Add("kg");
         ComboBox1->Items->Add("pêcz.");
         ComboBox1->Items->Add("opak.");
         ComboBox1->ItemIndex=1;

         ComboBox2->Items->Add("20");
         ComboBox2->Items->Add("25");
         ComboBox2->Items->Add("30");
         ComboBox2->Items->Add("40");
         ComboBox2->ItemIndex=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
        Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
        Form2->StringGrid1->RowCount=Form2->StringGrid1->RowCount+1;
      int lp=Form2->StringGrid1->RowCount-1;
     Form2->StringGrid1->Cells[0][lp]=Edit1->Text;
     Form2->StringGrid1->Cells[1][lp]=ComboBox1->Text;
     Form2->StringGrid1->Cells[2][lp]=ComboBox2->Text;

     Edit1->Text="";
}
//---------------------------------------------------------------------------

