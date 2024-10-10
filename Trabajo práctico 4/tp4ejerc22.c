// 22

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tot = 0;
    char antes = ' ', ahora;

    printf("Escribe una frase, para acabar un punto '.': \n");

    // Leemos el primer caracter
    scanf("%c", &ahora);

    // Continuamos leyendo hasta encontrar un punto
    while (ahora != '.') {
        if (antes == 't' && ahora == 'a') {
            tot++;
        }
        antes = ahora;
        // Leemos el siguiente caracter
        scanf("%c", &ahora);
    }

    printf("-ta- aparece %d veces\n", tot);
    system("PAUSE");
    return 0;
}
