//
//  main.c
//  assignments2-3
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
int returnMediantNumber(int number1, int number2);

int main(int argc, const char * argv[]) {
    int mediant = returnMediantNumber(25, 10);
    printf("mediant is %d\n",mediant);
    return 0;
}

int returnMediantNumber(int number1, int number2)
{
    int tempNumber1 = number1;
    int tempNumber2 = number2;
    
    if (number1 > number2)
    {
        number2 += 1;
        for (; number1 - number2 > 0; number2++)
        {
            printf("%d\n",number2);
        }
    }
    else
    {
        number1 += 1;
        for (; number2 - number1 > 0; number1++)
        {
            printf("%d\n",number1);
        }
    }
    return (tempNumber1 + tempNumber2) / 2;
}
