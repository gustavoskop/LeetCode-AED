// https://leetcode.com/problems/reverse-string/?envType=problem-list-v2&envId=string

#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize);

int main(){
    char s[] = "hello";
    int sSize = strlen(s);

    reverseString(s, sSize);
    printf("%s", s);

}


void reverseString(char* s, int sSize) {
    char c[sSize];
    int i, k = 0;

    for (i = sSize - 1; i >= 0; i--) {
        c[k] = s[i];
        k++;
    }

    for (i = 0; i < k; i++) {
        s[i] = c[i];
    }
}