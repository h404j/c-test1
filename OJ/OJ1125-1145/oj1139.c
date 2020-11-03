#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000][1000];
    int i, k = 0, n;
    scanf("%d", &n);
    getchar();
    for (int j = 0; j < n; j++)
    {
        gets(str[j]);
        if (strlen(str[k]) > strlen(str[j]))
        {
            k = j;
        }
    }
    printf("%s\n", str[k]);
}
