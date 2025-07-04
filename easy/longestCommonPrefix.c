char* longestCommonPrefix(char** strs, int strsSize) {
  int k, m;

    if(strs[0][0] == NULL)
        return "";

  for(int i = 1; i < strsSize; i++){
    m = k = 0;
    while(strs[0][m] != '\0' && strs[0][m] == strs[i][m]){
        m++;
        strs[0][k] = strs[i][k];
        k++;
    }
    printf("%s\n", strs[0]);
    strs[0][k] = '\0';
  }

    return strs[0];

}