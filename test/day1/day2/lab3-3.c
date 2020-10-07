#include <stdio.h>
void main()
{

    // void switchArray(int[3][3]);
    int array[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    switchArray(array);

    return 0;
}

void switchArray(int array[][3])
{
    int newArray[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            newArray[j][i] = array[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }
}