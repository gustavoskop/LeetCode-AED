bool isValid(char* s) {
    int i, top = -1;
    char stack[strlen(s)];

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[++top] = s[i];
    }
        else {
            if (top == -1 || 
        (s[i] == ')' && stack[top] != '(') || 
        (s[i] == ']' && stack[top] != '[') || 
        (s[i] == '}' && stack[top] != '{'))
                return false;   
        top--;
        }
    }

        if (top == -1)
        return true;
        else
        return false;

}