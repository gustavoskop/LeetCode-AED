int maximumGain(char *s, int x, int y)
{
    int count = 0, tam = strlen(s), top = -1;
    char *stack;
    stack = (char *)malloc(sizeof(char) * tam + 1);

    for (int i = 0; i < tam; i++)
    {
        stack[++top] = s[i];
    }

    stack[top + 1] = '\0';
    top = -1;

    if (x > y)
    {

        for (int i = 0; i < tam; i++)
        {
            stack[++top] = stack[i];
            if (top > 0 && stack[i] == 'b' && stack[top - 1] == 'a')
            {
                count += x;
                top -= 2;
            }
        }
        stack[top + 1] = '\0';
        tam = strlen(stack);
        top = -1;

        for (int i = 0; i < tam; i++)
        {
            stack[++top] = stack[i];
            if (top > 0 && stack[i] == 'a' && stack[top - 1] == 'b')
            {
                count += y;
                top -= 2;
            }
        }
    }
    else
    {

        for (int i = 0; i < tam; i++)
        {
            stack[++top] = stack[i];
            if (top > 0 && stack[i] == 'a' && stack[top - 1] == 'b')
            {
                count += y;
                top -= 2;
            }
        }
        stack[top + 1] = '\0';
        tam = strlen(stack);
        top = -1;

        for (int i = 0; i < tam; i++)
        {
            stack[++top] = stack[i];
            if (top > 0 && stack[i] == 'b' && stack[top - 1] == 'a')
            {
                count += x;
                top -= 2;
            }
        }
    }
    return count;
}