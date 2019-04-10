//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TStringGrid *StringGrid1;
        TButton *Button1;
        TLabel *Label1;
        TDateTimePicker *DateTimePicker1;
        TEdit *Edit1;
        TButton *Button4;
        TButton *Button5;
        TEdit *Edit2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm9(TComponent* Owner);
          void __fastcall TForm9::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
        void __fastcall TForm9::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
