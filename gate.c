#include <stdio.h>
void f(int *p, int m)
{
    m = m + 5;
    *p = *p + m;
    return;
}
/*
int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}
*/

int main()
{
    int i = 5, j = 10;
    f(&i, j);
    printf("%d", i + j);
    /*
    int x = 2, y = 5;
    y = jumble(y, x);
    x = jumble(y, x);
    printf("%d", x);
    return 0;
    */
}