//---------------------------------------------------------------------------

#ifndef AboutFormClassH
#define AboutFormClassH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TaboutForm : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TaboutForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TaboutForm *aboutForm;
//---------------------------------------------------------------------------
#endif
