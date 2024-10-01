#include <stdio.h>

int main(void) {
    float num1, num2, num3;
    printf("inserisci tre numeri:");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        printf("il primo numero e' maggiore rispetto agli altri");
    }else if (num2 > num1 && num2 > num3) {
        printf("il secondo numero e' rispetto agli altri");
    }else if (num3 > num1 && num3 > num2) {
        printf("il terzo numero e' maggiore rispetto agli altri");
    }else if (num3 == num2 && num3 > num1) {
        printf("il secondo e il terzo sono maggiori rispetto al primo");
    }else if (num3 == num1 && num3 > num2) {
        printf("il primo e il terzo sono maggiori rispetto al primo");
    }else if (num1 == num2 && num1 > num3) {
        printf("il primo e il secondo sono maggiori rispetto al terzo");
    }else {
        printf("i tre numeri sono uguali");
    }
}
