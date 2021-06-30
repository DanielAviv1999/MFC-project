#pragma once
#include "Mission.h"
class ToDo:public Mission
{
	private:
	int _color;
	public:
	ToDo(CString t, int type, int color)
		:Mission(t, type) {
		this->setColor(color);
	}

	int getColor() const { return this->_color; }
	void setColor(int c) { this->_color = c; }

	virtual CString getInfo() const = 0;
};

