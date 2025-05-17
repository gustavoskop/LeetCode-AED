#include <stdbool.h>
#include <stdio.h>


bool exist(char** board, int boardSize, int* boardColSize, char* word);


int main() {

    char* board[] = {
        "ABCE",
        "SFCS",
        "ADEE"
    };
    int boardSize = 3;
    int boardColSize[] = {4, 4, 4};
    char word[] = "ABCCED";

    bool found = exist(board, boardSize, boardColSize, word);
    printf("Palavra %s encontrada? %s\n", word, found ? "Sim" : "Não");

    return 0;

}


bool exist(char** board, int boardSize, int* boardColSize, char* word) {
     int i;


    for(i = 0; i < boardSize; i++){
       char **temp = **(board + 1);
        if (**(board + 1) == *word)
            return true;
            
            
    }
    return false;
    return false;
}