#include <stdlib.h>
#include <stdio.h>

/*
Programming Assignment (Due Oct 16)
Write a program to simulate the addition of the following strings.
char xx[10]=”12345”;
char yy[10]=”678”
char zz[10];
Steps:
1. Convert the string xx[] to it’s equivalent integer
2. Convert the string yy[] to it’s equivalent integer
3. Perform addition of the two integers
4. Convert the sum to string zz[]
5. Print the string zz[]
*/

int strToint(char* str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';

    return res;
}

int intTostr (int sum)
{
    char zz[10];
    int i = 0, counter = -1, y;
    int numberArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    y = sum;
    while(y!=0){
        y = y / 10;
        counter++;
    }
    int counter2 = counter + 1;
    while (sum != 0)
    {
        numberArray[counter] = sum % 10;
        sum /= 10;
        counter--;
    }
    zz[counter2] = '\0';
    for (int y = 0; y < counter2; y++)
        zz[y] = numberArray[y] + 48;
    printf("zz in function is %s\n", zz);
}


int main()
{
    char xx[10]="12345";
    char yy[10]="678";
    char zz[10];
    int x, y, xy;
    x = strToint(xx);
    y = strToint(yy);
    printf("x is %d, y is %d\n", x, y);
    xy = x + y;
    printf("Addition of those two variables are, %d\n", xy);
    intTostr(xy);

    return 0;

}
