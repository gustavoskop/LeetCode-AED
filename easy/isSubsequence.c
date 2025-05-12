// https://leetcode.com/problems/is-subsequence/description/?envType=problem-list-v2&envId=string

#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char *s, char *t);

int main()
{

    char t[] = "ahbgdc";
    char s[] = "abc";
    // char t[] = "ahbgdc"; 
    // char s[] = "axc";

    if (isSubsequence(s, t))
        printf("true");
    else
        printf("false");
}

bool isSubsequence(char *s, char *t)
{
    int i = 0, j = 0;

    while (t[i] != '\0' && s[j] != '\0')
    {
        if (s[j] == t[i])
            j++;
        i++;
    }
    if (s[j] == '\0')
        return true;
    else
        return false;
}