//
//  main.c
//  assignments2-6
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

void swapNumbers(int number1, int number2)
{
    int tempNumber = number1;
    number1 = number2;
    number2 = tempNumber;
}
