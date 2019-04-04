#include "fila.h"

int main(){
    init();
    Heroi a;
    //le o primeiro
    printf("nome? ");
    scanf("%s", a.nome);
    if (strcmp(a.nome, "fim")==0) return 0;
    printf("nota? ");
    scanf("%f", &a.nota);
    while(TRUE){
        entra(a); // o Heroi vai para a fila

        // le o prox Heroi
        printf("nome? ");
        scanf("%s", a.nome);
        if (!strcmp(a.nome, "fim")) break; // sai do loop
        printf("nota? ");
        scanf("%f", &a.nota);
    }

    // listar os Herois

    printf("\n fila de Herois\n");
    while(vazia()==FALSE){
        char resp;
        printf("continuar? ");
        resp=getch();
        if (resp=='s')
        {
            sai(&a);
            printf("%s %f\n", a.nome, a.nota);
        }
        else
            break;
    }
    printf("\nLiberar Herois\n");
    finish();
    return 0;
}
