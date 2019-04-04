#include "fila.h"

typedef struct node {
    Heroi a;
    struct node *prox;
}Node;

Node *primeiro,*atual,*ultimo;

int init(){
    primeiro=NULL;
    atual=NULL;
    ultimo=NULL;
}

int finish(){
    ultimo->prox=NULL;
    while (TRUE){
        if(primeiro==NULL)
            return 0;
        Node *aux;
        aux=primeiro;
        if(primeiro->prox!=primeiro)
            primeiro = primeiro->prox;
        free(aux);
    }
    return 0;
}

int entra(Heroi a){
    Node *n;
    n = (Node *) malloc(sizeof(Node));
    if (n == NULL) return FALSE; // acabou a memoria
    n->a = a;
    n->prox = NULL;
    if (primeiro!=NULL && primeiro->prox==NULL)
        primeiro->prox=n;
    if (primeiro==NULL)
        primeiro=n;
    if (ultimo!=NULL && ultimo->prox==primeiro)
        ultimo->prox=n;
    ultimo=n;
    ultimo->prox=primeiro;
    atual=primeiro;
    return TRUE;
}

int sai(Heroi *pa){
    if (atual == NULL){
        return TRUE;
    }
    *pa = atual->a;
    atual = atual->prox;
    return FALSE;
}

int cheia(){
    return FALSE;
}

int vazia(){
    if (atual==NULL)
        return TRUE;
    else
        return FALSE;
}
