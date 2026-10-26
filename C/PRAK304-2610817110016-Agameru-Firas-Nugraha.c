#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a == 0) {
        printf("Nol\n");
    } else if (a >= 1 &&a <= 9) {
        printf("Satuan\n");
    } else if (a >= 10 &&a <= 19) {
        printf("Belasan\n");
    } else if (a >= 20 &&a <= 99) {
        printf("Puluhan\n");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }

    return 0;
}