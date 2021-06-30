#include "pch.h"
#include "ToBuy.h"


CString ToBuy::getInfo() const 
{ 
	CString res;
	res.AppendFormat(L"= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\r\n");
	res.AppendFormat(L"Product name: ");
	res.Append(this->getText());
	res.AppendFormat(L"\r\nPrice: %.1lf$\r\n", this->getPrice());
	res.AppendFormat(L"= = = = = = = = = = = = = = = = = = = = = = = = = = = = =\r\n");
	return res; 
}