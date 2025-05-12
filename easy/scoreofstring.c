// https://leetcode.com/problems/score-of-a-string/?envType=problem-list-v2&envId=string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int scoreOfString(char *s);

int main()
{
    char s[] = "hello";

    printf("%d", scoreOfString(s));
}

int scoreOfString(char *s)
{
    int ascii1 = 0, ascii2 = 0, i, soma = 0;
    int tam = strlen(s);

    for (i = 0; i < tam - 1; i++)
    {
        ascii1 = s[i];
        ascii2 = s[i + 1];
        soma += abs(ascii1 - ascii2);
    }

    return soma;
}