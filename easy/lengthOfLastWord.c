// https://leetcode.com/problems/length-of-last-word/?envType=problem-list-v2&envId=string

#include<stdio.h>
#include<string.h>

int lengthOfLastWord(char* s);



int lengthOfLastWord(char* s) {
    int count = 0, i = strlen(s) - 1;

    while (s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}