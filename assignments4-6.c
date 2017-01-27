//
//  main.c
//  assignments4-6
//
//  Created by saeko fukui on 2017-01-26.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>
void swap(int* num1, int* num2);

int main(int argc, const char * argv[]) {
    int num1 = 10;
    int num2 = 20;
    swap(&num1, &num2);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);
    return 0;
}

void swap(int* num1, int* num2)
{
    
    *num1 = 20;
    *num2 = 10;
}
