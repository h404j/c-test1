#include <stdio.h>
void PrintDigit(int m);
void PrintSpace(int m);

int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        PrintSpace(a - i);
        PrintDigit(i);
    }
    for (int i = a-1; i>0; i--)
    {
        PrintSpace(a - i);
        PrintDigit(i);
    }
    
}
void PrintDigit(int m)
{
    for (int i = 1; i <= m; i++)
    {
        printf("%d", i);
    }
    for (int i = m - 1; i > 0; i--)
    {
        printf("%d", i);
    }
    printf("\n");
}
void PrintSpace(int m)
{

    for (int i = m; i > 0; i--)
    {
        printf(" ");
    }
    
}