#include <stdio.h>

int main() {
    int total_detik;
    scanf("%d", &total_detik);

    int hari = total_detik / 86400;
    int sisa_detik = total_detik % 86400;
    int jam = sisa_detik / 3600;
    sisa_detik %= 3600;
    int menit = sisa_detik / 60;
    int detik = sisa_detik % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}