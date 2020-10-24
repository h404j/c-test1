#include <stdio.h>
int main()
{
    char str[1000][1000], c;
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
         int j = 0;
        while (scanf("%c", &c), c != '\n')
        {
            if (c>='0'&&c<='9')
            {
                j++;
            }
            
        }
        printf("%d\n",j);
    }
}