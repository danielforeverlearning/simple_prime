#include <stdio.h>
#include <stdlib.h>

/**********************
g++ main.cpp
***********************/

int main(int argc, char **argv)
{
    bool prime = true;
    for (int ii=1; ii <= 51; ii++)
    {
        prime = true;
        for (int xx=1; xx <= ii; xx++)
        {
             if (((ii % xx) == 0) && xx != 1 && xx != ii)
             {
                 prime = false;
                 printf("%d NOT prime, divisible by %d\n", ii, xx);
                 break;
             }
        }

        if (prime)
        {
             printf("%d is prime\n", ii);
        }
    }

    return 0;
}

