//
//  main.c
//  problem3-5
//
//  Created by saeko fukui on 2017-01-24.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>

void countOddAndEven(int originArrays[]);

int main(int argc, const char * argv[]) {
    int orgArrays[5] = {32, 58, 3, 7, 4};
    
    countOddAndEven(orgArrays);
    return 0;
}
void countOddAndEven(int originArrays[])
{
    int oddCounter = 0;
    for(int i = 0; i < 5; i++)
    {
        if (originArrays[i] % 2 == 1) oddCounter++;
    }
    printf("you have %d odd numbers and %d even numbers\n",oddCounter, 5 - oddCounter);

}
