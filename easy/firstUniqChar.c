int firstUniqChar(char* s) {
    int index[26];

    for(int i = 0; s[i] != '\0'; i++)
        index[s[i] - 'a']++;
    for (int i = 0; s[i] != '\0'; i++)
        if (index[s[i] - 'a'] == 1)
            return i;
    return -1;
}