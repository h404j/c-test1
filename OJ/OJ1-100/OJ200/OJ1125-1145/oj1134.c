#include <stdio.h>
int main()
{
    char str[1000][1000], c;
    int n,sum=0;
 
        while (scanf("%c", &c), c != '\n')
        {
            if (c >= '0' && c <= '9')
            {
                sum=sum*10+(int)c-48;
            }
        }
        printf("%d\n", sum*2);
    
}