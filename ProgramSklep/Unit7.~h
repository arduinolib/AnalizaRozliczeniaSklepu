//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
        TDateTimePicker *DateTimePicker1;
        TEdit *Edit1;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label3;
        TButton *Button3;
        TButton *Button4;
        TStringGrid *StringGrid1;
        TEdit *Edit2;
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm7(TComponent* Owner);
          void __fastcall TForm7::LoadGridFromFile(AnsiString FileName, TStringGrid *Grid);
         void __fastcall TForm7::SaveGridToFile(AnsiString FileName, TStringGrid *Grid,
        bool csv);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
