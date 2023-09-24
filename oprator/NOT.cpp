#include <iostream>
using namespace std;
 
int main( ){
   int a, b, c, hasil1, hasil2, hasil3, hasilAkhir;
 
   cout<<"Masukan Nilai A = ";cin>>a;
   cout<<"Masukan Nilai B = ";cin>>b;
   cout<<"Masukan Nilai C = ";cin>>c;
 
   hasil1 = a + 4 < 10;
   hasil2 = b > a + 5;
   hasil3 = c - 3 >= 4;
   hasilAkhir = hasil1 && hasil2 || hasil3;
 
   cout<<"= Program Ekspresi AND OR ="<<endl;
   cout<<"==========================="<<endl;
   cout<<"Hasil dari Hasil1 = a + 4 < 10 adalah "<<hasil1<<endl;
   cout<<"Hasil dari Hasil2 = b > a + 5 adalah "<<hasil2<<endl;
   cout<<"Hasil dari Hasil3 = c - 3 >= 4 adalah "<<hasil3<<endl;
   cout<<"Hasil dari Hasil Akhir = d && e || f adalah "<<hasilAkhir<<endl;
 
   return 0;
}