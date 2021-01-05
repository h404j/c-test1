#include<stdio.h>
int main(){
    char str[1000];
    int sum=0,count=0;
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='0'&&str[i]<='9')
        {
            sum=sum*10+(str[i]-48);
            if (sum==0)
            {
                count++;
            }
            if(str[i+1]=='\0'){
                count++;
            }
            continue;
            
        }
        
        if ((str[i] < '0' ||str[i]>'9'))
        {
            if (sum>0)
            {
                count++;
            }
            sum = 0;
        }
    }
    printf("%d",count);
}