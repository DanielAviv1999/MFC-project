#include "pch.h"
#include "Manager.h"
void Manager::insert(Mission* m) {
	switch (m->getType()) {
	case 1: // buy
		if (this->size[0] == COLS) throw "FULL";
		this->mArray[0][this->size[0]] = m;
		this->size[0]++;
		break;
	case 2: // day
		if (this->size[1] == COLS) throw "FULL";
		this->mArray[1][this->size[1]] = m;
		this->size[1]++;
		break;
	case 3: // general
		if (this->size[2] == COLS) throw "FULL";
		this->mArray[2][this->size[2]] = m;
		this->size[2]++;
		break;
	}
}

void Manager::deleteMission(int i, int j) {
	int t;
	for (t = j; t < this->size[i] - 1; t++){
		mArray[i][t] = mArray[i][t + 1];
	}
	mArray[i][t] = nullptr;
	this->size[i]--;
}

//bubble sort
void Manager::sortByName() { //sort only to buy marray[0]
	int i, j;
	for (i = 0; i < this->size[0] - 1; i++)
		for (j = 0; j < this->size[0] - i - 1; j++)
			if (this->mArray[0][j]->getText() > this->mArray[0][j + 1]->getText())
				swap(this->mArray[0][j], this->mArray[0][j + 1]);
}


void Manager::sortByPrice() {
	int i, j;
	for (i = 0; i < this->size[0] - 1; i++)
		for (j = 0; j < this->size[0] - i - 1; j++)
			if (static_cast<ToBuy*>(mArray[0][j])->getPrice() > static_cast<ToBuy*>(mArray[0][j + 1])->getPrice())
				swap(this->mArray[0][j], this->mArray[0][j + 1]);
}

void Manager::sortByPriority() {
	int i, j;
	for (i = 0; i < this->size[1] - 1; i++)
		for (j = 0; j < this->size[1] - i - 1; j++)
			if (static_cast<ToDay*>(mArray[1][j])->getPriority() > static_cast<ToDay*>(mArray[1][j + 1])->getPriority())
				swap(this->mArray[1][j], this->mArray[1][j + 1]);
}

void Manager::Serialize(CArchive& archive) {
	int i, j;
	
	CObject::Serialize(archive);

	if (archive.IsStoring()) {
		for (i = 0; i < ROWS; ++i)
			for (j = 0; j < this->size[i]; ++j)
				archive << this->mArray[i][j]->getInfo();
	}
	else
		for (i = 0; i < ROWS; ++i)
			for (j = 0; j < this->size[i]; ++j)
				archive >> this->infoArray[i][j];
}

void Manager::UpdateMessage(CString& mstr) const {
	int i, j;
	for (i = 0; i < ROWS; ++i)
		for (j = 0; j < this->size[i]; ++j)
			mstr.Append(this->infoArray[i][j]);
}

void Manager::clear() {
	int i, j;
	for (i = 0; i < ROWS; ++i) {
		size[i] = 0;
		for (j = 0; j < COLS; ++j)
			mArray[i][j] = NULL;
	}
}