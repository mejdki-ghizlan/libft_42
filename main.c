#include <stdio.h>

int f(int i)
{
    i = i + 1;
    return i;
}
int main()
{
    int i = 5;
    f(i);
    printf("%d", i);
}