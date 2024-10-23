#include <stdio.h>

int main()
{
    int count;
    printf("count: ");
    scanf("%d", &count);
    for (float i = 0; i < count; i = i + 0.5)
    {
        printf("%4.2f\n", i);
    }

    return 0;
}