#include<iostream>
using namespace std;

int main (){
	int f;
	    cout<<"=======================================\n";
	    cout<<"\t\tFIZZBUZZ\n";
		cout<<"=======================================\n";
		cout<<"Masukkan Angka : ";
		cin>>f;
		cout<<"=======================================\n";
        if(f % 3 == 0 && f % 5 == 0){
        cout<<"FizzBuzz\n";}
        else if(f%5 == 0){
                cout<<"Buzz\n";
        }
        else if(f%3 == 0){
                cout<<"Fizz\n";
        }
        else{
                cout<<"Bukan Fizz ataupun Buzz";
        }
        cout<<"=======================================\n";
}
