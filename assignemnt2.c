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
    
    // if counter is odd, + 1
    // (ex)53 - > 54
    if ( counter % 2 == 1)
    {
        counter++;
    }
    // if counter is even, + 2
    // (ex)52 - > 54
    else
    {
        counter += 2;
    }
    // save number for problem 2 - 2
    long counter1,counter2 = counter;
    
    // problem 2 - 1
    // Using a for-loop, print the first 10 even number that are bigger than counter
    for (int i = 0; i < 10; i++)
    {
        printf("%ld\n",counter);
        counter += 2;
    }
    
    // problem 2 - 2
    // Print all even numbers which are bigger than the counterand less than 200
    for (; counter1 < 200; counter1 += 2)
    {
        printf("%ld\n",counter1);
    }
    
    // problem 2 - 3
    // Print all even numbers which are less than 200
    for (; counter2 < 200; counter2 -= 2)
    {
        printf("%ld\n",counter2);
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

