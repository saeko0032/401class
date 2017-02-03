//
//  main.c
//  assignments6-4
//
//  Created by saekof on 2017-02-01.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZEY 5
#define SIZEX 256

int main(int argc, const char * argv[]) {
    // problem4-1
    char str [5][256];
    
    for(int i = 0; i<5; i++)
    {
        printf("enter some words\n");
        scanf("%[^\n]",&str[i][0]);
    }
 
    // problem 4-2
    // int  a[10];
    char (*arr)[SIZEX];   // arrはchar[SIZEX]へのポインター
    int    y;
    
    // y*x分を確保、char[SIZEX]へのポインターなので、
    // SIZEY * char[SIZEX]分確保
    arr = malloc(sizeof(char) * SIZEY * SIZEX);
    
    for (y = 0; y < SIZEY; y++)
    {
        printf("enter some words\n");
        fgets(arr[y], SIZEX, stdin);
        printf("%s", arr[y]);
    }
    
    free(arr);
    
    return 0;
}
