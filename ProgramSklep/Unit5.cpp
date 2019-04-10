//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit6.h"
#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
          Form4->StringGrid1->RowCount=Form4->StringGrid1->RowCount+1;
      int lp=Form4->StringGrid1->RowCount-1;
     Form4->StringGrid1->Cells[0][lp]=Edit1->Text;
     Form4->StringGrid1->Cells[1][lp]=ComboBox1->Text;
     Form4->StringGrid1->Cells[2][lp]=ComboBox2->Text;
     Form4->StringGrid1->Cells[3][lp]="";
     Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormCreate(TObject *Sender)
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
void __fastcall TForm5::Button2Click(TObject *Sender)
{
       Edit1->Text="";
       Form5->Close(); 
}
//---------------------------------------------------------------------------
