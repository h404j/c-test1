#include<stdio.h>
#define n 1000
int main(){
    int a,arr[n],min,j=0;
    scanf("%d",&a);
    for (int i = 0; i <a; i++)
    {
        scanf("%d",&arr[i]);
        min=arr[0];
    }
    
    for (int i = 0; i <a; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
            j=i;
        }
    }
    printf("%d %d",min,j);
}