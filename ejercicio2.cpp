#include <iostream>
#include "src/escitala.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	int clave = 6;
	string mo, mc, tp;

	escitala e(clave);
	escitala r(clave);

	mo = "hola como estas";
	mc = e._c(mo);
	tp = r._d(mc);
	cout << mc << endl;
	cout << tp << endl;

	return 0;
}