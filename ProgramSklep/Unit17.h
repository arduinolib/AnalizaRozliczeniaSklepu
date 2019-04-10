//---------------------------------------------------------------------------

#ifndef Unit17H
#define Unit17H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm17 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TButton *Button1;
        TButton *Button2;
        TEdit *Edit1;
        TLabel *Label1;
        TEdit *Edit2;
        TLabel *Label2;
        TEdit *Edit3;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TLabel *Label5;
        TLabel *Label6;
        TStringGrid *StringGrid1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm17(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm17 *Form17;
//---------------------------------------------------------------------------
#endif
