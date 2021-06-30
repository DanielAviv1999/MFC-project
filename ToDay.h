#pragma once
#include "ToDo.h"
class ToDay : public ToDo
{
private:
	int _priority;
public:
	ToDay(CString t = _T(""), int c = 0, int p = 1)
		:ToDo(t, 2, c)
	{	this->setPriority(p);	}

	int getPriority() const { return this->_priority; }
	void setPriority(int p) { this->_priority = p; }

	CString getInfo() const; //TODO!!!
};