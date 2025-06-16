#include <stdio.h>

void author() {
    printf("Author  : Danish Al Fayyadh Sunarta\n");
    printf("NPM     : 2406416951\n\n");
}

void judul() {
    printf("PENGHITUNG NILAI MODUL 1\n\n");
}

void input(float *TP, float *CS1, float *CS2) {
    printf("Masukkan nilai TP   : ");
    scanf("%f", TP);

    printf("Masukkan nilai CS1  : ");
    scanf("%f", CS1);

    printf("Masukkan nilai CS2  : ");
    scanf("%f", CS2);

    printf("----------------------------\n");
}

void proses(float TP, float CS1, float CS2, float *mean) {
    *mean = (TP * 25/100) + (CS1 * 55/100) + (CS2 * 20/100);
}

void nilai(float mean) {
    printf("Nilai Modul         : %2f\n", mean);
    if(mean < 55) {
        printf("TIDAK LULUS\n");
    }
    else {
        printf("LULUS\n");
    }
}

int main() {
    float TP, CS1, CS2, mean;
    author();
    judul();
    input(&TP, &CS1, &CS2);
    proses(TP, CS1, CS2, &mean);
    nilai(mean);
    return 0;
}