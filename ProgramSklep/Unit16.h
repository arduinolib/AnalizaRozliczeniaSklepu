//---------------------------------------------------------------------------

#ifndef Unit16H
#define Unit16H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm16 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TEdit *Edit1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TStringGrid *StringGrid1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
       void __fastcall TForm16::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
       void __fastcall TForm16::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid); 
        __fastcall TForm16(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm16 *Form16;
//---------------------------------------------------------------------------
#endif
