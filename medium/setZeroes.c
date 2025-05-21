// https://leetcode.com/problems/set-matrix-zeroes/?envType=daily-question&envId=2025-05-21

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int i = 0, linha = 0, col = 0, lZero[matrixSize], cZero[matrixColSize[0]], coLinha = 0, coCol=0;

    for(i = 0; i < matrixSize; i++)
        lZero[i] = -1;
    for (i = 0; i < matrixColSize[0]; i++)
        cZero[i] = -1;

    for(linha = 0; linha < matrixSize; linha++){
        coLinha = linha;
        for(col = 0; col < matrixColSize[0]; col++){
            coCol = col;
            if(matrix[linha][col] == 0){

                if(linha != lZero[coLinha])
                    lZero[coLinha] = linha;
                
                if(col != cZero[coCol])
                    cZero[coCol] = col;

            }

        }
        
    }

    coCol = coLinha = 0;
    for(i = 0; i < matrixSize; i++){
        
        if (lZero[coLinha] == i){
            linha = i;
            col = 0;
            while(col < matrixColSize[0]){
                matrix[linha][col] = 0;
                col++;
            }
        }
        coLinha++;

    }

    for(i = 0; i < matrixColSize[0]; i++){

        if(cZero[coCol] == i){
            col = i;
            linha = 0;
            while(linha < matrixSize){
                matrix[linha][col] = 0;
                linha++;
            }
        }
        coCol++;
    }
            
        }
