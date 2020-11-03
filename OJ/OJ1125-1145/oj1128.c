#include<stdio.h>
int main(){
    int m,n;
    double a[1000][10];
    scanf("%d %d",&m,&n);
    for (int i = 0; i <m; i++)
    {
       for (int j = 0; j <n; j++)
       {
           scanf("%lf",&a[i][j]);
       }
       
    }
    for (int i = 0; i <n; i++)
    {
        double sum=0;
        for (int j = 0; j <m; j++)
        {
           sum=sum+a[j][i];
        }
        sum=sum/m;
         printf("%.2f ",sum);
    }
}