#include "manage.h"
#include "manage.c"
void menu1()
{
    int flag = 1;
    while (flag) //��ѭ��ȷ��ϵͳһֱ���У����˳�ϵͳʱflag=1,����ѭ��
    {
        printf("----------------------ѧ���ɼ�����ϵͳ-----------------\n");
        printf("------------------1:���ѧ���ɼ�-----------------------\n");
        printf("------------------2:�޸�ѧ���ɼ�-----------------------\n");
        printf("------------------3������ѧ���ɼ�----------------------\n");
        printf("------------------4���鿴����ѧ���ɼ�-------------------\n");
        printf("------------------5��ɾ��ѧ���ɼ�-----------------------\n");
        printf("------------------6���˳�ϵͳ---------------------------\n");
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            system("CLS");
            printf("���ѧ���ɼ���");
            break;
        case 2:
            /* code */
            system("CLS");
            printf("�޸�ѧ���ɼ���");
            break;
        case 3:
            system("CLS");
            printf("����ѧ���ɼ���\n");
            /* code */
            break;
        case 4:
            system("CLS");
            printf("�鿴����ѧ���ɼ���\n");
            /* code */
            break;
        case 5:
            system("CLS");
            printf("ɾ��ѧ���ɼ���\n");
            /* code */
            break;
        case 6:
            system("CLS");
            printf("ллʹ�ã���ӭ�´ι��٣�");
            flag = 0;
            break;
        default:
            system("CLS");
            printf("����������������룡\n");
            break;
        }
    }
}
int main()
{
    //void addstu(&stu);
     initstu(&stu);
    menu1();
    system("pause");
    return 0;
}
// void initstu(struct manament *m)
// {
//     if (m->size == MAX)
//     {
//         return;
//     }
//     else
//     {
//         memset(m->me, 0, sizeof(m->me));
//     }
// }