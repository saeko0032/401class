//
//  main.c
//  assignment6
//
//  Created by saekof on 2017-01-17.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    // Problem3 - 1
    int age;
    printf("Enter your age...\n");
    scanf ("%d",&age);
    printf ("Your age is : %d\n", age);
    if (age < 20)
    {
        printf("Your age is less than 20");
    }
    else
    {
        printf("Your age is greater than or equal 20");
    }
    printf("\n");
    
    // Problem3 - 2
    int gender;
    printf("If you want to see girl's name enter 1\n otherwise enter 2");
    scanf ("%d",&gender);
    if (gender == 1)
    {
        printf("Your daughter's name will be Mary");
    }
    else
    {
        printf("Your son's name will be Bill");
    }
    printf("\n");

    
    // Problem3 - 3
    int number;
    printf("Enter a number between 0 and 99999\n");
    scanf ("%d",&number);
    int count = 0;
    while(number != 0)
    {
        number /= 10;
        count++;
    }
    printf("The number of degit is %d",count);
    printf("\n");

    // Problem3 - 4
    int number1;
    printf("Enter a number between 0 and 200\n");
    scanf ("%d",&number1);
    if (200 < number1)
    {
        printf("Your number is bigger than 200");
    }
    else
    {
        if (number1 % 2 == 1)
        {
            printf("The number is odd\n");
        }
        else
        {
            printf("The number is even\n");
        }
    }
    
    return 0;
}
