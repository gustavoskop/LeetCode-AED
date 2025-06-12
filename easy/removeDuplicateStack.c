char* removeDuplicates(char* s) {
    char* stack;
    stack = (char*)malloc(sizeof(char) * strlen(s));
    int top = -1;

    for (int i = 0; i < strlen(s); i++) {
        if (top > -1 && stack[top] == s[i])
            top--;
        else
            stack[++top] = s[i];
    }

    stack[top + 1] = '\0';

    return stack;
}