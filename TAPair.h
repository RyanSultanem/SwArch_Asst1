#pragma once
#include "TA.h"
class TAPair :
	public TA
{
private:
	TA* first;
	TA* next;

public:
	TAPair(TA* first, TA* second);
	~TAPair();

	TA* first();
	TA* next();
};

