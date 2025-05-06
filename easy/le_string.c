// Faca uma rotina que receba como parametro um vetor de caracteres e seu tamanho.
// A funcao devera de ler uma string do teclado, caractere por caractere usando a funcao
// getchar() ate que o usuario digite enter ou o tamanho maximo do vetor seja alcancado.

#include<stdio.h>


void le_string (char s[15], int tam);

int main(){
    char s[15];

    le_string(s, 15);
    printf("%s", s);

}

void le_string (char s[15], int tam){
    char c;
    int i = 0;

    c = getchar();

    while ((c != '\n') && (i < tam)){
        s[i++] = c;
        c = getchar();

    }

    s[i] = '\0';

    if (c != '\n')
        printf("Frase muito longa\n\n");
    
}