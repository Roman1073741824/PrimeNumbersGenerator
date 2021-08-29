#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;                          //Create a variable for the beginning of the range;
    int b = 1000000;                    //Create a variable for the ending of the range;

    printf("Prime Numbers Generator\n");//Display the title of the program;

    for(int i = a; i <= b; ++i)         //Create the loop that will enumerate a dividends;
    {
        for(int j = 2; j*j <= i; ++j)   //Create the loop that will enumerate a divisors;
        {
            if(i % j == 0)              //If the dividend is divisible by the divisor without remainder;
                goto m;                 //Go to the next dividend;
        }
        printf("%d\n", i);              //Print the prime number;
        m:;                             //Go to the next dividend;
    }
    return 0;                           //End of the program;
}
