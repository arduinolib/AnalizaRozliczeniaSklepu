//---------------------------------------------------------------------------


#include <vcl.h>
#include <math.h>
#pragma hdrstop
#include "Unit6.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
 double zakup;
 double detal;
TForm6 *Form6;

//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button4Click(TObject *Sender)
{
      Form6->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
             if( Edit1->Text==""||Edit2->Text==""|| Edit3->Text==""|| Edit4->Text==""||
     Edit5->Text==""|| Edit6->Text==""|| Edit7->Text==""|| Edit8->Text==""||
      Edit9->Text=="")return;
     Form1-> StringGrid1->RowCount=Form1->StringGrid1->RowCount+1;
      int lp=Form1->StringGrid1->RowCount-1;
      AnsiString dat= Form1->DateTimePicker1->Date;
        dat.Delete(11,9);
     Form1->StringGrid1->Cells[0][lp]=dat;
     Form1->StringGrid1->Cells[1][lp]= Edit1->Text;
     Form1->StringGrid1->Cells[2][lp]= Edit2->Text;
     Form1->StringGrid1->Cells[3][lp]= Edit4->Text;
     Form1->StringGrid1->Cells[4][lp]= Edit5->Text;
     Form1->StringGrid1->Cells[5][lp]= Edit6->Text;
     Form1->StringGrid1->Cells[6][lp]= Edit7->Text;
     Form1->StringGrid1->Cells[7][lp]= Edit8->Text;
     Form1->StringGrid1->Cells[8][lp]= Edit9->Text;
     Form1->StringGrid1->Cells[9][lp]= Edit3->Text;


     Form1->Edit1->Text=zakup=zakup+StrToFloat( Edit5->Text);
     Form1->Edit2->Text=detal=detal+StrToFloat( Edit8->Text);
     int d= StrToInt(Form1->Edit2->Text);
     double z= StrToFloat(Form1->Edit1->Text);
     int z1= floor(z+0.5);
     int zys=d-z1;
     int zpro=zys*100/d;
     int przyb = floor(zpro +0.5);
     Form1->Edit3->Text=FloatToStr(zys);
     Form1->Edit4->Text=FloatToStr(przyb);
     Form4->StringGrid1->Cells[3][Form4->StringGrid1->Row]=Edit7->Text;
     Edit4->Text="";
     Edit5->Text="";
     Edit6->Text="";
     Edit7->Text="";

         Form6->Close();

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
          if(Edit3->Text==""||Edit4->Text==""||Edit5->Text=="")
         {
          Edit4->Text=0;
           Application->MessageBox(("Ilosc i wartosc zakupu nie mo¿e wynosic „" + Edit4->Text + "”").c_str(),
   "Podaj ilosc i wartosc zakupu", MB_OK | MB_ICONINFORMATION);
           Edit4->Text="";
  return;
         }
        double z, il,wz,cj,c,warsp;
        z=StrToFloat(Edit3->Text); //zysk %
        il=StrToFloat(Edit4->Text);//ilosc
        wz=StrToFloat(Edit5->Text);//wart zakupu
        
        cj=wz/il;                  //obliczenie ceny jadnost. zakupu
        c=cj/(100-z)*100;          // obliczenie ceny jadnost. sprzeda¿y

        cj=cj*100;                     //
        int przybliz = floor(cj +0.5); // przybli¿enie cany jden zakupu 2 miejsca po ","
        double cj2=(przybliz);         //

        c=c*100;                       //
        int przyb = floor(c +0.5);     // przybli¿enie cany jden sprzed 2 miejsca po ","
        double c2=(przyb);             //

        Edit7->Text=FloatToStr(c2/100); //cena sprzwda¿y 2 miejsca po ","
        Edit6->Text=FloatToStr(cj2/100);//cena jedn zakupu 2 miejsca po ","

        warsp=przyb*il/100;
        int przybl=floor(warsp+0.5);// przybli¿enie wartosci sprzed do 1 z³

        int warza=floor(wz+0.5);

        double zysk=przybl-warza;

        Edit8->Text=przybl;   //wartosc sprzeda¿y
        Edit9->Text=zysk;  //zysk z³
  }
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm6::Button2Click(TObject *Sender)
{
     if(Edit3->Text==""||Edit4->Text==""||Edit5->Text=="")
         {
          Edit4->Text=0;
           Application->MessageBox(("Ilosc i wartosc zakupu nie mo¿e wynosic „" + Edit4->Text + "”").c_str(),
   "Podaj ilosc i wartosc zakupu", MB_OK | MB_ICONINFORMATION);
           Edit4->Text="";
  return;
         }
        double z,cs,il,warsp,wz;
        il=StrToFloat(Edit4->Text); //ilosc
        cs=StrToFloat(Edit7->Text); //cena sprzeda¿y
        wz=StrToFloat(Edit5->Text); //wartosc zakupu

        warsp=cs*il;              //wyliczenie wartosci sprzeda¿y
        int przybl=floor(warsp+0.5); //zaokr¹lona wart sprzed do 1 z³
        int warza=floor(wz+0.5);   // zaokr¹lona wart zakupu do1 z³
        int zysk=przybl-warza;     //obliczenie zysku

         z=zysk*100/przybl;        // obliczenie zysku %
        int przy = floor(z +0.5);  // zaokr¹lona wart zysku % do int
       

        Edit8->Text=przybl;   //wartosc sprzeda¿y
        Edit9->Text=zysk;  //zysk z³
        Edit3->Text=IntToStr(przy); //zysk %

}
//---------------------------------------------------------------------------

