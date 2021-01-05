#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int m, n, i, max;
    char a[10000] = {0}, b[10000] = {0};
    while (scanf("%s%s", a, b) != EOF)
    {
        m = strlen(a);
        n = strlen(b);
        if (strcmp(a, b) == 0)
            printf("NO\n");
        else
        {
            max = m > n ? m : n;
            for (i = 0; i < max; i++)
            {
                if (a[i] == b[i])
                    continue;
                else
                {
                    if ((a[i] >= 'a' && a[i] <= 'z' && b[i] >= 'a' && b[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z' && b[i] >= 'A' && b[i] <= 'Z'))
                    {
                        if (a[i] < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else if (a[i] >= 'a' && a[i] <= 'z' && b[i] >= 'A' && b[i] <= 'Z')
                    {
                        if (a[i] - 32 < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else if (a[i] >= 'A' && a[i] <= 'Z' && b[i] >= 'a' && b[i] <= 'z')
                    {
                        if (a[i] + 32 <= b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else
                    {
                        if (a[i] < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}