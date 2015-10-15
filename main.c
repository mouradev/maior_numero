#include <stdio.h>
#include <stdlib.h>

void main() {
    float notas[3], aux = 0;
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("digite a %da nota: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(j = 0; j < 3; j++) {
        if(notas[j] > notas[j+1]) {
            aux = notas[j];
            notas[j] = notas[j+1];
            notas[j+1] = aux;
        }
    }
    printf("o maior numero digitado foi: %2.f \n\n", notas[2]);
    system("pause");
}
