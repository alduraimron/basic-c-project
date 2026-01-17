#include <stdio.h>
#include "math.h"

int main(){
    printf("Selamat datang di kalkulator pertama dari C oleh fluxy-code\n");
    while(1){
        int a;
        printf("Silahkan pilih operasi yang anda inginkan: \n");
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Kali\n");
        printf("4. Bagi\n");
        printf("0. Keluar\n");
        scanf("%d", &a);
        if(a == 0){
            printf("Terima Kasih Telah Menggunakan Kalkulator Ini.\n");
            break;
        }
        if(a != 1 && a != 2 && a !=3 && a != 4){
            printf("Nomor yang anda masukkan salah\n");
            continue;
        }
        int b;
        int c;
        printf("Masukkan angka pertama: ");
        scanf("%d", &b);
        printf("Masukkan angka kedua: ");
        scanf("%d", &c);
        switch (a)
        {
        case 1:
            printf("Hasilnya adalah: %d\n", tambah(b, c));
            break;
        case 2:
            printf("Hasilnya adalah: %d\n", kurang(b, c));
            break;
        case 3:
            printf("Hasilnya adalah: %d\n", kali(b, c));
            break;
        case 4:
            printf("Hasilnya adalah: %f\n", bagi(b, c));
            break;
        default:
            break;
        }

    };
    return 0;
}