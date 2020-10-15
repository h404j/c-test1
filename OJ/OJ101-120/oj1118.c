#include <stdio.h>
void PrintArr(int a[], int n);
int insert(int a[], int n, int num);
int main()
{
    int a[1000], n, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &sum);
    insert(a, n, sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    PrintArr(a, n);
}
int insert(int a[], int n, int sum)
{
    a[n] = sum;
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[n]);
}