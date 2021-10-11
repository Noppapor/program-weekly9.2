#include <stdio.h>
void swap(int* x,int* y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int x,y;
    scanf_s("%d %d", &x, &y);
    swap(&x,&y);
    printf("%d %d", x, y);
    return 0;
}