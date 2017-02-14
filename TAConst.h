#pragma once
#include "TAPrimitiveTypes.h"
class TAConst :
	public TAPrimitiveTypes
{	
public:
	TAConst(int x);
	~TAConst();

	int getValue();
};

