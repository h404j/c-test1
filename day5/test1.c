#include<stdio.h>
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
int main(){
char string[100];
int letter=0,space=0,number=0,other=0,i=0;
printf("请输入一行字符（注意长度不要超过一百）\n");
scanf("%s",&string);
while (string[i]!='\n')
{
   int a=string[i];
   if ((a>=65&&a<=90)||(a>=97&&a<=120))
   {
       letter++;
   }
   else if ((a >= 49 && a <= 57) )
   {
       number++;
   }
   else if (a == 32)
   {
       space++;
   }
   else
   {
       other++;
   }
   i++;
   
}

printf("%s里英语字符有%d个，数字有%d个，空格有%d个",string,letter,number,space,other);
return 0;
}