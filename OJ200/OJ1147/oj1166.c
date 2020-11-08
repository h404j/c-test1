#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 100
char *rounding(char *p)
{
    //将字符串p表示的实数取整后生成新的字符串，并由函数返回
    char *point;
    int j = 0;
    point=(char*)malloc(sizeof(char)*N);
    for (int i = 0; i <strlen(p); i++)
    {      
        if (p[i]=='.')
        {
            break;
        }       
        if (p[i]=='0'&&p[i+1]!='.'&&j==0)
        {
           continue;
        }else
        {
            point[j]=p[i];
            j++;
        }    
    }
    point[j]='\0';
    return point;
    
    
}
int main(){
char *p;
p=(char*)malloc(sizeof(char)*N);
gets(p);
printf("%s",rounding(p));

}