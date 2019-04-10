//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TStringGrid *StringGrid1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm10(TComponent* Owner);
        void __fastcall TForm10::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
        void __fastcall TForm10::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
