int possibleStringCount(char* word) {
    int count = 0;
    
    for(int i = 1; word[i] != '\0'; i++){
        if (word[i] == word[i - 1])
            count++;
    }
    return count + 1;
}