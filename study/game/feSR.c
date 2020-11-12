#include <stdio.h>
struct student
{
    char name[10];
    int score;
} stu, stuarr[10];

int main()
{
    int n = 10;
    FILE *fi = fopen("te.dat", "rb");
    if (fi == NULL)
    {
        printf("文件打开失败");
    }
    // for (int i = 0;fread(&stuarr[i],sizeof(stuarr[0]),1,fi)!=0; i++);
    //fread(stuarr, sizeof(stuarr[0]), 10, fi);
    // for (int i = 0;i<3; i++)
    // {
    //     fread(&stuarr[i], sizeof(stuarr[0]), 1, fi);
    //     printf("读取成功\n");
    //     printf("%s : %d\n", stuarr[i].name, stuarr[i].score);
    // }
    fread(stuarr, sizeof(stuarr[0]),3, fi);
    printf("%s : %d\n", stuarr[0].name, stuarr[0].score);
    printf("%s : %d\n", stuarr[1].name, stuarr[1].score);
    printf("%s : %d\n", stuarr[2].name, stuarr[2].score);
    fclose(fi);
}