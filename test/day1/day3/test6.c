#include<stdio.h>
//有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
int sun(int x){
    int a = 1;
    int b = 1;
    int c =0;
    while (x-2>0)
    {
      c=a+b;
      a=b;
      b=c;
      x--;
    }
    return b;
}
int main(){
    int n=40;
    printf("%d个月后兔子一共有%d",n,sun(n));
    return 0;
}