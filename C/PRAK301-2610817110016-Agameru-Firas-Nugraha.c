#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        printf("%d %d\n", a, b);
    }

    return 0;
}