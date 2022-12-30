#include<iostream>
using namespace std;

int main (){
	char lp;
	float b,t,m,bmi,brocal,brocap;
	cout<<"=========================================================\n";
	cout<<"\t\t     KALKULATOR BMI\n";
	cout<<"=========================================================\n";
	cout<<"Masukkan Jenis Kelamin (L/P) : ";
	cin>>lp;
	cout<<"Masukkan Tinggi Badan        : ";
	cin>>t;
	cout<<"Masukkan Berat Badan         : ";
	cin>>b;
	cout<<"=========================================================\n";
	m=t/100;
	bmi=(b/(m*m));
	if (bmi<18.5){
		cout<<"BMI               : "<<bmi<<" (BB Kurang)\n";
	}else if ((bmi>=18.5)&&(bmi<=22.9)){
		cout<<"BMI               : "<<bmi<<" (BB Normal)\n";
	}else if ((bmi>=23)&&(bmi<=24.9)){
		cout<<"BMI               : "<<bmi<<" (Pre-obes)\n";
	}else if ((bmi>=25)&&(bmi<=29.9)){
		cout<<"BMI               : "<<bmi<<" (Obesitas Tingkat 1)\n";
	}else {
		cout<<"BMI               : "<<bmi<<" (Obesitas Tingkat 2)\n";
	}
	brocap = ((t-100)-(0.15*(t-100)));
	brocal = ((t-100)-(0.10*(t-100)));
	if(lp=='L'){                
		cout<<"Berat badan ideal : "<<brocal<<" KG"<<endl;
	}else if(lp='P'){
		cout<<"Berat badan ideal : "<<brocap<<" KG"<<endl;
	}
	cout<<"=========================================================\n";
}