//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop
#include <fstream.h>
#include <cstdlib.h>
#include "Unit8.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit7.h"
#include "Unit4.h"
#include "Unit9.h"
#include <Printers.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

AnsiString edit4="";
AnsiString edit5="";
AnsiString edit6="";
AnsiString edit7="";
AnsiString edit8="";
AnsiString edit9="";
AnsiString edit10="";
AnsiString edit13="";
AnsiString edit14="";
AnsiString edit15="";
AnsiString edit16="";
AnsiString edit17="";
AnsiString edit18="";
AnsiString edit19="";
AnsiString edit22="";
AnsiString edit23="";
AnsiString edit24="";
AnsiString edit25="";
AnsiString edit26="";
AnsiString edit27="";
AnsiString edit28="";
AnsiString edit29="";
AnsiString edit30="";
AnsiString edit31="";
AnsiString edit32="";
AnsiString edit33="";
AnsiString edit34="";

AnsiString st="z";
AnsiString nagl="";
AnsiString dat="";
AnsiString sdruk ="";
int y;
int k=0;
int r;
int x=1;
int ster=0;
int suma=0,suma1=0,suma2=0,suma3=0,suma4=0;
int sumazysk=0,suza=0,sude=0,zyskrazem=0;
TForm8 *Form8;
 //
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
        DateTimePicker1->Date=Now();
        DateTimePicker2->Date=Now();
}
//---------------------------------------------------------------------------

 void __fastcall TForm8::odczyt()
{
         string data,nazwatowaru,jm,ilosc,wartzakupu,cenajzakupu,
         cenasprzedazy,wartsprzedazy,zysk,zyskproc;
         string linia;
         int nr_linii=1;

    fstream plik;
    plik.open("analizaoddo.txt", ios::in);

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1:
            {
            data=linia;
            char tekst[50];
            sprintf(tekst, "%s", data);
            String a = tekst;
             StringGrid1->Cells[0][x]=a;
            break;
            }
             case 2:
             {
            nazwatowaru=linia;
           char teksta[50];
            sprintf(teksta, "%s", nazwatowaru);
            String b = teksta;
            StringGrid1->Cells[1][x]=b;
            break;
            }
             case 3:
             {
            jm=linia;
            char tekstb[10];
            sprintf(tekstb, "%s", jm);
            String c = tekstb;
            StringGrid1->Cells[2][x]=c;
            break;
            }
             case 4:
             {
            ilosc=linia;
            char tekstc[50];
            sprintf(tekstc, "%s", ilosc);
            String d = tekstc;
            StringGrid1->Cells[3][x]=d;
            break;
            }
             case 5:
             {
            wartzakupu=linia;
            char tekstd[50];
            sprintf(tekstd, "%s", wartzakupu);
            String e = tekstd;
            StringGrid1->Cells[4][x]=e;
            break;
            }
             case 6:
             {
            cenajzakupu=linia;
            char tekste[20];
            sprintf(tekste, "%s", cenajzakupu);
            String f = tekste;
            StringGrid1->Cells[5][x]=f;
            break;
            }
             case 7:
             {
            cenasprzedazy=linia;
            char tekstf[20];
            sprintf(tekstf, "%s", cenasprzedazy);
            String g = tekstf;
            StringGrid1->Cells[6][x]=g;
            break;
            }
             case 8:
             {
            wartsprzedazy=linia;
            char tekstg[20];
            sprintf(tekstg, "%s", wartsprzedazy);
            String h = tekstg;
            StringGrid1->Cells[7][x]=h;
            break;
            }
             case 9:
             {
            zysk=linia;
            char teksth[20];
            sprintf(teksth, "%s", zysk);
            String k = teksth;
            StringGrid1->Cells[8][x]=k;
            break;
            }
             case 10:
             {
            zyskproc=linia;
            char tekstk[20];
            sprintf(tekstk, "%s", zyskproc);
            String l = tekstk;
            StringGrid1->Cells[9][x]=l;
            break;
            }

            }
            if(nr_linii==10)
            { nr_linii=0;x++; }
            nr_linii++;
    }
   plik.close();
   }
//---------------------------------------------------------------------------
     void __fastcall TForm8::odczyt1(int pl)
{
         string data,nazwatowaru,jm,ilosc,wartzakupu,cenajzakupu,
         cenasprzedazy,wartsprzedazy,zysk,zyskproc;
         string linia;
         int nr_linii=1;

    fstream plik;
    if(pl==1)
    plik.open("analizatabela.txt", ios::in);
      if(pl==2)
    plik.open("analizautarg.txt", ios::in);
    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1:
            {
            data=linia;
            char tekst[50];
            sprintf(tekst, "%s", data);
            String a = tekst;
            if(a==StringGrid3->Cells[0][x-1])
            x=x-1;
             StringGrid3->Cells[0][x]=a;
            break;
            }
             case 2:
             {
             if(pl==2)
             {
             data=linia;
            char tekst[50];
            sprintf(tekst, "%s", data);
            String a = tekst;
            if(a==StringGrid3->Cells[1][x-1])
            x=x-1;
             StringGrid3->Cells[3][x]=a;
             }
            break;
            }
             case 3:
             {
            break;
            }
             case 4:
             {
            break;
            }
             case 5:
             {
             if(pl==1)
             {
            wartzakupu=linia;
            char tekstd[50];
            sprintf(tekstd, "%s", wartzakupu);
            String e = tekstd;
            int sum=StrToInt(e);
            suma=suma+sum;
            String su=IntToStr(suma);
            StringGrid3->Cells[1][x]=su;
            }
            break;
            }
             case 6:
             {
            break;
            }
             case 7:
             {
            break;
            }
             case 8:
             {
             if(pl==1)
             {
            wartsprzedazy=linia;
            char tekstg[20];
            sprintf(tekstg, "%s", wartsprzedazy);
            String h = tekstg;
             int sum1=StrToInt(h);
            suma1=suma1+sum1;
            String su1=IntToStr(suma1);
            StringGrid3->Cells[2][x]=su1;
            }
            break;
            }
             case 9:
             {
             if(pl==1)
             {
            zysk=linia;
            char teksth[20];
            sprintf(teksth, "%s", zysk);
            String k = teksth;
             int sum=StrToInt(k);
            suma2=suma2+sum;
            String su=IntToStr(suma2);
            StringGrid3->Cells[4][x]=su;
            }
            break;
            }
             case 10:
             {
             if(pl==1)
             {
             double a=suma2;              //zysk
             double b=suma1;              //wart.sprzed.
             double sulo=a/b*100;
            int kok = floor(sulo+ 0.5);
            StringGrid3->Cells[5][x]=kok;
            }
            break;
            }
            }
            if(nr_linii==10)
            { nr_linii=0;x++; }
            nr_linii++;
    }
   plik.close();
   }
//---------------------------------------------------------------------------

//----------------------------------------------------------------------------
   void __fastcall TForm8:: zapis()
  {
     ofstream outfile;
outfile.open("analizaoddo.txt", ios::out|ios::app);
for(int i=1;i<StringGrid1->RowCount;i++)
{
   for(int j=0;j<10;j++)
   {
        String a = StringGrid1->Cells[j][i];
   char nazwa[50];
   sprintf(nazwa, "%s", a.c_str());
       outfile <<nazwa <<endl;
   }
}
outfile.close();
  }
//--------------------------------------------------------------------------
     void __fastcall TForm8:: zapis1()
  {
     ofstream outfile;
outfile.open("analizatabela.txt", ios::out);
for(int i=1;i<StringGrid1->RowCount;i++)
{
   for(int j=0;j<10;j++)
   {
        String a = StringGrid1->Cells[j][i];
        if(j==0)
        a=a.Delete(11,9);

   char nazwafirmy[50];
   sprintf(nazwafirmy, "%s", a.c_str());
       outfile <<nazwafirmy <<endl;
   }
}
outfile.close();
  }
//--------------------------------------------------------------------------
    void __fastcall TForm8:: zapis2()
  {
    ofstream outfile;
outfile.open("analizautarg.txt", ios::out);
   for(int j=0;j<2;j++)
   {
        String a =Form7->StringGrid1->Cells[j][1];

   char nazwaf[50];
   sprintf(nazwaf, "%s", a.c_str());
       outfile <<nazwaf <<endl;
   }
outfile.close();
  }
//--------------------------------------------------------------------------
   void __fastcall TForm8:: zapis3()
  {
    ofstream outfile;
outfile.open("analizakoszty.txt", ios::out);
  for(int i=1;i<Form9->StringGrid1->RowCount;i++)
{
   for(int j=0;j<3;j++)
   {
        String a =Form9->StringGrid1->Cells[j][i];

   char nazwaf[50];
   sprintf(nazwaf, "%s", a.c_str());
       outfile <<nazwaf <<endl;
   }
 }
outfile.close();
  }  
//--------------------------------------------------------------------------

  void __fastcall TForm8:: zapistowar(String tow)
  {
     ofstream outfile;
outfile.open("analizaoddo.txt", ios::out|ios::app);

for(int i=1;i<StringGrid1->RowCount;i++)
{
   for(int j=0;j<10;j++)
   {
        if(StringGrid1->Cells[1][i]==tow)
        {
        String a = StringGrid1->Cells[j][i];
   char nazwafirmy[50];
   sprintf(nazwafirmy, "%s", a.c_str());
       outfile <<nazwafirmy <<endl;

       }
   }
}
outfile.close();
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


//---------------------------------------------------------------------------




void __fastcall TForm8::Button3Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";
         Edit22->Text=""; Edit23->Text=""; Edit24->Text=""; Edit25->Text="";
        Edit26->Text=""; Edit27->Text=""; Edit28->Text=""; Edit29->Text="";
        Edit30->Text=""; Edit31->Text=""; Edit32->Text=""; Edit33->Text="";
        Edit34->Text="";

        DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt") ;

        AnsiString dp1= DateTimePicker1->Date;
        dp1.Delete(11,9);
        Label13->Caption=dp1;
        AnsiString dk1= DateTimePicker2->Date;
        dk1.Delete(11,9);
        Label14->Caption=dk1;

        if(Edit21->Text=="e")
        {
        sdruk="e";
        Button14->Enabled=true;
        for(int i=1;i<StringGrid6->RowCount;i++)
        {
          for(int j=0;j<6;j++)
          {
            StringGrid6->Cells[j][i]="";
          }
        }
        StringGrid6->RowCount=1;

        }

        if(Edit21->Text=="d")
        {
        sdruk="d";
        Button5->Enabled=true;
        for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<10;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;

        }

        if(Edit21->Text=="a")
        {
        sdruk="a";
        Button9->Enabled=true;

        for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<10;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;

        }

         if(Edit21->Text=="b")
        {
        sdruk="b";
        Button7->Enabled=true;
       for(int i=1;i<Form8->StringGrid1->RowCount;i++)
        {
        for(int j=0;j<10;j++)
        {
            Form8->StringGrid1->Cells[j][i]="";
        }
        }
        Form8->StringGrid1->RowCount=1;
     
       for(int i=1;i<Form8->StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            Form8->StringGrid4->Cells[j][i]="";
        }
        }
        Form8->StringGrid4->RowCount=1;
        }

        if(Edit21->Text=="c")
        {
        sdruk="c";
        Button1->Enabled=true;
        for(int i=1;i<StringGrid3->RowCount;i++)
        {
          for(int j=0;j<8;j++)
          {
            StringGrid3->Cells[j][i]="";
          }
        }
        StringGrid3->RowCount=1;
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button2Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";


        for(int i=1;i<StringGrid3->RowCount;i++)
        {
          for(int j=0;j<8;j++)
          {
            StringGrid3->Cells[j][i]="";
          }
        }
        StringGrid3->RowCount=1;


         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautarg.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
         Button7->Enabled=false;  
         Form8->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm8::FormCreate(TObject *Sender)
{

        Form2->LoadGridFromFile("ListaWarzyw.roz", StringGrid2);
        StringGrid2->FixedCols=0;
        StringGrid2->ColWidths[0]=240;
        StringGrid2->ColCount=1;
        StringGrid2->Cells[0][0]="Nazwa towaru";


        Form4->LoadGridFromFile("ListaArtSpozywczych.roz", StringGrid5);
        StringGrid5->FixedCols=0;
        StringGrid5->ColWidths[0]=240;
        StringGrid5->ColCount=1;
        StringGrid5->Cells[0][0]="Nazwa towaru"; 

        StringGrid3->ColWidths[0]=100;
        StringGrid3->ColWidths[1]=140;
        StringGrid3->ColWidths[2]=140;
        StringGrid3->ColWidths[3]=140;
        StringGrid3->ColWidths[4]=150;
        StringGrid3->ColWidths[5]=165;
        StringGrid3->ColWidths[6]=145;
        StringGrid3->ColWidths[7]=150;

        StringGrid3->Cells[0][0]="Data";
        StringGrid3->Cells[1][0]="Zakup towaru";
        StringGrid3->Cells[2][0]="Wycena detal";
        StringGrid3->Cells[3][0]="Utarg z dnia";
        StringGrid3->Cells[4][0]="Planowany zysk ";
        StringGrid3->Cells[5][0]="Planowany zysk %";
        StringGrid3->Cells[6][0]="Zysk z utargu";
        StringGrid3->Cells[7][0]="Zysk z utargu %";

        StringGrid4->ColWidths[0]=50;
        StringGrid4->ColWidths[1]=300;
        StringGrid4->ColWidths[2]=150;
        StringGrid4->ColWidths[3]=200;
        StringGrid4->ColWidths[4]=200;
        StringGrid4->ColWidths[5]=200;

        StringGrid4->Cells[0][0]="Lp";
        StringGrid4->Cells[1][0]="Nazwa towaru";
        StringGrid4->Cells[2][0]="Zysk z³ razem";
        StringGrid4->Cells[3][0]="Wartosc zakupu razem";
        StringGrid4->Cells[4][0]="Wartosc sprzed razem";
        StringGrid4->Cells[5][0]="Udzia³ % w zysku";

         StringGrid1->ColWidths[0]=100;
        StringGrid1->ColWidths[1]=200;
        StringGrid1->ColWidths[2]=40;
        StringGrid1->ColWidths[3]=60;
        StringGrid1->ColWidths[4]=150;
        StringGrid1->ColWidths[5]=140;
        StringGrid1->ColWidths[6]=145;
        StringGrid1->ColWidths[7]=145;
        StringGrid1->ColWidths[8]=70;
        StringGrid1->ColWidths[9]=70;
        StringGrid1->RowCount=x;
        StringGrid1->Cells[0][0]="Data";
        StringGrid1->Cells[1][0]="Nazwa towaru";
        StringGrid1->Cells[2][0]="Jm";
        StringGrid1->Cells[3][0]="Ilosc";
        StringGrid1->Cells[4][0]="Wartosc zakupu";
        StringGrid1->Cells[5][0]="Jedn.cena zak.";
        StringGrid1->Cells[6][0]="Cena sprzeda¿y";
        StringGrid1->Cells[7][0]="Wartosc sprzed";
        StringGrid1->Cells[8][0]="Zysk z³";
        StringGrid1->Cells[9][0]="Zysk %";

        StringGrid6->ColWidths[0]=130;
        StringGrid6->ColWidths[1]=250;
        StringGrid6->ColWidths[2]=250;
        StringGrid6->ColWidths[3]=250;
        StringGrid6->ColWidths[4]=250;


        StringGrid6->Cells[0][0]="Data";
        StringGrid6->Cells[1][0]="Zakup towaru";
        StringGrid6->Cells[2][0]="Wycena detal";
        StringGrid6->Cells[3][0]="Utarg z dnia";
        StringGrid6->Cells[4][0]="Koszty ";

}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button4Click(TObject *Sender)
{
  if(StringGrid2->Visible==true)
  {
                   FindCells fc;
 fc = FindInGrid(StringGrid2, Edit3->Text);
 if(fc.Col < 0)
 {
  Application->MessageBox(("Nie mo¿na odnaleŸæ „" + Edit3->Text + "”").c_str(),
   "ZnajdŸ", MB_OK | MB_ICONINFORMATION);
  return;
 }
 StringGrid2->Col = fc.Col;
 StringGrid2->Row = fc.Row;
 StringGrid2->SetFocus();
 Edit3->Text="";
 Edit4->Text=StringGrid2->Cells[StringGrid2->Col][StringGrid2->Row];
 }
 if(StringGrid2->Visible==false)
  {
                 FindCells fc;
 fc = FindInGrid(StringGrid5, Edit3->Text);
 if(fc.Col < 0)
 {
  Application->MessageBox(("Nie mo¿na odnaleŸæ „" + Edit3->Text + "”").c_str(),
   "ZnajdŸ", MB_OK | MB_ICONINFORMATION);
  return;
 }
 StringGrid5->Col = fc.Col;
 StringGrid5->Row = fc.Row;
 StringGrid5->SetFocus();
 Edit3->Text="";
 Edit4->Text=StringGrid5->Cells[StringGrid5->Col][StringGrid5->Row]; 
 }
}
//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
   void BubbleSort1(TStringGrid *Tabela, int Col)
{
 AnsiString temp;
 for(int i = Tabela->FixedRows+1; i < Tabela->RowCount; i++)
 {
  for(int j = Tabela->FixedRows+1; j < i; j++)
  {
   if(StrToInt(Tabela->Cells[Col][i]) >StrToInt( Tabela->Cells[Col][j]))
   {
    temp = Tabela->Rows[i]->GetText();
    Tabela->Rows[i]->SetText(Tabela->Rows[j]->GetText());
    Tabela->Rows[j]->SetText(temp.c_str());
   }
  }
 }
}
//----------------------------------------------------------------------------

void __fastcall TForm8::Button1Click(TObject *Sender)
{
        DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizautarg.txt");
       //  DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
        StringGrid1->Visible=false;
        StringGrid3->Visible=true;
        StringGrid4->Visible=false;
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

        x=1;
        for(int i=1;i<StringGrid3->RowCount;i++)
        {
          for(int j=0;j<8;j++)
          {
            StringGrid3->Cells[j][i]="";
          }
        }
        StringGrid3->RowCount=1;


        AnsiString np= DateTimePicker1->Date;
        np.Delete(11,9);
        np.Delete(5,1);
        np.Delete(7,1);
        int a=StrToInt(np);
        AnsiString np2= DateTimePicker2->Date;
        np2.Delete(11,9);
        np2.Delete(5,1);
        np2.Delete(7,1);
        int b=StrToInt(np2);
        Edit1->Text=np;
        Edit2->Text=np2;
        for(int i=a;i<=b;i++)
        {
          AnsiString pl=IntToStr(i);
          AnsiString pl2=IntToStr(i+100000000);

          if(FileExists(pl2))
          {
            Form7-> LoadGridFromFile(pl2,Form7->StringGrid1);
            zapis2();
            odczyt1(2);

          if(!FileExists(pl))
          {
            x=x+1;
          }
          }

        if(FileExists(pl))
        {
          Form1-> LoadGridFromFile(pl,StringGrid1);
          zapis1();
          odczyt1(1);
        }

          StringGrid3->RowCount=x;
          suma=0;suma1=0;suma2=0;suma3=0;
        }
          x=1;

          int sz=0; int sd=0;int su=0;

        for(int i=1;i<StringGrid3->RowCount;i++)
        {
          if(StringGrid3->Cells[1][i]!="")
          {
            sz+=StrToInt(StringGrid3->Cells[1][i]);
            Edit13->Text= IntToStr(sz);
          }
          if(StringGrid3->Cells[3][i]!="")
          {
           su+=StrToInt(StringGrid3->Cells[3][i]);
           Edit15->Text= IntToStr(su);
          }
          if(StringGrid3->Cells[2][i]!="")
          {
           sd+=StrToInt(StringGrid3->Cells[2][i]);
           Edit14->Text= IntToStr(sd);
          }
        }
         Edit18->Text=su-sz;
         Edit16->Text=sd-sz;
          if(sd==0)
          {
           Application->MessageBox(("Nie by³o zakupu w tym okresie „" + Edit10->Text + "”").c_str(),
           "Wybierz inny okres", MB_OK | MB_ICONINFORMATION);
           return;
          }
          if(su==0)
          {
           Application->MessageBox(("Nie by³o utargu w tym okresie „" + Edit10->Text + "”").c_str(),
           "Wybierz inny okres", MB_OK | MB_ICONINFORMATION);
           return;
          }
           Edit17->Text=(sd-sz)*100/sd;
           Edit19->Text=(su-sz)*100/su;
           Edit20->Text=su-sd;
           x=1;
           Button1->Enabled=false;
           Button18->Enabled=true;
}

//---------------------------------------------------------------------------






void __fastcall TForm8::Button7Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

        for(int i=1;i<StringGrid4->RowCount;i++)
        {
          for(int j=0;j<6;j++)
          {
            StringGrid4->Cells[j][i]="";
          }
        }
        StringGrid4->RowCount=1;


        Button17->Enabled=true;
        StringGrid1->Visible=false;
        StringGrid3->Visible=false;
        StringGrid4->Visible=true;
        DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
        AnsiString np= DateTimePicker1->Date;
        np.Delete(11,9);
        np.Delete(5,1);
        np.Delete(7,1);
        int a=StrToInt(np);
        AnsiString np2= DateTimePicker2->Date;
        np2.Delete(11,9);
        np2.Delete(5,1);
        np2.Delete(7,1);
        int b=StrToInt(np2);
        Edit1->Text=np;
        Edit2->Text=np2;

        for(int i=a;i<=b;i++)
        {
        AnsiString pl=IntToStr(i);
        if(FileExists(pl))
        {
        Form1-> LoadGridFromFile(pl, StringGrid1);
        zapis();
        odczyt();
        StringGrid1->RowCount=x;
        }
          x=1;
        }

         BubbleSort(StringGrid1, 1);
         for(int i=2;i<=StringGrid1->RowCount;i++)
         {

         if(StringGrid1->Cells[1][i]==StringGrid1->Cells[1][i-1])
         {
            StringGrid4->Cells[0][x]=x;
            StringGrid4->Cells[1][x]=StringGrid1->Cells[1][i-1];

            sumazysk+=StrToInt(StringGrid1->Cells[8][i-1]);
            StringGrid4->Cells[2][x]=IntToStr(sumazysk);

            suza+=StrToInt(StringGrid1->Cells[4][i-1]);
            StringGrid4->Cells[3][x]=IntToStr(suza);

            sude+=StrToInt(StringGrid1->Cells[7][i-1]);
            StringGrid4->Cells[4][x]=IntToStr(sude);
            }

         if(StringGrid1->Cells[1][i]!=StringGrid1->Cells[1][i-1])
         {

            StringGrid4->Cells[0][x]=x;
            StringGrid4->Cells[1][x]=StringGrid1->Cells[1][i-1];

            sumazysk+=StrToInt(StringGrid1->Cells[8][i-1]);
            StringGrid4->Cells[2][x]=IntToStr(sumazysk);

            suza+=StrToInt(StringGrid1->Cells[4][i-1]);
            StringGrid4->Cells[3][x]=IntToStr(suza);

            sude+=StrToInt(StringGrid1->Cells[7][i-1]);
            StringGrid4->Cells[4][x]=IntToStr(sude);

              sumazysk=0;sude=0;suza=0;
                x=x+1;
         }

         }
            StringGrid4->RowCount=x;
             if(ster==0)
             BubbleSort1(StringGrid4, 2);
             if(ster==1)
             BubbleSort1(StringGrid4, 4);
         StringGrid4->Visible=true;
           for(int i=1;i<StringGrid4->RowCount;i++)
         {

            StringGrid4->Cells[0][i]=i;
            if(ster==0)
            zyskrazem+=StrToInt(StringGrid4->Cells[2][i]);
            if(ster==1)
            zyskrazem+=StrToInt(StringGrid4->Cells[4][i]);
         }

          double ab=0;
         for(int i=1;i<StringGrid4->RowCount;i++)
         {
           if(ster==0)
           ab=StrToFloat(StringGrid4->Cells[2][i]);
           if(ster==1)
           ab=StrToFloat(StringGrid4->Cells[4][i]);


           StringGrid4->Cells[5][i]=FloatToStrF((ab*100/zyskrazem),ffGeneral,4,2);
         }


        sumazysk=0; sude=0;suza=0;zyskrazem=0;

        Button7->Enabled=false;
         
   
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button8Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

        for(int i=1;i<StringGrid4->RowCount;i++)
        {
          for(int j=0;j<6;j++)
          {
            StringGrid4->Cells[j][i]="";
          }
        }
        StringGrid4->RowCount=1;

         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
         Button7->Enabled=false;
         Form8->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button6Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

        for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<10;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;  

        DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
        Button9->Enabled=false;
         Button5->Enabled=false;
         Button15->Enabled=false;
        Form8->Close();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button9Click(TObject *Sender)
{
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

        for(int i=1;i<StringGrid1->RowCount;i++)
        {
          for(int j=0;j<10;j++)
          {
            StringGrid1->Cells[j][i]="";
          }
        }
        StringGrid1->RowCount=1;
         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");

        AnsiString np= DateTimePicker1->Date;
        np.Delete(11,9);
        np.Delete(5,1);
        np.Delete(7,1);
        int a=StrToInt(np);
        AnsiString np2= DateTimePicker2->Date;
        np2.Delete(11,9);
        np2.Delete(5,1);
        np2.Delete(7,1);
        int b=StrToInt(np2);
        Edit1->Text=np;
        Edit2->Text=np2;
         
        for(int i=a;i<=b;i++)
        {
        AnsiString pl=IntToStr(i);
        if(FileExists(pl))
        {
        Form1-> LoadGridFromFile(pl, StringGrid1);
        zapis();
        odczyt();

        StringGrid1->RowCount=x;

        }
          x=1;
        }
        int sumawz=0; int sumaws=0;
        for(int i=1;i<StringGrid1->RowCount;i++)
        {
         sumawz+=StrToInt(StringGrid1->Cells[4][i]);
         Edit6->Text= IntToStr(sumawz);

         sumaws+=StrToInt(StringGrid1->Cells[7][i]);
         Edit7->Text= IntToStr(sumaws);
        }
         Edit9->Text=sumaws-sumawz;
          if(sumaws==0)
         {
           Application->MessageBox(("Nie by³o zakupu w tym okresie „" + Edit10->Text + "”").c_str(),
           "Wybierz inny okres", MB_OK | MB_ICONINFORMATION);
           return;
         }
        Edit10->Text=(sumaws-sumawz)*100/sumaws;  




        Button15->Enabled=true;
        Button9->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button10Click(TObject *Sender)
{
        StringGrid2->Visible=true;
        StringGrid5->Visible=false;
        Button11->Enabled=true;
        Button10->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button11Click(TObject *Sender)
{
       StringGrid2->Visible=false;
       StringGrid5->Visible=true;
       Button11->Enabled=false;
       Button10->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button12Click(TObject *Sender)
{
     if(ster==1)
     {
      ster=2;
      Label26->Caption="zysku";
      st="z";
      StringGrid4->Cells[5][0]="Udzia³ % w zysku";
      }
     if(ster==0)
     {
      ster=1;
      Label26->Caption="obrotu";
      st="o";
      StringGrid4->Cells[5][0]="Udzia³ % w dochodzie";
     }
     if(ster==2)
      ster=0;
       
         for(int i=1;i<StringGrid4->RowCount;i++)
        {
        for(int j=0;j<6;j++)
        {
            StringGrid4->Cells[j][i]="";
        }
        }
        StringGrid4->RowCount=1;
         for(int i=1;i<StringGrid3->RowCount;i++)
        {
        for(int j=0;j<8;j++)
        {
            StringGrid3->Cells[j][i]="";
        }
        }
        StringGrid3->RowCount=1;



         DeleteFile("C:\\projektyBul\\MalySklep\\analizautrg.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
          Button7->Enabled=true;
}

//---------------------------------------------------------------------------





void __fastcall TForm8::StringGrid5Click(TObject *Sender)
{
      Edit4->Text=StringGrid5->Cells[StringGrid5->Col][StringGrid5->Row];
      Label1->Caption="Zakup towaru  "+Edit4->Text+"  w okresie";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::StringGrid2Click(TObject *Sender)
{
       Edit4->Text=StringGrid2->Cells[StringGrid2->Col][StringGrid2->Row];
       Label1->Caption="Zakup towaru  "+Edit4->Text+"  w okresie";

}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button5Click(TObject *Sender)
{
      Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
       Edit17->Text=""; Edit18->Text=""; Edit19->Text="";
       StringGrid4->Visible=false;
      StringGrid1->Visible=true;
      StringGrid3->Visible=false;
      DeleteFile("C:\\Users\\Zbyszek\\Desktop\\Analiza\\analizaoddo.txt");
        AnsiString np= DateTimePicker1->Date;
        np.Delete(11,9);
        np.Delete(5,1);
        np.Delete(7,1);
        int a=StrToInt(np);
        AnsiString np2= DateTimePicker2->Date;
        np2.Delete(11,9);
        np2.Delete(5,1);
        np2.Delete(7,1);
        int b=StrToInt(np2);
        Edit1->Text=np;
        Edit2->Text=np2;

        for(int i=a;i<=b;i++)
        {
        AnsiString pl=IntToStr(i);

        if(FileExists(pl))
        {
       Form1-> LoadGridFromFile(pl, StringGrid1);
        zapistowar(Edit4->Text);
          odczyt();
        StringGrid1->RowCount=x;
       
        }
           x=1;
        }

        Edit8->Text= StringGrid1->Cells[2][1];
         double sumail=0;  int sumawz=0; int sumaws=0;
        for(int i=1;i<StringGrid1->RowCount;i++)
        {
        sumail+=StrToFloat(StringGrid1->Cells[3][i]);


        sumawz+=StrToInt(StringGrid1->Cells[4][i]);
         Edit6->Text= IntToStr(sumawz);

        sumaws+=StrToInt(StringGrid1->Cells[7][i]);
         Edit7->Text= IntToStr(sumaws);
        }
            sumail=sumail*100;
          int przyb = floor(sumail +0.5);     // przybli¿enie 2 miejsca po ","
        double sil=(przyb);             //
         Edit5->Text= FloatToStr(sil/100);
         Edit9->Text=sumaws-sumawz;
         if(sumaws==0)
         {
           Application->MessageBox(("Nie by³o zakupu towaru „" + Edit4->Text + "”").c_str(),
   "Wybierz inny towar", MB_OK | MB_ICONINFORMATION);
  return;
         }
        Edit10->Text=(sumaws-sumawz)*100/sumaws;
         Button5->Enabled=false;
         Button15->Enabled=true;  
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button13Click(TObject *Sender)
{
        Edit22->Text=""; Edit23->Text=""; Edit24->Text=""; Edit25->Text="";
        Edit26->Text=""; Edit27->Text=""; Edit28->Text=""; Edit29->Text="";
        Edit30->Text=""; Edit31->Text=""; Edit32->Text=""; Edit33->Text="";
        Edit34->Text="";
        for(int i=1;i<StringGrid6->RowCount;i++)
        {
          for(int j=0;j<5;j++)
          {
            StringGrid6->Cells[j][i]="";
          }
        }
        StringGrid6->RowCount=1;
      Form8->Close();
      
}
//---------------------------------------------------------------------------



void __fastcall TForm8::Button14Click(TObject *Sender)
{
        DeleteFile("C:\\projektyBul\\MalySklep\\analizakoszty.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizatabela.txt");
        DeleteFile("C:\\projektyBul\\MalySklep\\analizautarg.txt");
         DeleteFile("C:\\projektyBul\\MalySklep\\analizaoddo.txt");
        StringGrid1->Visible=false;
        StringGrid3->Visible=false;
        StringGrid4->Visible=false;
        Edit5->Text=""; Edit6->Text=""; Edit7->Text=""; Edit8->Text="";
        Edit9->Text=""; Edit10->Text=""; Edit4->Text="";
        Edit13->Text=""; Edit14->Text=""; Edit15->Text=""; Edit16->Text="";
        Edit17->Text=""; Edit18->Text=""; Edit19->Text=""; Edit20->Text="";

         Form8->StringGrid6->Visible=true;

        x=1;
        for(int i=1;i<StringGrid6->RowCount;i++)
        {
          for(int j=0;j<5;j++)
          {
            StringGrid6->Cells[j][i]="";
          }
        }
        StringGrid6->RowCount=1;
        x=1;

        AnsiString np= DateTimePicker1->Date;
        np.Delete(11,9);
        np.Delete(5,1);
        np.Delete(7,1);
        int a=StrToInt(np);
        AnsiString np2= DateTimePicker2->Date;
        np2.Delete(11,9);
        np2.Delete(5,1);
        np2.Delete(7,1);
        int b=StrToInt(np2);
        Edit1->Text=np;
        Edit2->Text=np2;


        for(int i=a;i<=b;i++)
        {
          AnsiString pl=IntToStr(i);
          AnsiString pl2=IntToStr(i+100000000);
          AnsiString pl3=IntToStr(i+200000000);

            if(FileExists(pl3))        //koszty
           {
             Form9->LoadGridFromFile(pl3,Form9->StringGrid1);
            zapis3();
            odczyt2(3);
           }

             if(FileExists(pl))       //zakup
            {
             Form1-> LoadGridFromFile(pl,StringGrid1);
             zapis1();
             odczyt2(1);
            }

            if(FileExists(pl2))      //utarg
            {
            Form7-> LoadGridFromFile(pl2,Form7->StringGrid1);
            zapis2();
            odczyt2(2);
            }

              if(FileExists(pl)||FileExists(pl2)||FileExists(pl3))
              x=x+1;
               if(FileExists(pl)&&!FileExists(pl2))
              x=x-1;


             StringGrid6->RowCount=x;
             suma=0;suma1=0;suma2=0;suma3=0;suma4=0;
        }
          x=1;

          int sz=0; int sd=0;int su=0;int sk=0;

        for(int i=1;i<StringGrid6->RowCount;i++)
        {
          if(StringGrid6->Cells[1][i]!="")
          {
            sz+=StrToInt(StringGrid6->Cells[1][i]);
            Edit22->Text= IntToStr(sz);
          }
          if(StringGrid6->Cells[3][i]!="")
          {
           su+=StrToInt(StringGrid6->Cells[3][i]);
           Edit24->Text= IntToStr(su);
          }
          if(StringGrid6->Cells[2][i]!="")
          {
           sd+=StrToInt(StringGrid6->Cells[2][i]);
           Edit23->Text= IntToStr(sd);
          }
          if(StringGrid6->Cells[4][i]!="")
          {
           sk+=StrToInt(StringGrid6->Cells[4][i]);
           Edit25->Text= IntToStr(sk);
          }
        }
         Edit18->Text=su-sz;
         Edit16->Text=sd-sz;
          if(sd==0)
          {
           Application->MessageBox(("Nie by³o zakupu w tym okresie „" + Edit10->Text + "”").c_str(),
           "Wybierz inny okres", MB_OK | MB_ICONINFORMATION);
           return;
          }
          if(su==0)
          {
           Application->MessageBox(("Nie by³o utargu w tym okresie „" + Edit10->Text + "”").c_str(),
           "Wybierz inny okres", MB_OK | MB_ICONINFORMATION);
           return;
          }
           Edit26->Text=(sd-sz);
           if(sd!=0)
           Edit27->Text=(su*((sd-sz)*100/sd)/100)-(sd/50);
           if(sd!=0)
           Edit28->Text=(su*((sd-sz)*100/sd)/100)-(sd/50)-sk;
           if(sd!=0)
           Edit29->Text=(sd-sz)*100/sd;
           if(su!=0&&sd!=0)
           Edit30->Text=((su*((sd-sz)*100/sd)/100)-(sd/50))*100/su;
           if(su!=0&&sd!=0)
           Edit31->Text=((su*((sd-sz)*100/sd)/100)-(sd/50)-sk)*100/su;

           Edit32->Text=sd-su-sd/50;
           Edit33->Text=sd/50;
           Edit34->Text=Edit25->Text;

           x=1;
           Button14->Enabled=false;
           Button16->Enabled=true;
}
//---------------------------------------------------------------------------
 //---------------------------------------------------------------------------
    void __fastcall TForm8::odczyt2(int pl)
{
         string data,nazwatowaru,jm,ilosc,wartzakupu,cenajzakupu,
         cenasprzedazy,wartsprzedazy,zysk,zyskproc,koszt;
         string linia;
         int nr_linii=1;

    fstream plik;
    if(pl==1)
    plik.open("analizatabela.txt", ios::in);
      if(pl==2)
    plik.open("analizautarg.txt", ios::in);
    if(pl==3)
    plik.open("analizakoszty.txt", ios::in);
    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1:
            {
            data=linia;
            char tekst[50];
            sprintf(tekst, "%s", data);
            String a = tekst;
            if(a==StringGrid6->Cells[0][x-1])
            x=x-1;
             StringGrid6->Cells[0][x]=a;
            break;
            }
             case 2:
             {
             if(pl==2)
             {
             data=linia;
            char tekst[50];
            sprintf(tekst, "%s", data);
            String a = tekst;
            if(a==StringGrid6->Cells[1][x-1])
            x=x-1;
             StringGrid6->Cells[3][x]=a;
             }

            break;
            }
             case 3:
             {
             if(pl==3)
             {
               koszt=linia;
            char teksth1[20];
            sprintf(teksth1, "%s", koszt);
            String k1 = teksth1;
             int sum1=StrToInt(k1);
            suma4=suma4+sum1;
            String sk=IntToStr(suma4);
            StringGrid6->Cells[4][x]=sk;
            }
            break;
            }
             case 4:
             {
            break;
            }
             case 5:
             {
             if(pl==1)
             {
            wartzakupu=linia;
            char tekstd[50];
            sprintf(tekstd, "%s", wartzakupu);
            String e = tekstd;
            int sum=StrToInt(e);
            suma=suma+sum;
            String su=IntToStr(suma);
            StringGrid6->Cells[1][x]=su;
            }
            break;
            }
             case 6:
             {
            break;
            }
             case 7:
             {
            break;
            }
             case 8:
             {
             if(pl==1)
             {
            wartsprzedazy=linia;
            char tekstg[20];
            sprintf(tekstg, "%s", wartsprzedazy);
            String h = tekstg;
             int sum1=StrToInt(h);
            suma1=suma1+sum1;
            String su1=IntToStr(suma1);
            StringGrid6->Cells[2][x]=su1;
            }
            break;
            }
             case 9:
             {
             if(pl==0)
             {
            zysk=linia;
            char teksth[20];
            sprintf(teksth, "%s", zysk);
            String k = teksth;
             int sum=StrToInt(k);
            suma2=suma2+sum;
            String su=IntToStr(suma2);
            StringGrid6->Cells[4][x]=su;
            }
            break;
            }
             case 10:
             {
             if(pl==0)
             {
             double a=suma2;              //zysk
             double b=suma1;              //wart.sprzed.
             double sul=a/b*100;
            int koko = floor(sul +0.5);
           StringGrid3->Cells[5][x]=koko;
            }
            break;
            }
            }
            if(pl==3){
             if(nr_linii==3)
            { nr_linii=0;
             } }
            else{
            if(nr_linii==10)
            { nr_linii=0;x++; }} 
            nr_linii++;
    }
   plik.close();
   }
//---------------------------------------------------------------------------


 void  Drukuj()
{

 Printer()->Canvas->Font->Size = 12;
 Printer()->Canvas->Font->Name = "Courier New";
 Printer()->Canvas->Font->Color = clBlack;
 Printer()->Canvas->Font->Style = Printer()->Canvas->Font->Style << fsBold;
 Printer()->Canvas->TextOut(50, 50, nagl);

}
//---------------------------------------------------------------------------
void  Drukuj1(int a)
{

 Printer()->Canvas->Font->Size = 12;
 Printer()->Canvas->Font->Name = "Courier New";
 Printer()->Canvas->Font->Color = clBlack;
 Printer()->Canvas->Font->Style = Printer()->Canvas->Font->Style << fsBold;
 if(st=="z"&&sdruk=="b")
 Printer()->Canvas->TextOut(20, (a+50),  "Wed³ug planowanego zysku");
 else if(st=="o"&&sdruk=="b")
 Printer()->Canvas->TextOut(20, (a+50),  "Wed³ug planowanego obroru");
 else if(sdruk=="e")
 {
 a=a+300;
 if((a)>=y&&(500)<y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a,  "Planowany zysk                     w z³ = "+edit26);
 Printer() ->Canvas->TextOut(3000, a, "      w % = "+edit29);
  a=a+200;
 if((a)>=y&&(700)<y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a,  "Zysk brutto                        w z³ = "+edit27);
 Printer()->Canvas->TextOut(3000, a, "      w % = "+edit30);
  a=a+200;
 if((a)>=y&&(900)<y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a,  "Zysk netto                         w z³ = "+edit28);
 Printer()->Canvas->TextOut(3000, a, "      w % = "+edit31);
  a=a+200;
 if((a)>=y&&(1100)<y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a,  "Wartosc poaosta³ego towaru         w z³= "+edit32);
  a=a+200;
 if((a)>=y&&(1300)<y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a,  "Wartusc ubytków                    w z³ = "+edit33);
  a=a+200;
 if((a)>=y){
 a=100;Printer()->NewPage(); }
 Printer()->Canvas->TextOut(200, a, "Wartosc kosztów                    w z³ = "+edit34);
 }
 else
 Printer()->Canvas->TextOut(20, a,  "Razem");

}
//---------------------------------------------------------------------------
  void __fastcall PrintGrid(TStringGrid *Grid)
{
 Printer()->BeginDoc();
 Drukuj();

 int x = Printer()->PageWidth;
 y = Printer()->PageHeight;

 float tmp = 0.0;
 for(int i = 0; i < Grid->ColCount; i++)
  tmp = tmp + (float)Grid->ColWidths[i];

 float ratio_x = x/tmp;

 int w = 0;
 int h = 100;
 int ratio_y = Grid->Canvas->TextHeight("TEXT");
 Printer()->Canvas->Font->Size = 8;
 Printer()->Canvas->Font->Style << fsBold;
  int jr=Grid->RowCount+1;
  if(sdruk=="b")
  jr=31;
 for(int i = 0; i < jr; i++)
 {
 if(i>0) {
  Printer()->Canvas->Font->Size = 8;
  Printer()->Canvas->Brush->Style = bsClear; }
  w = 0;

  for(int j = 0; j < Grid->ColCount ; j++)
  {
   String tekst = Grid->Cells[j][i];
   lab_1:
   if(Printer()->Canvas->TextWidth(tekst) + ratio_y >= Grid->ColWidths[j] * ratio_x)
   {
    tekst = tekst.SubString(1, tekst.Length() - 4) + "...";
    goto lab_1;
   }
   int wj=3;
   if(sdruk=="d"||sdruk=="c"||sdruk=="e")
    wj=0;
   
    if(sdruk!="b")
    {
    if(i== Grid->RowCount&&j>wj){
    Printer()->Canvas->Rectangle(
                                 w * ratio_x,
                                 h * 3,
                                 (w + Grid->ColWidths[j]) * ratio_x,
                                 (h + Grid->RowHeights[i] + ratio_y)*3
                                );
     if(j==1&&sdruk=="d")
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit4);
      if(j==2&&sdruk=="d")
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit8);
     if(j==3&&sdruk=="d")
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit5);
     if(j==4)
    if(sdruk=="a"&&sdruk=="d"){
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit6);
      if(j==7)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit7);
     if(j==8)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit9);
      if(j==9)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit10);
    }
      if(sdruk=="c") {
      if(j==1)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit13);
     if(j==2)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit14);
     if(j==3)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit15);
     if(j==4)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit16);
      if(j==5)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit17);
     if(j==6)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit18);
      if(j==7)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit19);
    }
      if(sdruk=="e") {
      if(j==1)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit22);
     if(j==2)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit23);
     if(j==3)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit24);
     if(j==4)
    Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, edit25);
    }
    }
    }
   if(i!= Grid->RowCount){
   Printer()->Canvas->Rectangle(
                                 w * ratio_x,
                                 h * 3,
                                 (w + Grid->ColWidths[j]) * ratio_x,
                                 (h + Grid->RowHeights[i] + ratio_y)*3
                                );

     r=(h + Grid->RowHeights[i] + ratio_y)*3 ;
  Printer()->Canvas->TextOut(w * ratio_x + ratio_y, h * 3 + ratio_y, tekst);
  }

   w = w + Grid->ColWidths[j];
  }

  h = h+ Grid->RowHeights[i] + ratio_y;

  k=(h + Grid->RowHeights[i] + (ratio_y * 4)) * 3 ;
  if((h + Grid->RowHeights[i] + (ratio_y * 4)) * 3 >= y)
  {
   h = 0;
   Printer()->Canvas->TextOut(0, y - (ratio_y * 5), "strona " + (String)Printer()->PageNumber);
   Printer()->NewPage();
  }


  }

   Drukuj1(r);

 Printer()->Canvas->TextOut(0, y - (ratio_y * 5) , "strona " + (String)Printer()->PageNumber);
 Printer()->EndDoc();
}
//-------------------------------------------------------------------------


void __fastcall TForm8::Button15Click(TObject *Sender)
{
      String dp= DateTimePicker1->Date;
      dp.Delete(11,9);
       String dk= DateTimePicker1->Date;
      dk.Delete(11,9);
      edit4=Edit4->Text;
      edit5=Edit5->Text;
      edit6=Edit6->Text;
      edit7=Edit7->Text;
      edit8=Edit8->Text;
      edit9=Edit9->Text;
      edit10=Edit10->Text;
      nagl=Label1->Caption+" "+Label2->Caption+" "+dp+" "+Label3->Caption+" "+dk;
      if(PrintDialog1->Execute())
      PrintGrid(StringGrid1);
      Button15->Enabled=false;
}
//---------------------------------------------------------------------------






void __fastcall TForm8::Button17Click(TObject *Sender)
{
      String dp= DateTimePicker1->Date;
      dp.Delete(11,9);
       String dk= DateTimePicker1->Date;
      dk.Delete(11,9);

      nagl=Label1->Caption+" "+Label2->Caption+" "+dp+" "+Label3->Caption+" "+dk;
      if(PrintDialog1->Execute())
      PrintGrid(StringGrid4);
      Button17->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button18Click(TObject *Sender)
{
      String dp= DateTimePicker1->Date;
      dp.Delete(11,9);
       String dk= DateTimePicker1->Date;
      dk.Delete(11,9);
      edit13=Edit13->Text;
      edit14=Edit14->Text;
      edit15=Edit15->Text;
      edit16=Edit16->Text;
      edit17=Edit17->Text;
      edit18=Edit18->Text;
      edit19=Edit19->Text;
      nagl=Label1->Caption+" "+Label2->Caption+" "+dp+" "+Label3->Caption+" "+dk;
      if(PrintDialog1->Execute())
      PrintGrid(StringGrid3);
      Button18->Enabled=false;
}
//---------------------------------------------------------------------------





void __fastcall TForm8::Button16Click(TObject *Sender)
{
         String dp= DateTimePicker1->Date;
      dp.Delete(11,9);
       String dk= DateTimePicker1->Date;
      dk.Delete(11,9);
      edit22=Edit22->Text;
      edit23=Edit23->Text;
      edit24=Edit24->Text;
      edit25=Edit25->Text;
      edit26=Edit26->Text;
      edit27=Edit27->Text;
      edit28=Edit28->Text;
      edit29=Edit29->Text;
      edit30=Edit30->Text;
      edit31=Edit31->Text;
      edit32=Edit32->Text;
      edit33=Edit33->Text;
      edit34=Edit34->Text;
      nagl=Label1->Caption+" "+Label2->Caption+" "+dp+" "+Label3->Caption+" "+dk;
      if(PrintDialog1->Execute())
      PrintGrid(StringGrid6);
      Button16->Enabled=false;
}
//---------------------------------------------------------------------------


