//
//  main.c
//  problem1
//
//  Created by saekof on 2017-01-23.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printArrayNumbers(void);

int main(int argc, const char * argv[]) {
    printArrayNumbers();
}

void printArrayNumbers(void)
{
    int numbers[] = {5, 16, 3, 6, 8};
    for (int i=0; i<5; i++)
    {
        printf("%d\n",arrays[i]);
    }
}

