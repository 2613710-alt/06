#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    printf("sumTwo = %i\n", sumTwo(3, 5));
    printf("square = %i\n", square(4));
    printf("get_max = %i\n", get_max(7, 9));

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
