int countAsterisks(char* s) {
    int count = 0, k = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (count % 2 == 0)
            while (s[i] != '\0' && s[i] != '|') {
                if (s[i] == '*')
                    k++;
                i++;
            }
        if (s[i] == '|')
            count++;
    }
    return k;
}