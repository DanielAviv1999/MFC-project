#include "pch.h"
#include "Mission.h"
Mission::Mission(CString t, int type) {
	this->_text = t;
	this->_type = type;
}

void Mission::setType(int type) {
	this->_type = type;
}