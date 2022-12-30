#include <iostream>
using namespace std;

int main (){
	int umur,jumlah,orang;
	string hari,dom,group;
	cout<<"SAFARI TREK & OUTBOUND\n";
	cout<<"Reservasi Group (Y/N) : ";
	cin>>group;
	if (group=="Y"){
		cout<<"Berapa Orang : ";
		cin>>orang;
		if (orang>=25){
			cout<<"Harga tiket : "<<orang*150000;
		}else{
			cout<<"Minimal Reservasi Group 25 Orang";
		}
	}
	else if (group=="N"){
	cout<<"Domestic / International : ";
	cin>>dom;
	if (dom=="Domestic"){
		cout<<"Pilih Hari Kedatangan : ";
		cin>>hari;
		if (hari=="Senin"||hari=="Selasa"||hari=="Rabu"||hari=="Kamis"||hari=="Jumat"){
		cout<<"Harga Tiket\n<5 Tahun Rp 200.000\n>6 Tahun Rp 230.000\n";
		cout<<"Umur Berapa : ";
		cin>>umur;
			if (umur>=1&&umur<=5){
				cout<<"Harga Tiket : Rp 200.000  ";
		}else if (umur>=6){
			cout<<"Harga Tiket : Rp 230.000  ";
		
	}}else if (hari=="Sabtu"||hari=="Minggu"||hari=="Libur"){
		cout<<"Harga Tiket\n<5 Tahun Rp 225.000\n>6 Tahun Rp 255.000\n";
		cout<<"Umur Berapa : ";
		cin>>umur;
			if (umur>=1&&umur<=5){
				cout<<"Harga Tiket : Rp 225.000  ";
		}else if (umur>=6){
			cout<<"Harga Tiket : Rp 255.000  ";
	}
	}
		
}else if (dom=="International"){
		cout<<"Pilih Hari Kedatangan : ";
		cin>>hari;
		if (hari=="Senin"||hari=="Selasa"||hari=="Rabu"||hari=="Kamis"||hari=="Jumat"){
		cout<<"Harga Tiket\n<5 Tahun Rp 350.000\n>6 Tahun Rp 400.000\n";
		cout<<"Umur Berapa : ";
		cin>>umur;
			if (umur>=1&&umur<=5){
				cout<<"Harga Tiket : Rp 350.000  ";
		}else if (umur>=6){
			
			cout<<"Harga Tiket : Rp 400.000  ";
		
	}}else if (hari=="Sabtu"||hari=="Minggu"||hari=="Libur"){
		cout<<"Harga Tiket\n<5 Tahun Rp 350.000\n>6 Tahun Rp 400.000\n";
		cout<<"Umur Berapa : ";
		cin>>umur;
			if (umur>=1&&umur<=5){
				cout<<"Harga Tiket : Rp 350.000  ";
		}else if (umur>=6){
			cout<<"Harga Tiket : Rp 400.000  ";
	}
	}
		
}
}}
	
	
