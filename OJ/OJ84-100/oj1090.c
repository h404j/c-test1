#include<stdio.h>
int main(){
    int a,b,n;
     scanf("%d", &n);
   
    for (int i = 0; i <n; i++)
    {
        scanf("%d%d", &a, &b);
        int sum=1;
        for (int j = 0; j <b; j++)
        {
            sum*=a;
            if (sum>999)
            {
                sum=sum%1000;
            }
            
        }
        printf("%d\n", sum);
    }
}