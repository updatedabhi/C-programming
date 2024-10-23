#include <stdio.h>
void name(str[])
{
    printf("Your Etered string is %s", str);
}

int main()
{
    char str[34];
    printf("Enter any string:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%s", &str[i]);
    }
    name(str);

    return 0;
}