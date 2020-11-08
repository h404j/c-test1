// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define N 100
// void reverse(char *str)
// {
//     //函数求出str的逆转数并存入str。
//     char *p1,t;
//     int j = 0, i = strlen(str)-1, flag = 0;
//     p1 = (char *)malloc(sizeof(char) * N);
//     if (str[0] == '-')
//     {
//        p1[0]='-';
//         j++;
//         flag=1;
       
//     }
//     for ( i; i >=flag; i--)
//     {
//         if (str[i]=='0'&&j==flag)
//         {
//             continue;
//         }
//         t=str[i];
//         p1[j]=t;
//         j++;        
//     }
//     for (j; j < strlen(str); j++)
//     {
//         p1[j]='0';
//     }
//     for (int k = 0; k <=j; k++)
//     {
//         printf("%c",p1[k]);
//     }
    
// }
// int main()
// {
//     char *p;
//     p = (char *)malloc(sizeof(char) * N);
//     gets(p);
//     reverse(p);

// }
/*#include<stdio.h>
#include<string.h>
#define N 105
void reverse(char *str){ 
//函数求出str的逆转数并存入str
    int i=0,j,len=strlen(str);
    char t;
    if(str[0]=='-')  //判断负号
        i++;
    j=len-1;
    while(str[j]=='0'){  //去后置0
        j--;
    }
    while(i<j){    //中间交换(双指针思想)
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
} 
int main(){
    char s[N];
    scanf("%s",s);
    reverse(s);
    puts(s);
    return 0;
}
*/