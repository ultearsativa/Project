#include<iostream>
using namespace std;
	
int main (){
	int jenis1,jenis2,tiket1,tiket2,mobil=25000,motor=15000;
	string hari,kendaraan;
	cout<<"================================================================================================================\n";
	cout<<"\t\t\t\t         PEMESANAN TIKET DUFAN DAN ANCOL\n";
	cout<<"================================================================================================================\n";
	cout<<"Pilih Hari Kedatangan : ";
	getline(cin,hari);
	cout<<"================================================================================================================\n";
	if (hari=="Senin"||hari=="Selasa"||hari=="Rabu"||hari=="Kamis"||hari=="Jumat"){
		cout<<"1. Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol                                 : Rp 350.000\n";
		cout<<"2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol                             : Rp 295.000\n";
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) : Rp 185.000\n";
		cout<<"4. Weekday Dufan + Ancol                                                                  : Rp 250.000\n";
		cout<<"5. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol + Weekday Gondola           : Rp 333.000\n";
		cout<<"================================================================================================================\n";
		cout<<"Pilih Jenis Tiket             : ";
		cin>>jenis1;
		if (jenis1==1){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket1*350000<<endl;	
		}else if (jenis1==2){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket1*295000<<endl;	
		}else if (jenis1==3){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"================================================================================================================\n";
			if (tiket1<4){
				cout<<"MINIMAL PEMBELIAN 4 TIKET\n";
			}else{
				cout<<"Harga Total Tiket         : Rp."<<tiket1*185000<<endl;	
			}	
		}else if (jenis1==4){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket1*250000<<endl;
	}	else if (jenis1==5){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket1;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket1*333000<<endl;
	}		
} 	else if(hari=="Sabtu"||hari=="Minggu"||hari=="Libur Nasional"){
		cout<<"1. Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol                                 : Rp 350.000\n";
		cout<<"2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol                             : Rp 295.000\n";
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) : Rp 250.000\n";
		cout<<"4. Weekday Dufan + Ancol                                                                  : Rp 275.000\n";
		cout<<"5. Weekday Dufan + Ancol + Samdera                                                        : Rp 315.000\n";
		cout<<"6. Weekday Dufan + Ancol + Gondola                                                        : Rp 317.000\n";
		cout<<"7. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol + Weekday Gondola           : Rp 337.000\n";
		cout<<"================================================================================================================\n";
		cout<<"Pilih Jenis Tiket             : ";
		cin>>jenis2;
		if (jenis2==1){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*350000<<endl;	
		}else if (jenis2==2){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*295000<<endl;	
		}else if (jenis2==3){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			if (tiket2<4){
				cout<<"MINIMAL PEMBELIAN 4 TIKET\n";
			}else{
				cout<<"Harga Total Tiket         : Rp."<<tiket2*250000<<endl;	
			}	
		}else if (jenis2==4){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*275000<<endl;
	}	else if (jenis2==5){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*315000<<endl;
	}	else if (jenis2==6){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*317000<<endl;
	}	else if (jenis2==7){
			cout<<"Jumlah tiket yang akan dibeli : ";
			cin>>tiket2;
			cout<<"================================================================================================================\n";
			cout<<"Harga Total Tiket             : Rp."<<tiket2*337000<<endl;
	}
}
	cout<<"================================================================================================================\n";
	cout<<"Kendaraan yang dipakai (Mobil/Motor) : ";
	cin>>kendaraan;
	if (kendaraan=="Mobil"){
		cout<<"================================================================================================================\n";
		cout<<"Harga Tiket Parkir Mobil      : Rp."<<mobil<<endl;
	}else if (kendaraan=="Motor"){
		cout<<"================================================================================================================\n";
		cout<<"Harga Tiket Parkir Motor      : Rp."<<motor<<endl;
	}cout<<"================================================================================================================\n";
}
