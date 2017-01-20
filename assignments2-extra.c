//
//  main.c
//  assignments2-extra
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include "string.h"

void printFancyCode(char* name[], int number);
void printFancyCode2(char* name[], int number);
int main(int argc, const char * argv[]) {
    
    char name[] = "saeko";
    int nameLength = strlen(name);
    printFancyCode(name, nameLength);
    return 0;
}
void printFancyCode(char* name[], int number)
{
    printf("***********\n");
    printf("**Hello****\n");
    // insert
    printf("**Welcome**\n");
    printf("**To*******\n");
    printf("**CICCC****\n");
    printf("***********\n");
}

void printFancyCode2(char* name[], int number)
{
    printf("***********\n");
    printf("* Hello  \n");
    // insert
    printf("* Welcome *\n");
    printf("* To     \n");
    printf("* CICCC  \n");
    printf("***********\n");
}
