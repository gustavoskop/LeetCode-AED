char* toLowerCase(char* s) {
    for(int i = 0; i < strlen(s); i++)
        if (s[i] - 'A' > -1 && s[i] - 'A' < 26)
            s[i] = s[i] + 32;
    
    return s;
}