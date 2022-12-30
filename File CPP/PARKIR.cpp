#include<iostream>
using namespace std;

int main(){
	int k,harga,tambah,jam,jam1,jam2;
	string karcis,inap1,inap2,inap3;
	cout<<"--------------------------------\n";
	cout<<"\tJENIS KENDARAAN\n--------------------------------\n1.KENDARAN RODA 2\n2.KENDARAAN RODA 4\n3.KENDARAAN RODA 6\n";
	cout<<"--------------------------------\n";
	cout<<"APA JENIS KENDARAAN : ";
	cin>>k;
	if (k==1){
		cout<<"Apakah karcis ada (Y/N) : ";
		cin>>karcis;
		if (karcis=="N"){
			cout<<"Anda harus membayar denda sebesar Rp 50.000,-";
		} 		
		else if (karcis=="Y"){
			cout<<"Apakah kendaraan menginap (Y/N) : ";
			cin>>inap1;
			}if (inap1=="Y"){
			cout<<"Tarif inap : Rp 25.000,-";
			}else if (inap1=="N"){
				cout<<"Berapa jam anda parkir (1-24) : ";
				cin>>jam;
				if (jam>=1&&jam<24){
				cout<<"Tarif parkir : Rp 3.000,-";
			}
				else if (jam>=24&&jam%24==0){
					cout<<"Tarif inap : "<<jam/24*25000; 
				}
			}
}
    else if (k==3){
		cout<<"Apakah karcis ada (Y/N) : ";
		cin>>karcis;
		if (karcis=="N"){
			cout<<"Anda harus membayar denda sebesar Rp 100.000,-";
		}else if (karcis=="Y"){
			cout<<"Apakah kendaraan menginap (Y/N) : ";
			cin>>inap2;
			}if (inap2=="Y"){
			cout<<"Tarif inap : Rp 70.000,-";
			}else if (inap2=="N"){
				cout<<"Berapa jam anda parkir (1-24): ";
				cin>>jam;
				if (jam>=1 && jam<=5){
					cout<<"Tarif parkir : Rp "<<jam*3500+8000-3500;
				}else if(jam > 5 && jam <=12){
					cout<<"Tarif parkir : Rp 35.000,-";
				}else if(jam> 12 && jam <=24){
					cout<<"Tarif parkir : Rp 70.000,-";
				}else if(jam>=24 && jam%24==0){
					cout<<"Tarif inap : "<<jam/24*70000;
				}
			}
			}
	else if (k==2){
		cout<<"Apakah karcis ada (Y/N) : ";
		cin>>karcis;
		if (karcis=="N"){
			cout<<"Anda harus membayar denda sebesar Rp 100.000,-";
		}else if (karcis=="Y"){
			cout<<"Apakah kendaraan menginap (Y/N) : ";
			cin>>inap3;
			}if (inap3=="Y"){
			cout<<"Tarif inap : Rp 50.000,-";
			}else if (inap3=="N"){
				cout<<"Berapa jam anda parkir : ";
				cin>>jam;
				if (jam>=1 && jam<=5){
					cout<<"Tarif parkir : Rp "<<jam*2000+6000-2000;
				}else if(jam > 5 && jam <=12){
					cout<<"Tarif parkir : Rp 25.000,-";
				}else if(jam> 12 && jam <=24){
					cout<<"Tarif parkir : Rp 55.000,-";
				}else if(jam>=24 && jam%24==0){
					cout<<"Tarif inap : "<<jam/24*50000;
				}
			}
			}}
			
			
