#include<stdio.h>
int main(){
    int x,y,a;
    scanf("%d%d",&x,&y);
    if (x>0)
    {
        if (y>0)
        {
            a=1;
        }
        else
        {
            a=4;
        }
        
    }else
    {
        if (y>0)
        {
            a=2;
        }
        else
        {
           a=3;
        }
        
    }
    
    
    printf("%d",a);
    return 0;
}