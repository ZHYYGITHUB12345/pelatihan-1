#include <iostream>
using namespace std;

int pilihan;
string text;

int main(){
 cout<<"\n";
 cout << "Daftar bahasa pemrograman:\n";
 cout << "1. Java \n2. C++ \n3. PHP\n";

 ulangi:

 cout << "Pilih bahsa Pemrograman (1-3): ";

 cin >> pilihan;

 switch(pilihan){
  case 1:
   text="Anda memilih Pemrograman Java";
  break;
  case 2:
   text="Anda Harus Fokus Belajar C++";
  break;
  case 3:
   text="Anda memilih Pemrograman PHP";
  break;
  default:
   goto ulangi;
 }

 cout << text;
}