#include "pch.h"
#include "ToDay.h"
CString ToDay::getInfo() const {
	CString res;
	res.AppendFormat(L"= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\r\n");
	res.AppendFormat(L"Today's task: ");
	res.Append(this->getText());
	res.AppendFormat(L"\r\nPriority: %d\r\n", this->getPriority());
	res.AppendFormat(L"= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\r\n");
	return res;
}