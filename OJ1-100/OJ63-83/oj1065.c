// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int len, nu = 0;
//     char c[100];
//     scanf("%s", c);
//     len = strlen(c);
//     for (int i = 0; i < len; i++)
//     {
//         if (c[i]>= '0' && c[i]<= '9')
//         {
//             nu++;
//         }
//     }
//     printf("%d", nu);
// }
#include <stdio.h>
int main()
{
    int i;
    char ch;
    i = 0;
    while (scanf("%c", &ch), ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
            i = i + 1;
        else
            i = i;
    }
    printf("%d", i);
    return 0;
}