#pragma once
#include <iostream>
#include <string>
using namespace std;
class Mission
{
private:
	CString _text;
	int _type;
	//1->TO_BUY
	//2->TO_DAY  //
	//3->GENERAL //grey
public:
	Mission(CString t, int type);
	CString getText() const { return this->_text; }
	int getType() const { return this->_type; }

	void setText(CString t) { this->_text = t; }
	void setType(int type);
	virtual CString getInfo() const = 0;

};