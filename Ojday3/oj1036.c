#include <stdio.h>
int main()
{
    int n, m, a;
    scanf("%d%d", &n, &m);
    if (n % 4 == 0 && n % 100 != 0)
        a = 1;
    else if (n % 400 == 0)
        a = 1;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        a = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
  
        a = 30;
        break;

    case 2:
        if (n % 4 == 0 && n % 100 != 0)
            a = 29;
        else
            a = 28;

        break;
    default:
        break;
    }
    printf("%d",a);
    return 0;
}