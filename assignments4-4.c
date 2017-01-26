//
//  main.c
//  problem4-4
//
//  Created by saeko fukui on 2017-01-26.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numbers[] = {1, 2, 3, 4, 5};
    int* pointer = &numbers[0]; //numbers = &numbers[0]
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",*pointer);
        pointer ++;
    }
    return 0;
}
