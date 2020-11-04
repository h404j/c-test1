#include <stdio.h>

int main()
{
    char str[1000];
    gets(str);
    int i, k = (int)str[0], flag =1;
    if ((int)str[0] == 95 || (str[0] > 'A' && str[0] < 'Z') || (str[0] > 'a' && str[0] < 'z'))
    {
        for (i = 1; str[i] != '\0'; i++)
        {
            if ((int)str[i] == 95)
            {
                flag = 0;
                continue;
            }
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                flag = 0;
                continue;
            }
            if ((str[i] >= '0' && str[i] <= '9'))
            {
                flag = 0;
                continue;
            }
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                flag = 0;
                continue;
            }
            flag=1;
            break;
        }
    }
    if (flag)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}