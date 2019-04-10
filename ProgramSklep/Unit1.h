//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Zakuptowaru1;
        TMenuItem *Sprzesa1;
        TMenuItem *Utarg1;
        TMenuItem *Utarg2;
        TMenuItem *Towary1;
        TMenuItem *Grupatowarowa1;
        TMenuItem *Warzywaowoce1;
        TMenuItem *Artspozywcze1;
        TMenuItem *Dodaj1;
        TMenuItem *Zaku1;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TButton *Button2;
        TButton *Button3;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TDateTimePicker *DateTimePicker1;
        TMenuItem *Zapisz1;
        TStringGrid *StringGrid1;
        TComboBox *ComboBox1;
        TButton *Button1;
        TEdit *Edit4;
        TLabel *Label5;
        TMenuItem *Zakocz1;
        TEdit *Edit5;
        TMenuItem *Najbardziejopacalnytowar1;
        TMenuItem *Zestawieniezakupw1;
        TMenuItem *Pokawybranytowar1;
        TMenuItem *Koszty1;
        TMenuItem *Bilanswokresie1;
        TMenuItem *Faktura1;
        void __fastcall Dodaj1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Utarg2Click(TObject *Sender);
        void __fastcall Warzywaowoce1Click(TObject *Sender);
        void __fastcall Artspozywcze1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Zaku1Click(TObject *Sender);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall Najbardziejopacalnytowar1Click(TObject *Sender);
        void __fastcall Zestawieniezakupw1Click(TObject *Sender);
        void __fastcall Pokawybranytowar1Click(TObject *Sender);
        void __fastcall Koszty1Click(TObject *Sender);
        void __fastcall Bilanswokresie1Click(TObject *Sender);
        void __fastcall Faktura1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void __fastcall TForm1::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
        void __fastcall TForm1::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid);
        
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
