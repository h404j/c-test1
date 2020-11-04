#include <stdio.h>
int tuzi(int x)
{
    int f, f1 = 1, f2 = 1;
    if (x < 2)
    {
        return 1;
    }
    else
    {
        for (int i =1; i < x; i++)
        {
            f = f1 + f2;
            f2 = f1;
            f1 = f;
        }
        return f1;
    }
}
int main()
{
    int x;
    while (scanf("%d", &x)!=EOF)
    {
        if (x > 0)
        {
            printf("%d\n", tuzi(x));
        }
    }
    
        
    
}
