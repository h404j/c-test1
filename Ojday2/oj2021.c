#include<stdio.h>
int main(){
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
if (a>=b)
{
   max=(a>=c)?a:c;
}else
{
    max = (b>= c) ? b: c;
}
printf("%d",max);

return 0;

}