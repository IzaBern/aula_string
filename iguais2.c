#include <stdio.h>
#define TAM 100

void compare (char *s1, char *s2)
{
    int x;
    for(x=0; x<=TAM; x++)
    {
        if(s1[x] != s2[x])
        {
            printf("Sao diferentes\n");
            break;
        }
        if(s1[x] == '\0')
        {
            printf("Sao iguais\n");
            break;
        }
    }

}

int main()
{
    char s1[TAM], s2[TAM];
    scanf("%s",s1);
    scanf("%s",s2);
    compare(s1, s2);
    
    return 0;
}