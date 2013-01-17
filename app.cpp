#include<iostream>
#include<fstream>
using namespace std;

class filemanager{
	fstream f;
	public:
		filemanager(){
			
		}
		int add_book(int serial,char &book_name, char &author, char &edition){
					
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
