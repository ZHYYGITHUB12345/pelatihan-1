#include <iostream>
using namespace std ;
 
int main() {
   int nomer ;

   cout << " Masukkan [1/2/3] : " ; cin >> nomer ;
   switch ( nomer ) {
         case 1 :
            cout << " Anda Memilih Angka 1 " ;
         break ;
 
         case 2 :
            cout << " Anda Memilih Angka 2 " ;
         break ;
 
         case 3 :
            cout << " Anda Memilih Angka 3 " ;
         break ;
 
         default :
            cout << " Pilihan default Terpilih " ;
         break ;
   }
    return 0 ;
}