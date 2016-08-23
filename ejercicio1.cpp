#include <iostream>
#include "src/cesar.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	int clave = 100;
	string mo, mc, tp;

	cesar e(clave);
	cesar r(clave);

	mo = "dfg ncxz sdf wg dfg";
	mc = e._c(mo);
	tp = r._d(mc);
	
	return 0;
}