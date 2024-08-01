#include<stdio.h>
int main()
{
    char s[50] = "My name is Efaz Ahmed";
    char s1[50];

    int len = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    for(int j = 0; j < len; j++)
    {
        s1[j] = s[len-j-1];

    }
    s1[len] = '\0';
    printf("%s",s1);

    return 0;
}
