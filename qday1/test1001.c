#include<stdio.h>
//某学校植树节开展植树活动，已知树苗有m株，参加植树的同学有n人（且m>n），请问每位同学平均可以植树几株？还有几株剩余？
int main(){
int m=0,n=0,a=0,b=0;
scanf("%d%d",&m,&n);
a=m/n;
b=m%n;
printf("%d  %d",a,b);
return 0;
}