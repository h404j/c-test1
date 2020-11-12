#include "main.h"
struct gread
{
  int English;//英语成绩
//   int Chinese;//语文
  int c;//c语言成绩
  int math;//数学成绩
  int score;  //学期总分  
};
struct student
{
    int id;
    char name[10];
    int class;
    int semter;
    struct gread stugread;   
    struct student *next;
};
void link(){
    typedef struct stument LNode,*LinkList;
    void addlist(LinkList head);
    
}
void menu()
{
   int flag =1;
    while (flag)//死循环确保系统一直运行，当退出系统时flag=1,跳出循环
    {
        printf("----------------------学生成绩管理系统-----------------\n");
        printf("------------------1:添加学生成绩-----------------------\n");
        printf("------------------2:修改学生成绩-----------------------\n");
        printf("------------------3：查找学生成绩----------------------\n");
        printf("------------------4：查看所有学生成绩-------------------\n");
        printf("------------------5：删除学生成绩-----------------------\n");
        printf("------------------6：退出系统---------------------------\n");
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            system("CLS");
            printf("添加学生成绩：");
            break;
        case 2:
            /* code */
            system("CLS");
            printf("修改学生成绩：");
            break;
        case 3:
            system("CLS");
            printf("查找学生成绩：\n");
            /* code */
            break;
        case 4:
            system("CLS");
            printf("查看所有学生成绩：\n");
            /* code */
            break;
        case 5:
            system("CLS");
            printf("删除学生成绩：\n");
            /* code */
            break;
        case 6:
            system("CLS");
            printf("谢谢使用，欢迎下次光临：");
            flag=0;
            break;
        default:
            system("CLS");
            printf("输入错误，请重新输入！\n");
            break;
        }
    }
    
}
int main(){
    menu();
    system("pause");
    return 0;
}