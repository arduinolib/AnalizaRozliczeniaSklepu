//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit16.h"
#include "Unit17.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm16 *Form16;
//---------------------------------------------------------------------------
__fastcall TForm16::TForm16(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
  struct FindCells
{
 int Row;
 int Col;
};
FindCells FindInGrid(TStringGrid *Grid, String tekst)
{
 FindCells fc;
 fc.Col = -1;
 fc.Row = -1;

 static int row = Grid->FixedRows;
 if(row >= Grid->RowCount - 1)
 row = Grid->FixedRows;

 for(int i = Grid->FixedCols; i < Grid->ColCount; i++)
 {
  for(int j = row; j < Grid->RowCount; j++)
  {
   String find = Grid->Cells[i][j];
   int x = find.Pos(tekst);
   if(x > 0)
   {
    fc.Col = i;
    fc.Row = j;
    row = j + 1;
    return fc;
   }
  }
 }
 row = Grid->FixedRows;
 return fc;
}
//-----------------------------------------------------------------------------
void BubbleSort(TStringGrid *Tabela, int Col)
{
 AnsiString temp;
 for(int i = Tabela->FixedRows; i < Tabela->RowCount; i++)
 {
  for(int j = Tabela->FixedRows; j < i; j++)
  {
   if(Tabela->Cells[Col][i] < Tabela->Cells[Col][j])
   {
    temp = Tabela->Rows[i]->GetText();
    Tabela->Rows[i]->SetText(Tabela->Rows[j]->GetText());
    Tabela->Rows[j]->SetText(temp.c_str());
   }
  }
 }
}

//--------------------------------
void __fastcall DeleteRow(TStringGrid *Grid, int ARow)
{
 if(ARow < Grid->FixedRows)
 {
  Application->MessageBox("Nie wybrano wiersza do usuniêcia", "Usuwanie wiersza", MB_OK | MB_ICONSTOP);
  return;
 }
 if(Grid->RowCount == Grid->FixedRows + 1)
 {
  int id = Application->MessageBox("Conajmniej jeden wiersz (nie licz¹c nag³ówka) musi pozostaæ w tabeli. "
           "Czy chcesz wyczyœciæ zawartoœæ komórek w tym wierszu?", "Usuwanie wiersza", MB_YESNO | MB_ICONQUESTION);
  if(id == ID_YES)
   for(int y = 0; y < Grid->ColCount; y++)
    Grid->Cells[y][ARow] = "";
  return;
 }

 int id = Application->MessageBox("Czy na pewno chcesz usun¹æ wybrany wiersz?\nOperacji nie bêdzie mo¿na cofn¹æ!",
          "Usuwanie wiersza", MB_YESNO | MB_ICONQUESTION);
 if(id == ID_YES)
 {
  for(int i = ARow; i <= Grid->RowCount - 1; i++)
  {
   for(int y = 0; y < Grid->ColCount; y++)
   {
    Grid->Cells[y][i] = Grid->Cells[y][i + 1];
    Grid->Cells[y][i + 1] = "";
   }
  }
  Grid->RowCount--;
 }
 Grid->SetFocus();
}
//---------------------------------------------------------------------------
  void __fastcall TForm16::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
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
void __fastcall TForm16::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid)
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
//--------------------------------
void __fastcall TForm16::FormCreate(TObject *Sender)
{
        LoadGridFromFile("ListaOdbiorcow.roz", StringGrid1);
        StringGrid1->FixedCols=0;
        StringGrid1->ColWidths[0]=100;  //NIP
        StringGrid1->ColWidths[1]=360;  //nazwa odbiorcy
        StringGrid1->ColWidths[2]=100;  //kod pocztowy
        StringGrid1->ColWidths[3]=200;  //miejscowosc
        StringGrid1->ColWidths[4]=200;  // adres
        StringGrid1->ColWidths[5]=200;  //nazwisko i imie odbiorcy

        StringGrid1->Cells[0][0]="NIP";
        StringGrid1->Cells[1][0]="Nazwa odbiorcy";
        StringGrid1->Cells[2][0]="Kod pocz.";
        StringGrid1->Cells[3][0]="Miejscowosc";
        StringGrid1->Cells[4][0]="Adres";
        StringGrid1->Cells[5][0]="Nazwisko odbiorcy";
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Button4Click(TObject *Sender)
{
       Form17->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button3Click(TObject *Sender)
{
         if(StringGrid1->Cells[0][StringGrid1->Row]=="NIP" )
         {
           Application->MessageBox(("Nie wybrano odbiorcy „" + Edit1->Text + "”").c_str(),
   "Wybierz odbiorcê", MB_OK | MB_ICONINFORMATION);
  return;
         }
        Form13-> Edit4->Text=StringGrid1->Cells[0][StringGrid1->Row];
        Form13-> Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
        Form13-> Edit5->Text=StringGrid1->Cells[2][StringGrid1->Row];
        Form13-> Edit6->Text=StringGrid1->Cells[3][StringGrid1->Row];
        Form13-> Edit7->Text=StringGrid1->Cells[4][StringGrid1->Row];
        Form13-> Edit8->Text=StringGrid1->Cells[5][StringGrid1->Row];
        Form16->Close();

}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button6Click(TObject *Sender)
{
         SaveGridToFile("ListaOdbiorcow.roz", (StringGrid1), false);

        Form16->Close();
}
//---------------------------------------------------------------------------

