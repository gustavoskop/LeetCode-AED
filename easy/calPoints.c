int calPoints(char** operations, int operationsSize) {
    int stack[operationsSize], top = -1, i;
    int x = 0, soma = 0;

    for(i = 0; i < operationsSize; i++){

 
       if (**operations == 'D'){
            x = stack[top];
            stack[++top] = x * 2;
        }
        else if (**operations == 'C')
            top--;
        else if (**operations == '+'){
            top++;
            stack[top] = stack[top - 1] + stack[top - 2];
        } else {
            stack[++top] = atoi(*operations);
        }
        
        *operations++;
    }

    while(top > -1)
        soma += stack[top--];

    return soma;
}