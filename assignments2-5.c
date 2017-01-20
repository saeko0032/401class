//
//  main.c
//  assignments2-5
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void makeDownStairs(int number);
void makeUpStairs(int number);
void makeSharpStairs(int number);

int main(int argc, const char * argv[]) {
    makeDownStairs(6);
    makeUpStairs(4);
    makeSharpStairs(10);
    return 0;
}
void makeDownStairs(int number)
{
    long i, j = 0;
    
    for(j = number; 0 < j; j--)
    { // (ex)number=5 then j=5,4,3,2,1
        for(i = 1; i <= j; i++)
        { // (ex) i=1,2,3,4,5
            printf("*");
        }
        printf("\n");
    }
}

void makeUpStairs(int number)
{
    long i,j = 0;
    for (j = 1; j <= number; j++)
    { // (ex)number=5, j=1,2,3,4,5
        for (i = 1; i <= j; i++)
        { // (ex)i=1,2,3,4,5
            printf("*");
        }
        printf("\n");
    }
}

void makeSharpStairs(int number)
{
    long i,j = 0;
    
    for(j = number; 0 < j; j = j/2)
    { // (ex)counter=8,j=8,4,2,1
        for (int k = 0; k < (number - j) / 2; k++)
        { // (ex)j=0 k=0, j=4 k=2,
            printf(" ");
        }
        
        for(i = 0; i < j; i++)
        { // (ex)j=8,i = 8,4,2,1
            printf("*");
        }
        printf("\n");
    }
}
