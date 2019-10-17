#include <stdlib.h>
#include <stdio.h>

int myAtoi(char* str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';

    return res;
}


int main()
{
    char xx[10]="12345";
    char yy[10]="678";
    int x, y, xy;
    x = myAtoi(xx);
    y = myAtoi(yy);
    printf("x is %d, y is %d\n", x, y);
    xy = x + y;
    printf("Addition of those two variables are, %d\n", xy);
    char zz[10];
    sprintf(zz, "%d", xy);
    printf("zz is %s\n", zz);

    return 0;

}
