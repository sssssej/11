#include <stdio.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("증가 전 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("증가 후 : pc = %p, pi = %p, pd = %p\n",
           (void *)pc, (void *)pi, (void *)pd);

    return 0;
}
