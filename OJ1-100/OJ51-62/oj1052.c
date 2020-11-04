#include<math.h>
#include<stdio.h>
//输入n和a，求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，2+22+222的结果为246
int main(){
    int n,a,a1,sum=0;
    scanf("%d%d",&n,&a);
    a1=a;
    sum=a;
    if (n<10&&a<10&&n>=0&&a>=0)
    {
        for (int i = 1; i < n; i++)
        {
            a=a*10+a1;
            sum = sum + a;
        }
    }
    printf("%d\n",sum);
   
    
}
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,item,sum;
    scanf("%d%d",&n,&a);
    item=0;
    sum=0;
    for(i=1;i<=n;i++)
    {
        item=item*10+a;
        sum+=item;
    }
    printf("%d\n",sum);

    return 0;
}*/