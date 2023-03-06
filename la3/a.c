#include <stdio.h>
#include <string.h>

int main()
{
    char pos[9];
    char msg[1001];
    if (scanf("%s", pos) != 1) return 1;
    if (scanf("%s", msg) != 1) return 1;
    for (size_t i = 0; i < strlen(pos); i++)
    {
        int p = pos[i] - '1';
        
        for (size_t j = 0; j+p < strlen(msg); j+=strlen(pos))
        {
            printf("%c",msg[j + p]);
        }
    }
    printf("\n");
}