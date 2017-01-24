//
//  main.c
//  assignments
//
//  Created by saekof on 2017-01-16.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // problem1 - 1
    int num1 = 50;
    int num2 = 52;
    int num3 = 54;
    int num4 = 56;
    int num5 = 58;
    int num6 = 60;
    int num7 = 62;
    int num8 = 64;
    int num9 = 66;
    int num10 = 68;
    printf("***** problem1 - 1 *****\n");
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",num1,num2,num3,num4,num5,num6,num7,num8,num9,num10);

    //problem 1 - 2
    printf("***** problem1 - 2 *****\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",num1);
        num1 += 2;
    }
    printf("***** problem1 - 3 *****\n");
    
    // problem 1 - 3
    // Print all even numbers which are bigger than the index
    for (int j = 0; num2 < 200; num += 2)
    {
         printf("%d\n",num2);
    }
    
    // problem 1 - 4
    // Print all even numbers which are less than the index
    for (int k = 0; num3 > 200; num3 -= 2)
    {
         printf("%d\n",num3);
    }
    return 0;
}
