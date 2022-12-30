#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
//string a, b;
//cout<<"berat1 :";
//getline (cin, a);
//cout<<"berat2 :";
//getline (cin, b);
//int num1 = stoi(a);
//int num2 = stoi(b);
//int num3 = num1+num2;
//cout<<num3<<"Kg";

//string motor[6] = {"Suzuki", "Yamaha", "Honda", "Kawasaki", "KTM", "Viar"};
//cout<<motor[2]<<"=="<<motor[3]<<"=="<<motor[4]<<"=="<<motor[0]<<"=="<<motor[1];
//for (int i = 0; i <= sizeof(motor); i++) {
//  cout << motor[i] << "\n";
//}



  	char back;
    do{
	system("CLS");

string letters[3][5] = {
  { "A", "B", "C", "D", "E" },
  { "F", "G", "H", "I", "J" },
  { "K", "L", "M", "N", "O" }
};
//cout <<letters[0][0] <<letters[2][3] <<letters[2][0] <<letters[1][1];
for (int i = 0; i < 3 ; i++){
for	(int j = 0; j < 5 ; j++){
cout << letters[i][j]<<" ";
} 
cout<<endl;
} 
       
        cout << "INGIN MENGULANGI PROGRAM ? (y/n): ";
        cin >> back;
    }
    while (back == 'y');
    cout<<"TERIMA KASIH";
    



//string nohp[0][1] = {
  //{ "Alif", "0812931294"}
  //};
//cout <<nohp[0][1];

}
