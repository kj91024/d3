using namespace std;
class beaufort{
	private:
		string clave;
		string alf;
	public:
		beaufort(string clave){
			this->clave = clave;
			this->alf = "abcdefghijklmnopqrstuvwxyz ";
		}
		string _cd(string msn){
			string new_msn = "";
			int c, l;
			l = c = 0;
			for(int i = 0;i<msn.size();i++){
				c = alf.find(this->clave[l]) - this->alf.find(msn[i]);
				cout << c;
				if(c < 0)
					c = this->alf.size() + (c % (int)this->alf.size());
				cout << " "<< c << endl;
				new_msn += this->alf[c];
				
				if(l++ >= this->clave.size()-1)
					l = 0;
			}
			
			return new_msn;
		}
};