//
// Cmpnt3.cpp - Component 3
//
#include "ichap07.h"
#include "CUnknown.h"

///////////////////////////////////////////////////////////
//
// Component C
//
class CA : public CUnknown,
           public IZ
{
public:	
	// Creation
	static HRESULT CreateInstance(IUnknown* pUnknownOuter,
	                              CUnknown** ppNewComponent) ;

 private:
	// Declare the delegating IUnknown.
	DECLARE_IUNKNOWN

	// Nondelegating IUnknown
	virtual HRESULT __stdcall
		NondelegatingQueryInterface(const IID& iid, void** ppv) ;

	// Interface IZ
	virtual HRESULT __stdcall FzStructIn(Point3d pt) ;
	virtual HRESULT __stdcall FzStructOut(Point3d* pt) ;

	// Constructor
	CA(IUnknown* pUnknownOuter) ;

	// Destruction
	~CA() ;
} ;
