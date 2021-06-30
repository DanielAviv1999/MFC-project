#pragma once
#include "Mission.h"
class ToBuy :
    public Mission
{
private:
	double _price;
public:
	double getPrice() const { return this->_price; }
	void setPrice(double price) { this->_price = price; }

	ToBuy(CString t = _T(""), double price = 0)
		:Mission(t, 1) {
		this->setPrice(price);
	}

	CString getInfo() const; // TODO
};

