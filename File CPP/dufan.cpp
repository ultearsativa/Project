#include<iostream>
using namespace std;
	
int main (){
	int jenis1,jenis2,tiket1,tiket2,w_1=350000,w_2=295000,w_3=185000,w_4=250000,w_5=333000;
	int wn1=350000,wn2=295000,wn3=337000,wn4=275000,wn5=315000,wn6=317000,wn7=337000;
	string hari;
	cout<<"=============================================================================================\n";
	cout<<"\t\t\tDAFTAR HARGA TIKET DUFAN DAN ANCOL\n";
	cout<<"=============================================================================================\n";
	cout<<"DATANG DI HARI : ";
	cin>>hari;
	cout<<"=============================================================================================\n";
	if (hari=="Senin"||hari=="Selasa"||hari=="Rabu"||hari=="Kamis"||hari=="Jumat"){
		cout<<"1. Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol : Rp 350.000\n";
		cout<<"2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol : Rp 295.000\n";
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) : Rp 185.000\n";
		cout<<"4. Weekday Dufan + Ancol : Rp 250.000\n";
		cout<<"5. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol + Weekday Gondola : Rp 333.000\n";
		cout<<"=============================================================================================\n";
		cout<<"Pilih Jenis Tiket : ";
		cin>>jenis1;
		if (jenis1==1){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"Harga Total : "<<tiket1*w_1;	
		}else if (jenis1==2){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"Harga Total : "<<tiket1*w_2;	
		}else if (jenis1==3){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			if (tiket1<4){
				cout<<"Error";
			}else{
				cout<<"Harga Total : "<<tiket1*w_3;	
			}	
		}else if (jenis1==4){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"Harga Total : "<<tiket1*w_4;
	}	else if (jenis1==5){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"Harga Total : "<<tiket1*w_5;
	}		
} 	else if(hari=="Sabtu"||hari=="Minggu"||hari=="Libur Nasional"){
		cout<<"1. Annual Pass Dufan (Ecard) + x kunjungan Reguler Ancol : Rp 350.000\n";
		cout<<"2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol : Rp 295.000\n";
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) : Rp 337.000\n";
		cout<<"4. Weekday Dufan + Ancol : Rp 275.000\n";
		cout<<"5. Weekday Dufan + Ancol + Samdera : Rp 315.000\n";
		cout<<"6. Weekday Dufan + Ancol + Gondola : Rp 317.000\n";
		cout<<"7. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol + Weekday Gondola : Rp 337.000\n";
		cout<<"=============================================================================================\n";
		cout<<"Pilih Jenis Tiket : ";
		cin>>jenis2;
		if (jenis2==1){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn1;	
		}else if (jenis2==2){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn2;	
		}else if (jenis2==3){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			if (tiket2<4){
				cout<<"Error";
			}else{
				cout<<"Harga Total : "<<tiket2*wn3;	
			}	
		}else if (jenis2==4){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn4;
	}	else if (jenis2==5){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn5;
	}	else if (jenis2==6){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn6;
	}	else if (jenis2==7){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"Harga Total : "<<tiket2*wn7;
	}
}
}
