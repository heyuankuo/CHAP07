//
// Cmpnt3.cpp - Component 3
//
#include <objbase.h>

#include "ichap07.h"
#include "CUnknown.h"
#include "A.H"

///////////////////////////////////////////////////////////
//
// Interface IZ
//
HRESULT __stdcall CA::FzStructIn(Point3d pt)
{ 

	return S_OK ;
}

HRESULT __stdcall CA::FzStructOut(Point3d* pt)
{ 
	return S_OK ;
}

//
// Constructor
//
CA::CA(IUnknown* pUnknownOuter)
: CUnknown(pUnknownOuter)
{
}

CA::~CA() 
{
}

//
// NondelegatingQueryInterface implementation
//
HRESULT __stdcall CA::NondelegatingQueryInterface(const IID& iid,
                                                  void** ppv)
{ 	
	if (iid == IID_IZ)
	{
		return FinishQI(static_cast<IZ*>(this), ppv) ;
	}
	else
	{
		return CUnknown::NondelegatingQueryInterface(iid, ppv) ;
	}
}


///////////////////////////////////////////////////////////
//
// Creation function used by CFactory
//
HRESULT CA::CreateInstance(IUnknown* pUnknownOuter,
                           CUnknown** ppNewComponent) 
{
	*ppNewComponent = new CA(pUnknownOuter) ;
	return S_OK ;
}
