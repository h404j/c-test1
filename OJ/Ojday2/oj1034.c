//商场夏季促销，购物500元以下，不打折；购物500元（含）以上，95折；购物1000元（含）以上，9折；购物3000元（含）以上，85折；购物5000元（含）以上，8折。根据消费金额，确定用户实际需要支付的数目。
#include <stdio.h>

int main()
{
    int a;
    float b;
    scanf("%d", &a);
    if (a <500)
    {
        b = a;
    }
    else if (a <1000)
    {
        b = a*0.95;
    }
    else if (a <3000)
    {
        b = a*0.9;
    }
    else if (a <5000)
    {
        b = a*0.85;
    }
    else
    {
        b=a*0.8;
    }

    printf("%.2f", b);
    return 0;
}