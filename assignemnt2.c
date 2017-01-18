//
//  main.c
//  assignment2
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
    long counter = getRandInterval(0, 100);
    
    // odd then + 1
    if ( counter % 2 == 1)
    {
        counter++;
    }
    // even then + 2
    else
    {
        counter += 2;
    }
    // save number for problem2 - 2
    long counter1 = counter;
    
    // problem 2 - 1
    for (int i = 0; i < 10; i++)
    {
        printf("%ld\n",counter);
        counter += 2;
    }
    
    //problem 2 - 2
    for (; counter1 < 200; counter1 += 2)
    {
        printf("%ld\n",counter1);
        
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

