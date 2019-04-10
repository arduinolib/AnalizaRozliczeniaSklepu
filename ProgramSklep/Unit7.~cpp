//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

AnsiString np="";
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
        DateTimePicker1->Date=Now();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button3Click(TObject *Sender)
{
        AnsiString K=DateTimePicker1->Date;
        K.Delete(11,9); //obcina godzinê z daty
        Edit2->Text=K;
        Button1->Enabled=true;
        Edit1->Enabled=true;
        Button4->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
         np="";
         Edit1->Text="";
         Edit2->Text="";
          Button1->Enabled=false;
        Edit1->Enabled=false;
        Button4->Enabled=false;
         StringGrid1->Cells[0][1]="";
           StringGrid1->Cells[1][1]="";
        Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
       if(Edit2->Text=="")
        {
         Application->MessageBox(("Data musi byc wpisana! „" + Edit2->Text  + "”").c_str(),
   "Wpisz datê", MB_OK | MB_ICONINFORMATION);
           return;
           }
         AnsiString Key="1"+Edit2->Text ;
        Key.Delete(6,1);
        Key.Delete(8,1);

       if ( FileExists(Key) == true )
        {
          Application->MessageBox(("Dla tej daty wpisany jest utarg „" +Edit2->Text+ "”").c_str(),
   "Wpisz inn¹ datê", MB_OK | MB_ICONINFORMATION);
           Edit2->Text="";
           Edit1->Text="";
            Button1->Enabled=false;
           return;
        }
          StringGrid1->Cells[0][1]=Edit2->Text;
           StringGrid1->Cells[1][1]=Edit1->Text;

         np= StringGrid1->Cells[0][1];
        np.Delete(5,1);
        np.Delete(7,1);
        np="1"+np;
       SaveGridToFile(np, StringGrid1, false);
         for(int i=0;i<StringGrid1->RowCount;i++)
         {
            StringGrid1->RowCount=2;
         }
         np="";
         Edit1->Text="";
         Edit2->Text="";
          Button1->Enabled=false;
        Edit1->Enabled=false;
        Button4->Enabled=false;
         StringGrid1->Cells[0][1]="";
           StringGrid1->Cells[1][1]="";
}
//---------------------------------------------------------------------------
   void __fastcall TForm7::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
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

// Plik Ÿród³owy np. Unit1.cpp
//--- FUNKCJA ODCZYTUJ¥CA LICZBÊ KOLUMN I WIERSZY ---------------------------
void SetColRow(AnsiString txt, TStringGrid *Grid)
{
 int t = txt.AnsiPos("\";");
 String txt_1 = txt.SubString(1, t);
 String txt_2 = txt.SubString(t + 2, 10);
 Grid->ColCount = txt_1.SubString(5, txt_1.Length() - 5).ToInt();
 Grid->RowCount = txt_2.SubString(5, txt_2.Length() - 5).ToInt();
}
//--- FUNKCJA PRZEPISUJ¥CA TEKST DO KOMÓREK I ODCZYUJ¥CA SZEROKOŒÆ KOLUMN ---
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
//--- FUNKCJA ODCZYTUJ¥CA TABELÊ Z PLIKU ------------------------------------
void __fastcall TForm7::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid)
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

//---------------------------------------------------------------------------

void __fastcall TForm7::FormCreate(TObject *Sender)
{
        StringGrid1->ColWidths[0]=96;
        StringGrid1->ColWidths[1]=96;

        StringGrid1->Cells[0][0]="Data";
        StringGrid1->Cells[1][0]="Utarg";
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button4Click(TObject *Sender)
{
         if(Application->MessageBox(
    "Czy na pewno zmienic utarg?","PotwierdŸ",
    MB_YESNO | MB_ICONQUESTION) == IDYES )
    {
        if(Edit2->Text=="")
        {
         Application->MessageBox(("Data musi byc wpisana! „" + Edit2->Text  + "”").c_str(),
   "Wpisz datê", MB_OK | MB_ICONINFORMATION);
           return;
           }
         AnsiString Key="1"+Edit2->Text ;
        Key.Delete(6,1);
        Key.Delete(8,1);


          StringGrid1->Cells[0][1]=Edit2->Text;
           StringGrid1->Cells[1][1]=Edit1->Text;

         np= StringGrid1->Cells[0][1];
        np.Delete(5,1);
        np.Delete(7,1);
        np="1"+np;
       SaveGridToFile(np, StringGrid1, false);
         for(int i=0;i<StringGrid1->RowCount;i++)
         {
            StringGrid1->RowCount=2;
         }
         np="";
         Edit1->Text="";
         Edit2->Text="";
          Button1->Enabled=false;
        Edit1->Enabled=false;
        Button4->Enabled=false;
         StringGrid1->Cells[0][1]="";
           StringGrid1->Cells[1][1]="";
    }
}
//---------------------------------------------------------------------------

