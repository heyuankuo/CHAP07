#include "CFactory.h"
#include "ichap07.h"
#include "a.h"

///////////////////////////////////////////////////////////
//
// Server.cpp
//
CFactoryData g_FactoryDataArray[] =
{
	{&CLSID_Component1, CA::CreateInstance, 
		L"Inside COM, Chapter 9 Example, Component 1", // Friendly name
		L"InsideCOM.Chap09.Cmpnt1.1",                  // ProgID
		L"InsideCOM.Chap09.Cmpnt1"}                  // Version-independent
		                                              //   ProgID
} ;

int g_cFactoryDataEntries
	= sizeof(g_FactoryDataArray) / sizeof(CFactoryData) ;
