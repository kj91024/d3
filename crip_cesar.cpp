#include <iostream>
#include <vector>
#include <string>
using namespace std;

class emisor{
	private:
		int clave;
		vector<char> letras;
	public:
	emisor(int clave){
		this->clave = clave;
		for(int i = 'a';i <= 'z';i++)
			letras.push_back(i);
	}
	string cifrar(string msn){
		string new_msn = "";
		int c;

		for(int i = 0;i<msn.size();i++){
			c = (msn[i]-'a') + this->clave;
			if(c > ('z'-'a') )
				c = ( (msn[i] - 'z') + clave - 1 );
			new_msn += letras[c];
		}
		
		return new_msn;
	}
};

class receptor{
	private:
		int clave;
		vector<char> letras;
	public:
	receptor(int clave){
		this->clave = clave;
		for(int i = 'a';i <= 'z';i++)
			letras.push_back(i);
	}
	string decifrar(string msn){
		string new_msn = "";
		int c;

		for(int i = 0;i<msn.size();i++){
			c = (msn[i]-'a') - this->clave;
			if(c < 0 ){
				c = ('z'-'a') + (msn[i]-'a') - this->clave + 1;
			}
			new_msn += letras[c];
		}
		
		return new_msn;
	}
};

int main(int argc, char const *argv[])
{
	int clave = 3;
	string mo, mc, tp;

	emisor e(clave);
	receptor r(clave);

	cout << "Mensaje a enviar: ";
	cin >> mo;

	mc = e.cifrar("holax");
	tp = r.decifrar(mc);
	
	return 0;
}