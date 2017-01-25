//
//  main.c
//  problem3-4
//
//  Created by saeko fukui on 2017-01-24.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

unsigned getRandInterval(unsigned begin, unsigned end);
void checkNumbers(int orgArrays[20], long number);

int main(int argc, const char * argv[]) {
    srand((unsigned)(time(NULL)));
    int newArrays[20];
    
    for(int i = 0; i < 20; i++)
    {
        newArrays[i] =getRandInterval(1, 1000);
    }
    long number = getRandInterval(1, 2000);
    checkNumbers(newArrays,number);
    
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

void checkNumbers(int orgArrays[], long number)
{
    int found = -1;
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            int sum = orgArrays[j] + orgArrays[i];
            if (0 < sum && sum < 2000)
            {
                found = 1;
                printf("we know array[%d](%d) + array[%d](%d) is within 2000\n", j, orgArrays[j], i, orgArrays[i]);
            }
        }
    }
    if (found == -1)
    {
        printf("the sum of random numbers have to be under 2000...");
    }
}
