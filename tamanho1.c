#include <stdio.h>
#define TAM 100

void tamanho(char *s)
{
    int i=0;
    while(i>=0)
    {
        if(s[i]=='\0')
        {
            break;
        }
        i+=1;
    }
    printf("%d\n", i);
}

void leia(char *p)
{
    scanf("%s",p);
}

int main()
{
    char str[TAM];
    leia(str);
    tamanho(str);
    
    return 0;
}