#include<iostream>
#include<fstream>
using namespace std;

class filemanager{
	fstream f;
	public:
		filemanager(){
			
		}
		void _open(string &a){
		f.open(a.c_str(),);	
		}
		
		
};

int main(){
	filemanager a;
	string fname = "new.txt";
	a.insert(fname);
	FILE* f;
	f= fopen(fname.c_str(),"w");
	if(!f){
		cout<<"err";
	}
	return 0;
}
