//
//  main.c
//  problem3-4
//
//  Created by saeko fukui on 2017-01-24.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>
#include <float.h>
float checkMinAndMax(float originArrays[5]);

int main(int argc, const char * argv[]) {
    float orgArrays[5] = {3.2, 5.8, 0.3, 7.0, 0.4};
    float difference = checkMinAndMax(orgArrays);
    printf("the differece is : %2.1f\n",difference);
    return 0;
}
 // address
float checkMinAndMax(float originArrays[])
{
    float minNumber = originArrays[0];
    float maxNumber = originArrays[0];
    for(int i = 0; i < 5; i++)
    {
        // for float compare, we need FLT_EXPSILON
        if((originArrays[i] - originArrays[i+1]) < FLT_EPSILON)
        {
            maxNumber = originArrays[i+1];
            minNumber = originArrays[i];
        }
    }
    float difference = maxNumber - minNumber;
    return difference;
}
