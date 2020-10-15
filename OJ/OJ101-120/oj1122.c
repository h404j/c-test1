#include<stdio.h>
int main(){
    int a[1000],n,count=0,j=0,num;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &num);
        a[j]=num;
        for (int b=0; b<j-1; b++)
        {
            if (num==a[b])
            {
                count++;
                j--;
                break;
            }   
        }
        j++;
    }
    for (int i = 0; i <j-1; i++)
    {
        int flag=0;
        for (int k =0; k<j; k++)
        {
            if (a[k]>a[k+1])
            {
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                flag=1;
            }
            
        }
        if (flag==0)
        {
            break;
        }   
    }
    printf("%d\n",j);
    for (int i = 0; i <j-1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d", a[j]);
}