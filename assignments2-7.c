//
//  main.c
//  assignments2-7
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printDigitNumber(int number1, int number2);
int checkPrimeNumber(int number);

int main(int argc, const char * argv[]) {
    int number1 = 2;
    int number2 = 5;
    for(int i = number1; i<=number2; i++)
    {
        int result = checkPrimeNumber(i);
        if(result == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

void printDigitNumber(int number1, int number2)
{
    for(int i = 2; i < number1; i++)
    {
        if(number1 % i == 0 && number2 % i == 0)
        {
           // printf("%d\n",i);
        }
    }
}

int checkPrimeNumber(int number)
{
    int result = 1;
    for (int j = 2; j <= number/2; j++)
    {
        if(number % j == 0)
        {
            // it is not prime number
            result = 0;
            break;
        }
    }
    return result;
}
