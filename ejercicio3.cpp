//vigenere + beaufort
//viernes 11:30 motorola
//clave - mensaje (restar)
#include <iostream>
#include "src/beaufort.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	string clave, mo, mc, tp;
	clave = "fua";
	
	beaufort e(clave);
	beaufort r(clave);

	mo = "hola como estas";
	mc = e._cd(mo);
	tp = r._cd(mc);
	cout << mc << endl;
	cout << tp << endl;
	return 0;
}