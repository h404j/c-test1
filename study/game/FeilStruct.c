#include <stdio.h>
struct student
{
    char name[10];
    int score;
} stu, stuarr[10];

int main()
{
    int n = 3;
    // char name[]="dshf";
    // int score=100;
    // while (n--)
    // {
    //     scanf("%s %d", &stu.name, &stu.score);
    //     stuarr[n] = stu;
    // }

    FILE *fi = fopen("te.dat", "wb");
    if (fi == NULL)
    {
        printf("文件打开失败");
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", &stu.name, &stu.score);

        if (fwrite(&stu, sizeof(stu), 1, fi))
        {
           // fputc('\n',fi);
            printf("保存成功\n");
        }
        else
        {
            printf("保存失败");
        }

        /* code */
    }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     fprintf(fi, "%s%d", stuarr[i].name, stuarr[i].score);
    // }
    //fprintf(fi, "%s%d", name, score);
    //  fwrite(stuarr,sizeof(stuarr[0]),n,fi);
    fclose(fi);
}