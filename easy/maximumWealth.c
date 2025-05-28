int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i, j, soma = 0, somaMaior = 0;

    for(i = 0; i < accountsSize; i++){
        soma = 0;
        for(j = 0; j < accountsColSize[0]; j++)
            soma = soma + accounts[i][j];
    
        if (soma > somaMaior)
            somaMaior = soma;
}
    return somaMaior;
}

