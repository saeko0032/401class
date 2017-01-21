//
//  main.c
//  assignments2-extra
//
//  Created by saekof on 2017-01-19.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void printFancyCode(char* name, unsigned long number);
void printFancyCode2(char* name, unsigned long number);

int main(int argc, const char * argv[]) {
    
    char name[5] = "Saeko";
    
    unsigned long nameLength;
    nameLength = strlen(name);
    printFancyCode(name, nameLength);
    printFancyCode2(name, nameLength);
    return 0;
}
void printFancyCode(char *name, unsigned long number)
{

    printf("***********\n");
    printf("**Hello****\n");
    printf("**%c%c%c%c%c**\n",name[0],name[1],name[2],name[3],name[4]);
    printf("**Welcome**\n");
    printf("**To*******\n");
    printf("**CICCC****\n");
    printf("***********\n");
    printf("\n\n\n");
}

void printFancyCode2(char *name, unsigned long number)
{
    printf("***********\n");
    printf("* Hello  *\n");
    printf("* %c%c%c%c%c *\n",name[0],name[1],name[2],name[3],name[4]);
    printf("* Welcome *\n");
    printf("* To     *\n");
    printf("* CICCC  *\n");
    printf("***********\n");
}
