#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   
    if (abs(a) < abs(b))
    {
        a=b;
        a=(abs(a)<abs(c))?c:a;
    }
    else
    {
        a = (abs(a) <abs(c)) ? c: a;
    }
    if (abs(b) == abs(c))
    {
        a=b;
}

    printf("%d",a);
    return 0;
}