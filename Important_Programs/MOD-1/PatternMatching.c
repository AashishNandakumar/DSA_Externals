#include <stdio.h>
#include <string.h>

void patternMatching(char M[100], char P[20])
{
    int i, j;
    for (i = 0; M[i] != '\0'; i++)
    {
        for (j = 0; P[j] != '\0'; j++)
        {
            if (M[i + j] != P[j])
            {
                break;
            }
        }
        if (P[j] == '\0')
        {
            printf("Match found\n");
            return;
        }
    }
    printf("Match not found\n");
}

int main()
{
    char mainStr[100], patternStr[20];

    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter pattern string: ");
    gets(patternStr);
    patternMatching(mainStr, patternStr);
    return 0;
}