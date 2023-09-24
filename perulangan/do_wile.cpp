#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int counter = 0;

    cout<<"=========================================="<<endl;
    cout<<""<<endl;
    do {
        cout<<"Apakah kamu mau mengulang?\n"<<endl;
        cout<<"Jawab (y/t) = ";
        cin >> ulangi;

        // increment counter
        counter++;
    } while(ulangi == 'y');

    cout<<"-----------\n"<<endl;
    cout<<"Perulangan Selesai!\n";
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
    cout<<""<<endl;
    cout<<""<<endl;
    return 0;
}


