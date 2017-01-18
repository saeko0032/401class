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
    
   // printf("%ld",counter);
    if ( counter %2 == 1) counter++;
    long i,j = 0;
    
    for(j=counter; j>0; j = j/2)
    {
        // j = 9,4,2,1
        for (int k=0; k < (4 - j / 2); k++)
        {
            printf(" ");
        }
        
        for(i = 0; i < j; i++)
        {
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
