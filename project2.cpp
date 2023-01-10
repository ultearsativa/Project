#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // Tetapkan seed untuk fungsi rand()
  srand(time(0));

  // Buat angka acak yang akan ditebak
  int angka_acak = rand() % 100 + 1;
  string p1,p2;
  // Variabel untuk menyimpan tebakan Player
  // Variabel untuk menyimpan tebakan Player
  int tebakan,tebakan2;
  bool benar = false;
  cout << "Masukkan Nama Player 1 : ";
  cin >> p1;
  cout << "Masukkan Nama Player 2 : ";
  cin >> p2;
  // Loop sampai salah satu Player menebak angka yang benar
  while (!benar) {
    cout << p1 << ", silakan tebak angka (1-100): ";
    cin >> tebakan;
    cout << p2 << ", silakan tebak angka (1-100): ";
    cin >> tebakan2;
	
    if (tebakan == angka_acak) {
      benar = true;
      cout << "Selamat, " << p1 << " menang!" << endl;
    } else if (tebakan < angka_acak) {
      cout << "Tebakan " << p1 << " terlalu rendah." << endl;
    } else if (tebakan > angka_acak) {
      cout << "Tebakan " << p1 << " terlalu tinggi." << endl;
    }
	

    if (tebakan2 == angka_acak) {
        benar = true;
        cout << "Selamat, " << p2 << " menang!" << endl;
    } else if (tebakan < angka_acak) {
      cout << "Tebakan " << p2 << " terlalu rendah." << endl;
    } else if (tebakan > angka_acak) {
      cout << "Tebakan " << p2 << " terlalu tinggi." << endl;
    }
    }

  return 0;
}
