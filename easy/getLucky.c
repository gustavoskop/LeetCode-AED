int getLucky(char* s, int k) {
    int i, j = 0, valor, soma = 0;
    char numero[70];

    for (i = 0; i < strlen(s); i++) {
        valor = s[i] - 96;

        while (valor > 0) {
            soma += valor % 10;
            valor /= 10;
        }
    }

    while (--k > 0) {
        valor = soma;
        soma = 0;

        while (valor > 0) {
            soma += valor % 10;
            valor /= 10;
        }
    }

    return soma;
}