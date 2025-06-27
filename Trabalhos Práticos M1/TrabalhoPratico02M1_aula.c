int maximumGain(char *s, int x, int y)
{
    int *stack, tam = strlen(s), top = -1, count = 0, flag = 0, i = 0, t = 0;
    stack = (int *)malloc(sizeof(int) * tam);

    for (i = 0; i < tam; i++)
    {
        stack[++top] = s[i];
    }
    i--;
    int temp = i;
    if (x > y)
    {
        while (flag == 0)
        {
            flag = 1;
            top = temp;
            while (top != -1)
            {
                if (stack[top] == 'b')
                {
                    t = top;
                    while (top != 0 && stack[top - 1] == ' ')
                        top--;
                    if (top == -1)
                        break;
                    if (top != 0 && stack[top - 1] == 'a')
                    {
                        stack[t] = ' ';
                        stack[top - 1] = ' ';
                        top--;
                        count += x;
                        flag = 0;
                    }
                }
                top--;
            }
        }
        flag = 0;
        while (flag == 0)
        {
            flag = 1;
            top = temp;
            while (top != -1)
            {
                if (stack[top] == 'a')
                {
                    t = top;
                    while (top != 0 && stack[top - 1] == ' ')
                        top--;
                    if (top == -1)
                        break;
                    if (top != 0 && stack[top - 1] == 'b')
                    {
                        stack[t] = ' ';
                        stack[top - 1] = ' ';
                        top--;
                        count += y;
                        flag = 0;
                    }
                }
                top--;
            }
        }
    }
    else
    {
        while (flag == 0)
        {
            flag = 1;
            top = temp;
            while (top != -1)
            {
                if (stack[top] == 'a')
                {
                    t = top;
                    while (top != 0 && stack[top - 1] == ' ')
                        top--;
                    if (top == -1)
                        break;
                    if (top != 0 && stack[top - 1] == 'b')
                    {
                        stack[t] = ' ';
                        stack[top - 1] = ' ';
                        top--;
                        count += y;
                        flag = 0;
                    }
                }
                top--;
            }
        }
        flag = 0;
        while (flag == 0)
        {
            flag = 1;
            top = temp;
            while (top != -1)
            {
                if (stack[top] == 'b')
                {
                    t = top;
                    while (top != 0 && stack[top - 1] == ' ')
                        top--;
                    if (top == -1)
                        break;
                    if (top != 0 && stack[top - 1] == 'a')
                    {
                        stack[t] = ' ';
                        stack[top - 1] = ' ';
                        top--;
                        count += x;
                        flag = 0;
                    }
                }
                top--;
            }
        }
    }
    return count;
}