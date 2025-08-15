long long calculo(int* nums, int numsSize, int** pascal) {
    if (numsSize < 3)
        return 1;
    int esquerda[numsSize - 1], direita[numsSize - 1], l = 0, r = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[0])
            esquerda[l++] = nums[i];
        else
            direita[r++] = nums[i];
    }

    long long totalEsquerda = calculo(esquerda, l, pascal) % 1000000007;
    long long totalDireita = calculo(direita, r, pascal) % 1000000007;

    return (totalEsquerda * totalDireita) % 1000000007 *
           pascal[numsSize - 1][l] % 1000000007;
}

int numOfWays(int* nums, int numsSize) {

    int** pascal = malloc(numsSize * sizeof(int*));
    for (int i = 0; i < numsSize; i++)
        pascal[i] = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        pascal[i][i] = 1;
        pascal[i][0] = 1;

        for (int j = 1; j < i; j++)
            pascal[i][j] =
                (pascal[i - 1][j - 1] + pascal[i - 1][j]) % 1000000007;
    }

    int resultado = (calculo(nums, numsSize, pascal) - 1) % 1000000007;
    for (int i = 0; i < numsSize; i++)
        free(pascal[i]);
    free(pascal);

    return resultado;
}
