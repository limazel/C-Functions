#include <stdio.h>

int sayininKubu(int sayi);

int main() {
    int sayi;
    int c;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    c = sayininKubu(sayi);

    printf("%d sayisinin kubu %d\n", sayi, c);
    return 0;
}

int sayininKubu(int sayi) {
    return sayi * sayi * sayi;
}