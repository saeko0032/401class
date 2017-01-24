//
//  main.c
//  assignments2-8
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printDefineType(int number);

int main(int argc, const char * argv[]) {
    printf("type your favorite number\n");
    int favoriteNumber = 0;
    scanf("%d",&favoriteNumber);
    printDefineType(favoriteNumber);
    return 0;
}

void printDefineType(int number)
{
    if (number % 2 == 0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }

    if (number % 3 == 0)
    {
        printf("the number can divided of 3\n");
    }
    else
    {
        printf("the number can not divided of 3\n");
    }
               
    if (number % 7 == 0)
    {
        printf("the number can divided of 7\n");
    }
    else
    {
        printf("the number can not divided of 7\n");
    }
    
    int counter = 0;
    
    for(int i = 2; i <= number; i++)
        {
            if(number % i == 0) counter++;
        }
    if(counter == 1)
    {
        printf("the number is prime number\n");
    }
    else
    {
        printf("the number isn't prime number\n");
    }
}
