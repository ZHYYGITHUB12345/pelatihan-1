#include <iostream>
using namespace std;

int main(){
    char nama = 'y';
    int jumlah = 0;

    // perulangan while
    while(nama == 'y'){
        printf("====================================\n");
        printf("\n");
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> nama;

        // increment jumlah
        jumlah++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("=========================================\n");
    printf("\n");
    printf("Kamu mengulang sebanyak %i kali.\n", jumlah);
    printf("\n");

    return 0;
}