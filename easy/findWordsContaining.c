/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *ans, i, j, k = 0;

    ans = (int *) malloc (sizeof(int) * 50);

    for (i = 0; i < wordsSize; i++)
        for(j = 0; words[i][j] != '\0'; j++)
            if (words[i][j] == x){
            ans[k++] = i;
            break;
            }
    
    *returnSize = k;
    return ans;
}