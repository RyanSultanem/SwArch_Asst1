#include <iostream>
#include "TAInt.h"
#include "TABool.h"
#include "TAMinus.h"
#include "TACieling.h"
#include "TABool.h"
#include "TALessThan.h"
#include "TAAnd.h"
#include "TADouble.h"
#include "TAFloor.h"
using namespace std;


int main()
{
	TAInt* x = new TAInt();
	TADouble* d = new TADouble();
	
	TACieling* y = new TACieling(d);

	TABool* b = new TABool();
	TALessThan* t1 = new TALessThan(x, y);

	TAAnd* t2 = new TAAnd(b, t1);


	system("PAUSE");
	return 0;
}