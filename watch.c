//https://judge.beecrowd.com/en/problems/view/1047
#include<stdio.h>
int main()
{
    int h1,m1,h2,m2;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    int hour,min;
    
    if(h2 < h1)
    {
        h2+=24;
        if(m2 < m1)
        {
            m2+=60;
            h2-=1;
        }
        
    }
    
    else if(h2 > h1)
    {
        if(m2 < m1)
        {
            m2+=60;
            h2-=1;
        }
    }
    
    else if(h2 == h1)
    {
        if(m2 == m1)
        {
            h2+=24;
        }
        else if(m2 < m1)
        {
            h2+=23;
            m2+=60;
        }
    }
    
    hour = h2 - h1;
    min = m2 - m1;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    
    return 0;
}
