#include <stdio.h>
void decrypt(char *cipher, char *plain)
{
    int i, j = 0;
    for (i = 0; cipher[j] != '\0'; i++)
    {
        plain[i] = (cipher[j++] - '0') * 10 + (cipher[j++] - '0') + 24;
    }
    plain[i] = '\0';
}
int main()
{
    char a[205], b[105];
    int i = 0;
    gets(a);
    decrypt(a, b);
    puts(b);
    return 0;
}
