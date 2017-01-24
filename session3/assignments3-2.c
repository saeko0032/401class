//
//  main.c
//  problem1
//
//  Created by saekof on 2017-01-23.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printArrayAsec(int arrays[]);
void printArrayDsec(int arrays[]);

int main(int argc, const char * argv[]) {
    int arrays[5];
    for(int i = 0; i < 5; i++)
    {
        printf("please enter your favorite number\n");
        scanf("%d",&arrays[i]);
    }
    printArrayAsec(arrays);
    printArrayDsec(arrays);
}

void printArrayAsec(int arrays[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arrays[i]);
    }
}

void printArrayDsec(int arrays[])
{
    for (int i = 4; 0 <= i; i--)
    {
        printf("%d\n",arrays[i]);
    }
}
