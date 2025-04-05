#include <stdio.h>

int SayiAsalMi(int sayi);

int main() {
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);

    if(SayiAsalMi(sayi)) {
        printf("%d sayisi asal sayidir.\n", sayi);
    } else {
        printf("%d sayisi asal sayi degildir.\n", sayi);
    }

    return 0;
}

int SayiAsalMi(int sayi) {
    int i;
    for( i = 2; i <= sayi / 2; i++) {
        if(sayi % i == 0) {
            return 0; // Asal degil
        }
    }

    return 1; // Asal
}