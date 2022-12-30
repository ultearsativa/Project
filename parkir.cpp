#include<iostream>
using namespace std;
//Muhammad Abdur Rochman TMJ 1B 2207421045
int main(){
	string jenis_kendaraan, inap, karcis;
	int pilihan, i, jam, jam6, tarif2 = 3000, tarif4 = 6000, tarif6 = 8000;
	int inap2 = 25000, inap4 = 50000, inap6 = 70000, denda2 = 50000, denda4 = 100000, denda6 = 100000, bayar, bayar6;
	cout<<"=========================================================================="<<endl;
	cout<<"                     TARIF PARKIR PROGRESIF\n";
	cout<<"=========================================================================="<<endl;
	cout<<"Berapa jumlah roda kendaraan anda (2/4/6) : ";
	cin>>pilihan;
	
	//KENDARAAN RODA 2
	if(pilihan== 2){
		cout<<"apa anda mempunyai karcis? (ya/tidak)\t  : ";
		cin>>karcis;

		if(karcis=="tidak"){
			cout<<"Anda harus membayar denda "<<denda2;
		}else if (karcis=="ya"){
			cout<<"Apa kendaraan anda menginap? (ya/tidak)\t  : ";
			cin>>inap;
		if(inap == "tidak"){
			cout<<"Tarif parkir anda adalah "<<tarif2;
		}else if(inap == "ya"){
				cout<<"Tarif parkir kendaraan anda adalah :"<<inap2;
				
		}
		}}
		
		//KENDARAAN RODA 4
	 	else if(pilihan == 4){
		cout<<"apa anda mempunyai karcis? (ya/tidak) : ";
		cin>>karcis;
		if(karcis=="tidak"){
			cout<<"Anda harus membayar denda "<<denda4;
		}else if(karcis=="ya"){
			cout<<"Berapa lama anda parkir (jam) : ";
			cin>>jam;
		if (jam >= 1 && jam <= 5){
			bayar = jam*2000+tarif4-2000;
			cout<<"Tarif parkir anda adalah "<<bayar;
		}else if(jam > 5 && jam <=12){
			cout<<"Tarif parkir anda adalah 25000";
		}else if(jam > 12 && jam <= 24){
			cout<<"Tarif parkir anda adalah 55000";
		}else if (jam <= 25){
			cout<<"Tarif inap anda dan parkir anda adalah "<<inap4+tarif4;
		}else if (jam <=26){
			bayar = inap4+tarif4+2000;
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam <=27){
			bayar = inap4+tarif4+(2*2000);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam <=28){
			bayar = inap4+tarif4+(3*2000);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam <=29){
			bayar = inap4+tarif4+(4*2000);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if(jam > 29 && jam <=36){
			bayar = inap4+25000;
			cout<<"Tarif inap dan parkir anda adalah "<<bayar;
		}else if(jam > 36 && jam <=48){
			bayar = inap4+55000;
			cout<<"Tarif inap dan parkir anda adalah "<<bayar;
		}
		}
		}
		//KENDARAAN RODA 6
		else if (pilihan==6){
			cout<<"apa anda mempunyai karcis? (ya/tidak) : ";
			cin>>karcis;
		if(karcis=="tidak"){
			cout<<"Anda harus membayar denda "<<denda6;
		}else if(karcis=="ya"){
			cout<<"Berapa lama anda parkir (jam) : ";
			cin>>jam6;
		if (jam6 >= 1 && jam6 <= 5){
			bayar6 = jam6*3500+tarif6-3500;
			cout<<"Tarif parkir anda adalah "<<bayar6;
		}else if(jam6 > 5 && jam6 <=12){
			cout<<"Tarif parkir anda adalah 35000";
		}else if(jam6 > 12 && jam6 <= 24){
			cout<<"Tarif parkir anda adalah 70000";
		}else if (jam6 <= 25){
			cout<<"Tarif inap anda dan parkir anda adalah "<<inap6+tarif6;
		}else if (jam6 <=26){
			bayar = inap6+tarif6+3500;
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam6 <=27){
			bayar = inap6+tarif6+(2*3500);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam6 <=28){
			bayar = inap6+tarif6+(3*3500);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if (jam6 <=29){
			bayar = inap6+tarif6+(4*3500);
			cout<<"Tarif inap anda dan parkir anda adalah "<<bayar;
		}else if(jam6 > 29 && jam <=36){
			bayar = inap6+35000;
			cout<<"Tarif inap dan parkir anda adalah "<<bayar;
		}else if(jam6 > 36 && jam <=48){
			bayar = inap4+70000;
			cout<<"Tarif inap dan parkir anda adalah "<<bayar;
		}
		}
		}
	}
