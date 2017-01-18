//
//  main.c
//  assignment4
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
    long counter = getRandInterval(0, 10);
    
    long i,j = 0;
    for (j = 1; j <= counter; j++)
    { // (ex)counter=5, j=1,2,3,4,5
        for (i = 1; i <= j; i++)
        { // (ex)i=1,2,3,4,5
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

