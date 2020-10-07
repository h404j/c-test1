// #include<stdio.h>
// int main(){
//     int c = 10;
//     while (c > 0)
//     {
//         puts("我决不在课堂上写代码！");
//         c = c - 1;
//     }
// }
#include <stdio.h>
#include <string.h>
int main()
{
    // char masked_raider[] = "Alive";
    // const *jimmy = masked_raider;
    // printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    // masked_raider[0] = 'D';
    // masked_raider[1] = 'E';
    // masked_raider[2] = 'A';
    // masked_raider[3] = 'D';
    // masked_raider[4] = '!';
    // printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    char s0[] = "dysfun123ctional";
    char s1[] = "fun1";
    if (strstr(s0, s1))
        printf("我在dysfunctional中找到fun了!%s", strstr(s0, s1));
    return 0;
}