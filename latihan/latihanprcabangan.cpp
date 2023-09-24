#include <iostream>
using namespace std;
int main(){

    int uang, harga, kembalian;
    cout <<"nominal uang:";
    cin >> uang;
    cout << "harga barang : ";
    cin >> harga;
    if  (uang > harga)
    {
        kembalian = uang - harga;
        cout << "kembalian ="<< kembalian;

    }
    else if ( uang < harga)
    { 
        cout <<"uang anda kurang"
    else
    {
        cout << "terimakasih sudah belanja";
    }
}
}