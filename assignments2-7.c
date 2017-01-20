//
//  main.c
//  assignments2-7
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printPrimeNumber(int number1, int number2);

int main(int argc, const char * argv[]) {
    printPrimeNumber(63, 36);
    return 0;
}

void printPrimeNumber(int number1, int number2)
{
    for(int i = 2; i < number1; i++)
    {
        if(number1 % i == 0 && number2 % i == 0)
        {
            printf("%d\n",i);
        }
    }
}
