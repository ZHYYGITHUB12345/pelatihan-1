#include <iostream>
using namespace std;

int main(){

    string password;
    cout<<""<<endl;
    cout << "========= Login =========" << endl;
    cout << "Masukan password: ";
    cin >> password;

    // percabangan if/else
    if (password == "xxx"){
        cout << "WELCOME TO TECH CODE!" << endl;
    } else {
        cout << "Password salah, coba lagi!"  << endl;
    }
    cout << "Terimakasih sudah menggunakan aplikasi ini!" << endl;
    cout<<""<<endl;
    return 0;
}