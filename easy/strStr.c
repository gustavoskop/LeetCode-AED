// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/?envType=problem-list-v2&envId=string

#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle);

int main()
{
    char frase[] = "mississipi";
    char palavra[] = "issip";

    printf("%d", strStr(frase, palavra));
}

int strStr(char *haystack, char *needle)
{
    int i, j, temp;

    if (strlen(needle) > strlen(haystack))
        return -1;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            temp = i;
            while ((needle[j] == haystack[i]) && (needle[j] != '\0'))
            {
                i++;
                j++;
            }
            if (needle[j] == '\0')
                return temp;
            else
                i = temp;
        }
    }
    return -1;
}