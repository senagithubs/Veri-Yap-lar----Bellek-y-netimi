#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci1 {
    char ad[50];
    int numara;
    float zaman;
};

struct ogrenci2 {
    char *ad;
    int numara;
    float zaman;
};

int main() {
    // Birinci öğrenci yapısı
    struct ogrenci1 ogr1;
    strcpy(ogr1.ad, "sena");
    ogr1.numara = 32190049;
    ogr1.zaman = 21.250000;

    printf("ogrenci1 in bellekteki yapısı: \n");
    printf("ad: %p\n", (void*)ogr1.ad);
    printf("numara: %p\n", (void*)&ogr1.numara);
    printf("zaman: %p\n", (void*)&ogr1.zaman);
    printf("struct ogrenci1 boyutu: %zu byte\n", sizeof(ogr1));
    printf("char ad[50] boyutu: %zu byte\n", sizeof(ogr1.ad));
    printf("int numara boyutu: %zu byte\n", sizeof(ogr1.numara));
    printf("float zaman boyutu: %zu byte\n", sizeof(ogr1.zaman));

    // İkinci öğrenci yapısı
    struct ogrenci2 ogr2;
    ogr2.ad = "sena";
    ogr2.numara = 32190049;
    ogr2.zaman = 21.250000;

    printf("ogrenci2nin bellekteki yapısı:\n");
    printf("ad: %p\n", (void*)ogr2.ad);
    printf("numara: %p\n", (void*)&ogr2.numara);
    printf("zaman: %p\n", (void*)&ogr2.zaman);
    printf("struct ogrenci2 boyutu: %zu byte\n", sizeof(ogr2));
    printf("char *ad boyutu: %zu byte\n", sizeof(ogr2.ad));
    printf("int numara boyutu: %zu byte\n", sizeof(ogr2.numara));
    printf("float zaman boyutu: %zu byte\n", sizeof(ogr2.zaman));

    
    int n;
    printf("dizinin boyutunu giriniz: ");
    scanf("%d", &n);

    int *pointer = (int *)malloc(n * sizeof(int));
    if (pointer == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return -1;
    }

    printf("%d eleman girin:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &pointer[i]);
    }

    printf("\ngirilen elemanlarin:");
    for (int i = 0; i < n; ++i) {
        printf("pointer adresi: %p\n", (void*)&pointer[i]);
        printf("degeri: %d\n", pointer[i]);
    }


    free(pointer);

    return 0;
}
