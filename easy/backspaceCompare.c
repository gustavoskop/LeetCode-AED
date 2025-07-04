bool backspaceCompare(char* s, char* t) {
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        s[++top] = s[i];
        if (s[top] == '#') {
            if (top > 0)
                top -= 2;
            else
                top = -1;
        }
    }
    s[top + 1] = '\0';
    top = -1;
    for (int i = 0; t[i] != '\0'; i++) {
        t[++top] = t[i];
        if (t[top] == '#') {
            if (top > 0)
                top -= 2;
            else
                top = -1;
        }
    }
    t[top + 1] = '\0';

    if (strcmp(s, t) == 0)
        return true;
    return false;
}