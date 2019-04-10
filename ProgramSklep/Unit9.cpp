//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit10.h"
#include "Unit12.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
        : TForm(Owner)
{
        DateTimePicker1->Date=Now();
}
//---------------------------------------------------------------------------



void __fastcall TForm9::Button1Click(TObject *Sender)
{
       AnsiString dat= DateTimePicker1->Date ;
      dat.Delete(5,1);
      dat.Delete(7,1);
      dat.Delete(9,9);
      Edit1->Text="2"+dat;

      Form10->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button5Click(TObject *Sender)
{
         for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<3;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;
        Form9->Close();
}
//---------------------------------------------------------------------------
   void __fastcall TForm9::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv)
{
 TStringList *Lista = new TStringList;
 String txt_1 = "", txt_2 = "";

 if(!csv)
 Lista->Add("\"Col" + (AnsiString)Grid->ColCount + "\";\"ROW" + (AnsiString)Grid->RowCount + "\"");

 for(int i = 0; i < Grid->RowCount; i++)
 {
  for(int j = Grid->ColCount - 1; j >= 0; j--)
  {
   String temp = Grid->Cells[j][i];
   if(temp.SubString(temp.Length(), temp.Length() + 1) == ";")
    temp = Grid->Cells[j][i] + "'";
   if(!csv)
    txt_1 = ";\"" + temp + "\"" + txt_1;
   else
    txt_1 = "\"" + temp + "\";" + txt_1;

   if(!csv && i == 0)
   {
    txt_2 = (AnsiString)Grid->ColWidths[j] + ";" + txt_2;
    if(j == 0)
    Lista->Add(txt_2);
   }
  }
  Lista->Add(txt_1);
  txt_1 = "";
 }

 Lista->SaveToFile(FileName);
 delete Lista;
}
//--------------------------------

// Plik �r�d�owy np. Unit1.cpp
//--- FUNKCJA ODCZYTUJ�CA LICZB� KOLUMN I WIERSZY ---------------------------
void SetColRow(AnsiString txt, TStringGrid *Grid)
{
 int t = txt.AnsiPos("\";");
 String txt_1 = txt.SubString(1, t);
 String txt_2 = txt.SubString(t + 2, 10);
 Grid->ColCount = txt_1.SubString(5, txt_1.Length() - 5).ToInt();
 Grid->RowCount = txt_2.SubString(5, txt_2.Length() - 5).ToInt();
}
//--- FUNKCJA PRZEPISUJ�CA TEKST DO KOM�REK I ODCZYUJ�CA SZEROKO�� KOLUMN ---
AnsiString SetCellText(AnsiString txt, AnsiString Wtxt, int &Size, int Col)
{
 String txt_1 = "", txt_2 = "";
 for(int i = -1; i < Col; i++)
 {
  int q = 0;
  int t = txt.AnsiPos(";\"");
  if(i >= 0)
   q = Wtxt.AnsiPos(";");
  txt_1 = txt.SubString(2, t - 3);
  if(i >= 0)
   txt_2 = Wtxt.SubString(1, q - 1);

  if(t > 0)
   txt = txt.Delete(1, t);
  else
   txt_1 = txt.SubString(2, txt.Length() - 2);

  if(i >= 0)
  {
   if(q > 0)
    Wtxt = Wtxt.Delete(1, q);
   else
    txt_2 = Wtxt.SubString(1, Wtxt.Length() - 1);
  }
 }
 Size = txt_2.ToInt();
 if(txt_1.SubString(txt_1.Length() - 1, txt_1.Length() + 1) == ";'")
  txt_1 = txt_1.Delete(txt_1.Length(), txt_1.Length() + 1);

 return txt_1;
}
//--- FUNKCJA ODCZYTUJ�CA TABEL� Z PLIKU ------------------------------------
void __fastcall TForm9::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid)
{
 TStringList *Lista = new TStringList;
 Lista->LoadFromFile(FileName);
 SetColRow(Lista->Strings[0], Grid);

 for(int i = 0; i < Grid->RowCount; i++)
 {
  for(int j = 0; j < Grid->ColCount; j++)
  {
   int Size;
   Grid->Cells[j][i] = SetCellText(Lista->Strings[i + 2], Lista->Strings[1], Size, j + 1);
   Grid->ColWidths[j] = Size;
  }
 }
 delete Lista;
} 

//--------------------------------------------------------------------------

void __fastcall TForm9::FormCreate(TObject *Sender)
{
       
        StringGrid1->FixedCols=0;
        StringGrid1->ColWidths[0]=100;
        StringGrid1->ColWidths[1]=280;
        StringGrid1->ColWidths[2]=100;

        StringGrid1->Cells[0][0]="Data";
        StringGrid1->Cells[1][0]="Nazwa towaru";
        StringGrid1->Cells[2][0]="Wartosc";
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button4Click(TObject *Sender)
{
       if(StringGrid1->Cells[1][1]=="")
        {
            Application->MessageBox(("Nie zapisujemy pustej listy �" +Edit2->Text+ "�").c_str(),
   "Wype�nij list�", MB_OK | MB_ICONINFORMATION);
  return;
        }

     AnsiString np1= Edit1->Text;

       SaveGridToFile(np1, StringGrid1, false);

         for(int i=0;i<StringGrid1->RowCount;i++)
         {
            StringGrid1->RowCount=1;
         }
        StringGrid1->Cells[1][1]="";
          for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<3;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;
         Edit2->Text="";
}
//---------------------------------------------------------------------------

