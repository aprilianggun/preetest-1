#include <iostream>
using namespace std;

int main(){
	
	string a,b,c,d;
	
	cout<<"==================================================INPUT===================================================="<<endl;
	cout<<"nama    : ";
	getline(cin, a);
	cout<<"NPM     :";
	getline(cin, b);
	cout<<"jurusan : ";
	getline(cin, c);
	cout<<"angkatan: ";
	getline(cin, d);
	
	cout<<"==================================================OUTPUT======================================================"<<endl;
	cout<<"nama    : "<<a<<endl;
	cout<<"NPM     : "<<b<<endl;
	cout<<"jurusan : "<<c<<endl;
	cout<<"angkatan: "<<d<<endl;
}
