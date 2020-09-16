#include <stdio.h>
int main()
{
    int a = 2;
    int b = 0;
    int tic1 = 0;
    int tic2 = 0;
    int fi[6] = {0, 0, 0, 0, 0, 6};
    int ec[7] = {0, 0, 0, 0, 0, 0, 6};
    while (a != 0)
    {

        /* code */
        printf("Please type 1 for “first class”\n");
        printf("Please type 2 for “economy”\n");
        printf("Please type 3 for “exit”\n");

        scanf("%d", &b);
        switch (b)
        {
        case 1:
            if (fi[tic1] == 0)
            {
                /* code */
                fi[tic1] = 1;
                printf("你的座位号为%d\n", tic1+1);
                tic1++;
            }
            else
            {

                printf("Next Flight leaves in 3 hours\n");
            }
            break;
        case 2:
            /* code */
            if (ec[tic2]==0)
            {
                ec[tic2] =1;
                    /* code */
                    printf("你的座位号为%d\n", tic2+1);
                tic2++;
            }
            else
            {

                printf("Next Flight leaves in 3 hours\n");
            }
            break;
        case 3:
            a = 0;
            break;
        default:
            printf("error,Please type the correct number\n");
            break;
        }
    }
    printf("Program end\n");
}