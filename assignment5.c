//
//  main.c
//  assignment5
//
//  Created by saekof on 2017-01-17.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

unsigned getRandInterval(unsigned begin, unsigned end);

int main(int argc, const char * argv[]) {
    srand((unsigned)(time(NULL)));
    long counter = getRandInterval(8, 14);
    if ( counter %2 == 1) counter++; // counter number must be even
    
    long i,j = 0;
    
    for(j=counter; 0 < j; j = j/2)
    { // (ex)counter=8,j=8,4,2,1
        for (int k = 0; k < (counter - j) / 2; k++)
        { // (ex)j=0 k=0, j=4 k=2, 
            printf(" ");
        }
        
        for(i = 0; i < j; i++)
        { // (ex)j=8,i = 8,4,2,1
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
unsigned getRandInterval(unsigned begin, unsigned end)
{
    unsigned range = (end - begin) + 1;
    //printf("%d",RAND_MAX);
    unsigned limit = ((unsigned)RAND_MAX + 1) -(((unsigned)RAND_MAX + 1) % range);
    //printf("%d",limit);
    unsigned randVal = rand();
    while(randVal >= limit) randVal = rand();
    return(randVal % range) + begin;
}
