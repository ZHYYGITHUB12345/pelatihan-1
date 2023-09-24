#include <iostream>
using namespace std;

int main(){
    cout<<"=================================="<<endl;
    cout<<""<<endl;
    cout << "=== Program Pembayaran ===" << endl;
    unsigned int total_belanja;
    cout<<""<<endl;
    cout << "-> Masukan total belanja: ";
    cin >> total_belanja;

    // menggunakan percabangan if
    if(total_belanja > 10){
        cout<<""<<endl;
        cout << "o> Selamat! anda dapat hadia {Kupon}" << endl;
    }

    cout<<""<<endl;
    cout << "->Terimakasih sudah berbelanja di toko kami" << endl;
    cout<<""<<endl;
    cout<<"=================================="<<endl;
    return 0;
}