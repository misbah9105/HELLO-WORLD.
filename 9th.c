#include <stdio.h>
int main()
{
    int v = 10, *p;
    p = &v;
    printf("address of v =%u\n",p);
    printf("value of v=%d\n",p);
    printf("address of p=%u",&p);
    return 0;
}