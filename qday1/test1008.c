#include <stdio.h>
//美元越来越贬值了，手上留有太多的美元似乎不是件好事。赶紧算算你的那些美元还值多少人民币吧。假设美元与人民币的汇率是1美元兑换6.5573元人民币，编写程序输入美元的金额，输出能兑换的人民币金额。
int main()
{
    float dollar = 0, renminbi = 0;
    scanf("%f", &dollar);
    renminbi = dollar * 6.5573;
    printf("%.2f", renminbi);
}