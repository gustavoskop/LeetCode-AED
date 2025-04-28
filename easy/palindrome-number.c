

bool isPalindrome(int x) {
    char y[12],p[12];
    sprintf(p, "%d", x);
    int i, n, tam;
    tam = strlen(p);
    n = tam - 1;
    for (i = 0; i < tam; i++)
        y[n--] = p[i];
    
    y[i] = '\0';

    if (strcmp(y, p) == 0)
    return true;
    
    else
    return false;
    
}