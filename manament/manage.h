#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
struct gread
{
    int English; //英语成绩
    int c;       //c语言成绩
    int math;    //数学成绩
    int score;   //学期总分
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
struct manament
{
    struct student me[MAX];
    int size;
};
void initstu(struct manament *m);
void addstu(struct manament *m);
