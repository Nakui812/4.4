#include <stdio.h>

int main(void)
{
    float mediavoti, voto , votiTot = 0;
    int NumVoti = 0;

    while (voto != 0) {
        printf("Inserisci un voto, quando finisci digita '0': ");
        scanf("%f", &voto);

        if (voto != 0) {
            votiTot += voto;
            NumVoti++;
        }
    }

    if (NumVoti > 0) {
        mediavoti = votiTot / NumVoti;
        printf("La media dei voti è: %.2f\n", mediavoti);
    } else {
        printf("Nessun voto inserito.\n");
    }

    return 0;
}
