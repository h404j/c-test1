#include <stdio.h>
int fintnum(int arr[100000], int n, int m, int a,int h);
int main()
{
    int n, m, arr[100000], a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //int h=arr[n-1];
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a);
        int d = fintnum(arr, n, 0, a,arr[n-1]);
        if (d>=0)
        {
            printf("%d\n", d);
        }
        else
        {
            printf("Not found!\n");
        }
    }
}
int fintnum(int arr[100000], int n, int m, int a,int h)
{
    // if (a > h)
    // {
    //     return -2;
    // }
    // if (a < arr[0])
    // {
    //     return -2;
    // }
    int c = (n + m) / 2;
    if (m > n)
    {
        return -2;
    }
    if (a==arr[c])
    {
        return c;
    }
    
     if (a > arr[c])
    {
        return fintnum(arr, n, c+1, a,h);
    }
    else if (a < arr[c])
    {
        return fintnum(arr, c-1, m, a,h);
    }
}
