#include <iostream>
using namespace std;

int main(){
	string repeat;
do{

    system("cls");
    int baris,kolom,i,j,pil;
    string A[25][25];
    int jb[25];
    int jk[25];
    int total=0;
    
    cout<<"1. Array 2D 3,5\n2. Array Dinamis\n3. Penjumlahan Baris dan Kolom\n\nInput Pilihan (1-3): ";
	cin>>pil;
	cout << "-------------------------------"<<endl;
	
	if(pil==1){
		string alphabet[3][5]={
		{"A","B","C","D","E"},
		{"F","G","H","I","J"},
		{"K","L","M","N","O"}
		};
		for (i=0;i<3;i++){
		for (j=0;j<5;j++){
		cout<<alphabet[i][j]<<" ";
			}
		cout<<endl;
		}
	}
	else if(pil==2){
   		 cout << "Input jumlah baris : ";
  		 cin >> baris;
  		 cout << "Input jumlah kolom : ";
  		 cin >> kolom;
  		 cout << "-------------------------------"<<endl;
  	
  	 	 for(i=0; i<baris; i++){
		 for(j=0; j<kolom; j++){
         cout<<"Baris " <<i<<", kolom "<<j<< " : ";
    	 cin>>A[i][j];
        }
    }
    
    	 cout << "-------------------------------"<<endl;
   		 for(i = 0; i < baris ; i++){
    	 for(j = 0; j < kolom; j++){
      	 cout << A[i][j] << "\t";
    	}
    	 cout << endl;
    }
	}
	else if(pil==3){
		int number[3][3]={
		{12,13,14},
		{15,16,17},
		{18,19,20}
		};

		for (i=0;i<3;i++){
		for (j=0;j<3;j++){
		cout<<number[i][j]<<" ";
		}
		cout<<endl;
	}
  
    	 cout << "-------------------------------"<<endl;
    	 for(i=0; i<3; i++){
         jb[i]=0;
         for(j=0; j<3; j++){
         jb[i]=jb[i]+number[i][j];
        }
         total=total+jb[i];
         cout<<"Jumlah baris ke-"<<i<<" : "<<jb[i]<<endl;
    }
    
    	 cout<<"Jumlah kolom      : "<<total;
}
		 cout<<"\nUlangi Program : ";
		 cin>>repeat;
}		
		while(repeat=="Y");
		cout<<" ";
		
}