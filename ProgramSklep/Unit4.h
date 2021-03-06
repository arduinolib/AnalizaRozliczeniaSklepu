//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TStringGrid *StringGrid1;
        TEdit *Edit1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TEdit *Edit2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
         void __fastcall TForm4::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
        void __fastcall TForm4::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 