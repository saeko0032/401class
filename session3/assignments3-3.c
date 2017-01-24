//
//  main.c
//  problem3-3
//
//  Created by saeko fukui on 2017-01-24.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>
int* makeNewArray(int originArrays[5]);
int newArrays[5]; // or staticにして関数内に 

int main(int argc, const char * argv[]) {
    int orgArrays[5] = {32, 58, 3, 7, 4};
    int *temp = makeNewArray(orgArrays);
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",temp[i]);
    }
    return 0;
}
 // address
int* makeNewArray(int originArrays[5])
{
    
    
    for(int i=0;i<5;i++)
    {
        newArrays[i] = originArrays[i];
    }
    return newArrays;
}
