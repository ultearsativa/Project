#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // Tetapkan seed untuk fungsi rand()
  srand(time(0));

  // Buat angka acak yang akan ditebak
  int angka_acak = rand() % 100 + 1;
  //Variabel input nama Player dan persetujuan permainan
  string p1,p2, bermain;
  // Variabel untuk menyimpan tebakan Player
  int tebakan,tebakan2;
  bool benar = false;
  cout<< "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
  cout << "SELAMAT DATANG DI PERMAINAN TEBAK ANGKA!!!" << endl;
  cout<< "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl<<endl;
  	
  cout << "==============<<<<<< PERATURAN PERMAINAN >>>>>>==============" << endl;
  cout << "1. Anda harus menebak angka dengan lingkup 1-100" << endl;
  cout << "2. Permainan ini membutuhkan 2 pemain" << endl;
  cout << "3. Jika tebakan pemain terlalu tinggi/rendah akan muncul keterangan di bawahnya" << endl;
  cout << "4. Jika tebakan pemain benar akan ada keterangan dan permainan akan berakhir" << endl;
  cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-==-=-==-=" << endl;
  cout << "Apakah Kalian ingin bermain ? (Ya atau Tidak) : ";
  cin >> bermain;
  
  if (bermain == "ya"){
  	
  cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
  cout << "\n==========<<<<< SELAMAT BERMAIN >>>>>==========" << endl;
  cout << "Masukkan Nama Player 1 : ";
  cin >> p1;
  cout << "Masukkan Nama Player 2 : ";
  cin >> p2;
  cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<< endl;
  
  // Loop sampai salah satu Player menebak angka yang benar
  while (!benar) {
    cout << p1 << ", silakan tebak angka (1-100): ";
    cin >> tebakan;
    cout << p2 << ", silakan tebak angka (1-100): ";
    cin >> tebakan2;
    cout << endl;
	
    if (tebakan == angka_acak) {
      benar = true;
      cout << "Selamat!!!!!, " << p1 << " menang!!" << endl;
    } else if (tebakan < angka_acak) {
      cout << "Tebakan " << p1 << " terlalu rendah." << endl;
    } else if (tebakan > angka_acak) {
      cout << "Tebakan " << p1 << " terlalu tinggi." << endl;
    }
	

    if (tebakan2 == angka_acak) {
        benar = true;
        cout << "Selamat, " << p2 << " menang!" << endl;
    } else if (tebakan2 < angka_acak) {
      cout << "Tebakan " << p2 << " terlalu rendah." << endl << "---------------------------------" << endl;
    } else if (tebakan2 > angka_acak) {
      cout << "Tebakan " << p2 << " terlalu tinggi." << endl << "---------------------------------" << endl;
    }
    }
        
  } 
  
  else if (bermain == "tidak"){
  	cout << "SAMPAI BERTEMU DILAIN KESEMPATAN!";
  }
	gka
  return 0;
}
