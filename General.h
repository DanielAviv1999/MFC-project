#pragma once
#include "ToDo.h"
class General :
    public ToDo
{
    private:
    CString _dateLim;
    public:
    General(CString dateLim = _T(""), CString t = _T(""), int c = 0)
        :ToDo(t, 3, c)
    {
        this->setDateLim(dateLim);
    }

    CString getDateLim() const { return this->_dateLim; }
    void setDateLim(CString dateLim) { this->_dateLim = dateLim; }

    CString getInfo() const; //TODO!!!
};