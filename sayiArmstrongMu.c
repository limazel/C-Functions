#include <stdio.h>
#include <math.h>

int SayiArmstrongMu(int sayi);

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(SayiArmstrongMu(sayi)) {
        printf("%d sayisi Armstrong sayisidir.\n", sayi);
    } else {
        printf("%d sayisi Armstrong sayisi degildir.\n", sayi);
    }

    return 0;
}

int SayiArmstrongMu(int sayi) {
    int son_basamak, toplam, orijinal_sayi, basamak_sayisi ;
    toplam = 0;

    orijinal_sayi = sayi;

    // Basamak sayısını bul
    basamak_sayisi = (int) log10(sayi) + 1;

    while(sayi>0) {
        son_basamak = sayi % 10;
        toplam = toplam + round(pow(son_basamak, basamak_sayisi));
        sayi = sayi / 10;
    }
    return (orijinal_sayi == toplam);
}