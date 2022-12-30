#include <iostream>
using namespace std;

int main(){
	int jk;
	string nama="Muhammad Abdur Rochman";
	float tinggi, berat, meter, bmi, broca;
	
	cout<<"Nama \t: "<<nama<<endl;
	cout<<"Nim \t: 2207421045"<<endl;
	cout<<"Kelas \t: TMJ 1B"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"PROGRAM MENGHITUNG BERAT BADAN IDEAL"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	cout<<"Ditujukan untuk :\n";
	cout<<"1. Laki-laki\n";
	cout<<"2. Perempuan\n";
	cout<<"Masukkan Jenis Kelamin 1 atau 2\t= ";
	cin>>jk;
	cout<<"=========================================="<<endl;
	
	cout<<"Masukkan berat  \t: ";
	cin>>berat;
	cout<<"Masukkan tinggi (cm) \t: ";
	cin>>tinggi;
	cout<<"=========================================="<<endl;
	
	//Rumus
	meter=tinggi/100;
	bmi=(berat/(meter*meter));
	cout<<"Hasil BMI\t= "<<bmi<<"\n";
	
	if (bmi<18.5){
		cout<<"Menurut BMI Berat Badan Anda Tergolong Kurus"<<endl;
	}else if (bmi<=24.9){
		cout<<"Menurut BMI Berat Badan Anda Tergolong Normal"<<endl;
	}else if (bmi<=29.9){
		cout<<"Menurut BMI Berat Badan Anda Tergolong Kelebihan Berat"<<endl;
	}else if (bmi>30){
		cout<<"Menurut BMI Berat Badan Anda Tergolong Obesitas"<<endl;
	}
	
	switch(jk){
        case 1 : broca=((tinggi-100)-(0.10*(tinggi-100))); break;
        case 2 : broca=((tinggi-100)-(0.15*(tinggi-100))); break;
        default : broca=0;
	}
	
 	if (jk==1 or jk==2){
    	int hasil = (int)broca;
    	cout<<"Berat badan ideal anda Seharusnya : "<<hasil<<" KG"<<endl;
	}
}
