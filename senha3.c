#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define TAM 100

int main()
{
    char str[TAM];

    while(true){
        scanf("%s",str);
        if (strcmp(str, "pc01") == 0)
        {
            printf("Senha correta!\n");
            break;
        }
        else
        {
            printf("Senha incorreta\n");
        }
    }
    return 0;
}