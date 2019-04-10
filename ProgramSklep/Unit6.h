//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TLabel *Label7;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TLabel *Label8;
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
 