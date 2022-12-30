#include<iostream>
using namespace std;

int main(){
	double panjang,lebar,tinggi,hasil,kota;
	string ulang;
do{
	system ("cls");
	cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"| NO |     Kota    | Tarif Dakota Cargo 20kg Pertama | Tarif Kg Berikutnya |"<<endl;
	cout<<"|----|-------------|---------------------------------|---------------------|"<<endl;
	cout<<"| 1  |Bandung      | 24.000                          | 2.900               |"<<endl;
	cout<<"| 2  |Banyuwangi   | 89.000                          | 4.450               |"<<endl;
	cout<<"| 3  |Bekasi       | 53.000                          | 2.650               |"<<endl;
	cout<<"| 4  |Cianjur      | 28.000                          | 1.400               |"<<endl;
	cout<<"| 5  |Cirebon      | 58.000                          | 2.900               |"<<endl;
	cout<<"| 6  |Denpasar     | 67.000                          | 3.350               |"<<endl;
	cout<<"| 7  |Jakarta      | 29.000                          | 1.450               |"<<endl;
	cout<<"| 8  |Jember       | 61.000                          | 3.050               |"<<endl;
	cout<<"| 9  |Jombang      | 78.000                          | 3.900               |"<<endl;
	cout<<"| 10 |Kediri       | 80.000                          | 4.000               |"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"Pilih Kota Tujuan : ";
	cin>>kota;
	if (kota==1){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 24.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<24000+(hasil-20)*2900;
		}	
	}else if (kota==2){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 89.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<89000+(hasil-20)*4450;
	}
	}else if (kota==3){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 53.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<53000+(hasil-20)*2650;
	}
}	else if (kota==4){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 28.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<28000+(hasil-20)*1400;
	}
}	else if (kota==5){
	 	cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 58.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<58000+(hasil-20)*2900;		
	}}else if (kota==6){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 67.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<67000+(hasil-20)*3350;		
	}}else if (kota==7){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 29.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<29000+(hasil-20)*1450;
	}}else if (kota==8){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 78.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<78000+(hasil-20)*3900;
	}}else if (kota==9){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 61.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<61000+(hasil-20)*3050;
	}}else if (kota==10){
		cout<<"Panjang (cm)      : ";
		cin>>panjang;
		cout<<"Lebar (cm)        : ";
		cin>>lebar;
		cout<<"Tinggi (cm)       : ";
		cin>>tinggi;
		cout<<"--------------------------------"<<endl;
		cout<<"Berat             : "<<panjang*lebar*tinggi/4000<<" Kg"<<endl;
		hasil=panjang*lebar*tinggi/4000;
		if (hasil>=1 && hasil<=20){
			cout<<"Tarif             : Rp. 80.000";
		}else if (hasil >20){
			cout<<"Tarif             : Rp. "<<80000+(hasil-20)*4000;
	}}else {
		cout<<"error";
	}cout<<"\n--------------------------------"<<endl;
	cout<<"Apa ingin menghitung ulang? (Y/N): ";
		cin>>ulang;
	}while (ulang=="Y");
	cout<<"Terima kasih.....";
	
	
                                
}

