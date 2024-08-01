#include<stdio.h>
int main()
{
    char s1[30];
    printf("Drop Your word or sentence: ");
    scanf("%s",&s1);
    char s2[30];

    int len = 0;
    for(int i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }

    for(int i = 0; i < len; i++)
    {
        s2[i] = s1[len-i-1];
    }

    s2[len] = '\0';

    int com = strcmp(s1,s2);

    if(com == 0)
    {
        printf("\nPalindrome");
    }
    else printf("\nNot Palindrome");

    return 0;

}
