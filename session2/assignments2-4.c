//
//  main.c
//  assignments2-4
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int caliculator(int number1, int number2, char operation);
int main(int argc, const char * argv[]) {
    printf("number1 + number2 is %d\n",caliculator(10, 5, '+'));
    printf("number1 - number2 is %d\n",caliculator(10, 5, '-'));
    printf("number1 * number2 is %d\n",caliculator(10, 5, '*'));
    printf("number1 %% number2 is %d\n",caliculator(10, 3, '%'));
    printf("number1 / number2 is %d\n",caliculator(10, 5, '/'));
    
    return 0;
}

int caliculator(int number1, int number2, char operation)
{
    // switch de kakitai
    int result;
    if(operation == '+')
    {
        return number1 + number2;
    }
    else if (operation == '-')
    {
        result = number1 - number2;
    }
    else if (operation == '*')
    {
        result = number1 * number2;
    }
    else if (operation == '%')
    {
        result = number1 % number2;
    }
    else if (operation == '/')
    {
        result = number1 / number2;
    }
    return result;
}
