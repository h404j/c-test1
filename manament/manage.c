#include "manage.h"
void initstu(struct manament *m)
{
    if (m->size == MAX)
    {
        return ;
    }else
    {
        memset(m->me, 0, sizeof(m->me));
    }
}