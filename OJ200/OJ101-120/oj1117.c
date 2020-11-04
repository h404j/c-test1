#include <stdio.h>
void del(int a[], int n, int i); /*删除数组a中下标为i的元素*/
void PrintArr(int a[], int n);
int find(int a[], int n, int x); /*输出数组a的前n个元素*/
int main()
{
    int a[10], n, x, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    if (find(a, n, x))
    {
        b = find(a, n, x);
        del(a, n, b);
        PrintArr(a, n - 1);
    }
    else
    {
        printf("Not Found");
    }
}
int find(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            return i;
        }
    }
    return 0;
}
void del(int a[], int n, int i)
{
    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}