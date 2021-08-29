#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;                          //Create a variable for the prime counter;
    int counter = 0;                    //Create a variable for the divisions without remainder counter;

    printf("Prime Numbers Generator\n");//Display the name of the program;

    for(int i = 1;; ++i)                //Create the loop that will enumerate a dividends;
    {
        counter = 0;                    //Reset the divisions without remainder counter;

        for(int j = 1; j <= i; ++j)     //Create the loop that will enumerate a divisors;
        {

            if(i % j == 0)              //If the dividend is divisible by the divisor without remainder;
            {
                counter++;              //Increase the value of the divisions without remainder counter by one;
            }
        }

        if(counter == 2)                //If the dividend has only two divisors, then it is prime;
        {
            printf("%d\n", i);          //Print the prime number;

            if(++n == 1000000)              //If this number is the last;
            {
                return 0;               //Stop the program;
            }
        }
    }
}
