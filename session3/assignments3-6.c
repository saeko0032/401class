//
//  main.c
//  problem3-6
//
//  Created by saeko fukui on 2017-01-24.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>

int findIndexNumber(int originArrays[5], int number);

int main(int argc, const char * argv[]) {
    int orgArrays[5] = {32, 58, 3, 7, 4};
    
    int result = findIndexNumber(orgArrays, 3);
    if (result != -1)
    {
        printf("index is %d\n",result);
    }
    else
    {
        printf("the number is founded.");
    }
        return 0;
}

int findIndexNumber(int originArrays[5], int number)
{
    int result = -1;
    for(int i = 0; i < 5; i++)
    {
        if (originArrays[i] == number)
        {
            result = i; break;
        }
    }
    return result;
}
