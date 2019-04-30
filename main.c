#include <stdio.h>

int main()
{
        int k[10]={25,17,11,9,34,5,18,13,6,21}, temp=0,z=0,storage,storage2,max;
        int i=0;
        while (i<10)
        {
                if (k[i]>temp)
                {
                        temp=k[i];
                }
                i=i+1;
        }
        printf ("The highest grade is: %d",temp);
        return 0;
}
