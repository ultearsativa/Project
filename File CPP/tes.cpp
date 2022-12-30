#include <iostream>
using namespace std;

int main(){
	string b1,b2;
	int a1,a2,a3;
	cout<<"berat 1 : ";
	cin>>b1;
	cout<<"berat 2 : ";
	cin>>b2;
	a1 = stoi(b1);
	a2 = stoi(b2);
	a3 = a1+a2;
	cout<<"Hasil : "<<a3;
}