//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
//#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
extern double zakup;
extern double detal;
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

        DateTimePicker1->Date=Now();
         zakup=0;
         detal=0;
       
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Dodaj1Click(TObject *Sender)
{
     Button1->Enabled=true;
     Button2->Enabled=true;
     Button3->Enabled=true;
     ComboBox1->Enabled=true;
     Edit1->Enabled=true;
     Edit2->Enabled=true;
     Edit3->Enabled=true;
     Edit4->Enabled=true;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::FormCreate(TObject *Sender)
{
         StringGrid1->ColWidths[0]=80;
        StringGrid1->ColWidths[1]=240;
        StringGrid1->ColWidths[2]=40;
        StringGrid1->ColWidths[3]=80;
        StringGrid1->ColWidths[4]=120;
        StringGrid1->ColWidths[5]=120;
        StringGrid1->ColWidths[6]=120;
        StringGrid1->ColWidths[7]=120;
        StringGrid1->ColWidths[8]=100;
        StringGrid1->ColWidths[9]=100;

        StringGrid1->Cells[0][0]="Data";
        StringGrid1->Cells[1][0]="Nazwa towaru";
        StringGrid1->Cells[2][0]="Jm";
        StringGrid1->Cells[3][0]="Ilosc";
        StringGrid1->Cells[4][0]="Wartosc zakupu ";
        StringGrid1->Cells[5][0]="Jedn.cena zak.";
        StringGrid1->Cells[6][0]="Cena sprzeda¿y";
        StringGrid1->Cells[7][0]="Wartosc sprzed";
        StringGrid1->Cells[8][0]="Zysk   z³";
        StringGrid1->Cells[9][0]="Zysk %";

        ComboBox1->Items->Add("Warzywa owoce");
        ComboBox1->Items->Add("Art.spo¿ywcze");
        ComboBox1->ItemIndex=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

        if( ComboBox1->Text=="Warzywa owoce")
        {
        Form2->Button1->Enabled=true;
        Form2->ShowModal();
        }
         if( ComboBox1->Text=="Art.spo¿ywcze")
         {
          Form4->Button1->Enabled=true;
          Form4->ShowModal();
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Utarg2Click(TObject *Sender)
{
        Form7->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Warzywaowoce1Click(TObject *Sender)
{
      Form2->ShowModal();  
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Artspozywcze1Click(TObject *Sender)
{
      Form4->ShowModal();
}
//---------------------------------------------------------------------------
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
void __fastcall TForm1::Button2Click(TObject *Sender)
{
         if(StringGrid1->Cells[1][1]=="")
        {
          Application->MessageBox("Lista jest pusta", "Usuwanie wiersza", MB_OK | MB_ICONSTOP);
         return;

        }
         if(StringGrid1->Row!=0)
         {
         DeleteRow(StringGrid1, StringGrid1->Row);
         }
         else
         {
         Application->MessageBox("Nie wybrano wiersza do usuniêcia", "Usuwanie wiersza", MB_OK | MB_ICONSTOP);
         return;
         }
           zakup=0;detal=0;
         for(int i=1;i<StringGrid1->RowCount;i++)
         {
           Edit1->Text=zakup=zakup+StrToFloat(StringGrid1->Cells[4][i]);
           Edit2->Text=detal=detal+StrToFloat(StringGrid1->Cells[7][i]);
         }
         int d= StrToInt(Edit2->Text);
         int z= StrToInt(Edit1->Text);
         int zys=d-z;
         int zpro=zys*100/d;
         int przyb = floor(zpro +0.5);
         Edit3->Text=FloatToStr(zys);
         Edit4->Text=FloatToStr(przyb);
         Form6->Edit4->Text="";
         Form6->Edit5->Text="";
         Form6->Edit6->Text="";
         Form6->Edit7->Text="";




}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

        if(StringGrid1->Cells[1][1]=="")
        {
          Application->MessageBox("Lista jest pusta", "Poprawianie wiersza", MB_OK | MB_ICONSTOP);
         return;
        }


        Form6-> Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];//nazwa towaru
        Form6-> Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];//jm
        Form6-> Edit3->Text=StringGrid1->Cells[9][StringGrid1->Row];//zysk%
        Form6-> Edit4->Text=StringGrid1->Cells[3][StringGrid1->Row];//ilosc
        Form6-> Edit5->Text=StringGrid1->Cells[4][StringGrid1->Row];//wartosc zakupu
        Form6-> Edit6->Text=StringGrid1->Cells[5][StringGrid1->Row];//cena jedn. zakupu
        Form6-> Edit7->Text=StringGrid1->Cells[6][StringGrid1->Row];//cena sprzeda¿y
         if(StringGrid1->Row!=0)
         DeleteRow(StringGrid1, StringGrid1->Row);
         else
         {
         Application->MessageBox("Nie wybrano wiersza do poprawienia", "Poprawianie wiersza", MB_OK | MB_ICONSTOP);
         return;
         }
           zakup=0;detal=0;
         for(int i=1;i<StringGrid1->RowCount;i++)
         {
           Edit1->Text=zakup=zakup+StrToFloat(StringGrid1->Cells[4][i]);
           Edit2->Text=detal=detal+StrToFloat(StringGrid1->Cells[7][i]);
         }
          int d= StrToInt(Edit2->Text);
         int z= StrToInt(Edit1->Text);
         int zys=d-z;
         int zpro=zys*100/d;
         int przyb = floor(zpro +0.5);
         Edit3->Text=FloatToStr(zys);
         Edit4->Text=FloatToStr(przyb);

         Form6->ShowModal();

}
//---------------------------------------------------------------------------
 void __fastcall TForm1::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
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
void __fastcall TForm1::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid)
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


void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
     if(StringGrid1->Cells[1][1]=="")
        {
            Application->MessageBox(("Nie zapisujemy pustej listy „" +Edit5->Text+ "”").c_str(),
   "Wype³nij listê", MB_OK | MB_ICONINFORMATION);
  return;
        }

     AnsiString np= StringGrid1->Cells[0][1];
        np.Delete(5,1);
        np.Delete(7,1);
         np.Delete(9,9);
       SaveGridToFile(np, StringGrid1, false);

         for(int i=0;i<StringGrid1->RowCount;i++)
         {
            StringGrid1->RowCount=1;
         }
        StringGrid1->Cells[1][1]="";
        Edit1->Text=0;  Edit2->Text=0; Edit3->Text=0; Edit4->Text=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zaku1Click(TObject *Sender)
{
         Form8->Edit21->Text="c";

         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
       for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1; 
        for(int i=1;i<Form8->StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            Form8->StringGrid3->Cells[j][i]="";
        }
        }
        Form8->StringGrid3->RowCount=1;
        for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
          Form8->StringGrid4->RowCount=1;

        Form8->StringGrid1->Align=alClient;
        Form8->Label1->Caption="";
        Form8->Label1->Caption="Zestawienie zakupów i obrotów";
        Form8->Label16->Caption="Ustaw okres !!!";
        AnsiString dp= Form8->DateTimePicker1->Date;
        dp.Delete(3,6);
        Form8->Label13->Caption=dp;
        AnsiString dk= Form8->DateTimePicker2->Date;
        dk.Delete(3,6);
        Form8->Label14->Caption=dk;
        Form8->GroupBox2->Align=alBottom;
         Form8->GroupBox2->Visible=true;
         Form8->GroupBox2->Height=136;
         Form8->StringGrid6->Visible=false;
         Form8->GroupBox3->Visible=false;
         Form8->GroupBox4->Visible=false;
         Form8->GroupBox5->Visible=false;
         Form8->StringGrid3->Visible=true;
         Form8->StringGrid3->Align=alClient;
         Form8->StringGrid2->Visible=false;
         Form8->StringGrid1->Visible=false;
         Form8->StringGrid4->Visible=false;
         Form8->Button1->Enabled=false;
        Form8->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
    if(Application->MessageBox(
    "Czy na pewno zakoñczyæ program?","PotwierdŸ",
    MB_YESNO | MB_ICONQUESTION) == IDYES )
    {
        Application->Terminate();
    }    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Najbardziejopacalnytowar1Click(TObject *Sender)
{
         Form8->Edit21->Text="b";
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
       for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1;
        for(int i=1;i<Form8->StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            Form8->StringGrid3->Cells[j][i]="";
        }
        }
        Form8->StringGrid3->RowCount=1;
       for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
        Form8->StringGrid4->RowCount=1;
      Form8->Label1->Caption="Najbardziej op³acalny towar";
        Form8->Label16->Caption="Ustaw okres !!!";
        AnsiString dp1= Form8->DateTimePicker1->Date;
        dp1.Delete(11,9);
        Form8->Label13->Caption=dp1;
        AnsiString dk1= Form8->DateTimePicker2->Date;
        dk1.Delete(11,9);
        Form8->Label14->Caption=dk1;
        Form8->GroupBox4->Align=alBottom;
        Form8->GroupBox4->Visible=true;
        Form8->GroupBox4->Height=105;
         Form8->GroupBox3->Visible=false;
         Form8->GroupBox2->Visible=false;
          Form8->StringGrid1->Visible=true;
         Form8->StringGrid2->Visible=false;
         Form8->StringGrid3->Visible=false;
         Form8->StringGrid4->Visible=true;
         Form8->Button7->Enabled=false;
         Form8->StringGrid6->Visible=false;
          Form8->GroupBox5->Visible=false;
          Form8->StringGrid4->Align=alClient;
        Form8->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zestawieniezakupw1Click(TObject *Sender)
{
         Form8->Edit21->Text="a";
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
           for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1;
        for(int i=1;i<Form8->StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            Form8->StringGrid3->Cells[j][i]="";
        }
        }
        Form8->StringGrid3->RowCount=1;
          for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
          Form8->StringGrid4->RowCount=1;
         Form8->Label1->Caption="Zakupy w okresie";
        Form8->Label16->Caption="Ustaw okres !!!";
        AnsiString dp2= Form8->DateTimePicker1->Date;
        dp2.Delete(11,9);
        Form8->Label13->Caption=dp2;
        AnsiString dk2= Form8->DateTimePicker2->Date;
        dk2.Delete(11,9);
        Form8->Label14->Caption=dk2;
        Form8->GroupBox3->Align=alBottom;
        Form8->GroupBox3->Visible=true;
         Form8->GroupBox2->Visible=false;
         Form8->GroupBox4->Visible=false;
          Form8->StringGrid1->Visible=true;
         Form8->StringGrid2->Visible=false;
         Form8->StringGrid3->Visible=false;
         Form8->StringGrid4->Visible=false;
         Form8->Edit3->Visible=false;
         Form8->Edit4->Visible=false;
         Form8->Edit5->Visible=false;
         Form8->Edit8->Visible=false;
         Form8->Button4->Visible=false;
         Form8->Button5->Visible=false;
          Form8->Button9->Visible=true;
         Form8->Button10->Visible=false;
         Form8->Button9->Enabled=false;
         Form8->Button11->Visible=false;
          Form8->Label17->Visible=false;
         Form8->Label18->Visible=false;
         Form8->Label19->Visible=false;
         Form8->Label20->Visible=false;
          Form8->StringGrid6->Visible=false;
          Form8->GroupBox5->Visible=false;
          Form8->StringGrid1->Align=alClient;
         Form8->GroupBox3->Height=150;

        Form8->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Pokawybranytowar1Click(TObject *Sender)
{
        Form8->Edit21->Text="d";
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
        for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1;
        for(int i=1;i<Form8->StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            Form8->StringGrid3->Cells[j][i]="";
        }
        }
        Form8->StringGrid3->RowCount=1;
          for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
          Form8->StringGrid4->RowCount=1;
         Form8->Label1->Caption="Zakup towaru w okresie";
        Form8->Label16->Caption="Ustaw okres !!!";
        AnsiString dp2= Form8->DateTimePicker1->Date;
        dp2.Delete(11,9);
        Form8->Label13->Caption=dp2;
        AnsiString dk2= Form8->DateTimePicker2->Date;
        dk2.Delete(11,9);
        Form8->Label14->Caption=dk2;
        Form8->GroupBox3->Align=alBottom;
        Form8->GroupBox3->Visible=true;
         Form8->GroupBox2->Visible=false;
         Form8->GroupBox4->Visible=false;
          Form8->StringGrid1->Visible=true;
         Form8->StringGrid2->Visible=true;
         Form8->StringGrid3->Visible=false;
         Form8->StringGrid4->Visible=false;
         Form8->Edit3->Visible=true;
         Form8->Edit4->Visible=true;
         Form8->Edit5->Visible=true;
         Form8->Edit8->Visible=true;
         Form8->Button4->Visible=true;
         Form8->Button5->Visible=true;
         Form8->Button10->Visible=true;
         Form8->Button9->Visible=false;
         Form8->Button11->Enabled=false;
          Form8->Label17->Visible=true;
         Form8->Label18->Visible=true;
         Form8->Label19->Visible=true;
         Form8->Label20->Visible=true;
          Form8->StringGrid6->Visible=false;
          Form8->GroupBox5->Visible=false;
          Form8->GroupBox3->Height=200;
           Form8->StringGrid1->Align=alClient;;
        Form8->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Koszty1Click(TObject *Sender)
{
          for(int i=1;i<Form9->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<4;j++)
        {
            Form9->StringGrid1->Cells[j][i]="";
        }
        }
        Form9->StringGrid1->RowCount=1;
         Form9->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Bilanswokresie1Click(TObject *Sender)
{
         Form8->Edit21->Text="e";
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
        for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1;
        for(int i=1;i<Form8->StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            Form8->StringGrid3->Cells[j][i]="";
        }
        }
        Form8->StringGrid3->RowCount=1;
          for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
          Form8->StringGrid4->RowCount=1;

         Form8->Label1->Caption="Bilans w okresie";
        Form8->Label16->Caption="Ustaw okres !!!";
        AnsiString dp2= Form8->DateTimePicker1->Date;
        dp2.Delete(11,9);
        Form8->Label13->Caption=dp2;
        AnsiString dk2= Form8->DateTimePicker2->Date;
        dk2.Delete(11,9);
        Form8->Label14->Caption=dk2;
        Form8->GroupBox3->Align=alBottom;
        Form8->GroupBox3->Visible=false;
         Form8->GroupBox2->Visible=false;
         Form8->GroupBox4->Visible=false;
          Form8->StringGrid1->Visible=false;
         Form8->StringGrid2->Visible=false;
         Form8->StringGrid3->Visible=false;
         Form8->StringGrid4->Visible=false;
          Form8->Button14->Enabled=false;
          Form8->StringGrid6->Visible=true;
          Form8->GroupBox5->Visible=true;


        Form8->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Faktura1Click(TObject *Sender)
{
       // Form13->ShowModal();
}
//---------------------------------------------------------------------------


