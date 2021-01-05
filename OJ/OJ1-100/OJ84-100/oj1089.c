#include<stdio.h>
int main(){
    int a,n;
long long sum=1;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum*i;
        while (sum>1000000)
        {
            sum/=10;
        }

    }
    while (sum > 10)
    {
        sum /= 10;
    }
    printf("%d",sum);
}
// #include <stdio.h>

// int main()
// {
//     long long ans = 1;
//     int n, i;
//     scanf("%d", &n);
//     for (i = 2; i <= n; i++)
//     {
//         ans *= i;
//         while (ans >= 100000000)
//             ans /= 10;
//     }
//     while (ans >= 10)
//         ans /= 10;
//     printf("%lld\n", ans);
//     return 0;
// }