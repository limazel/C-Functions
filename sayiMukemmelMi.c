#include <stdio.h>
#include <math.h>

int SayiMukemmelMi(int sayi);

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(SayiMukemmelMi(sayi)) {
        printf("%d sayisi mukemmel sayidir.\n", sayi);
    } else {
        printf("%d sayisi mukemmel sayi degildir.\n", sayi);
    }

    return 0;
}

int SayiMukemmelMi(int sayi) {
    int toplam = 0;

    for(int i = 1; i <= sayi / 2; i++) {
        if(sayi % i == 0) {
            toplam += i;
        }
    }

    return (toplam == sayi);
}