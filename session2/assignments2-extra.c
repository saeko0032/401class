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
void printFancyCode3(char* name, unsigned long number);

int main(int argc, const char * argv[]) {
    
    char name[6] = "Saeko";
    
    unsigned long nameLength;
    nameLength = strlen(name);
    printFancyCode(name, nameLength);
    printFancyCode2(name, nameLength);
    printFancyCode3(name, nameLength);
    return 0;
}
void printFancyCode(char *name, unsigned long number)
{
    int maxLength = 11;
    char *messages[5] =
    {
        "Hello",name,"Welcome","To","CICCC"
    };
    
    printf("***********\n");
    for (int i = 0; i < 5; i ++)
    {
        printf("**");
        printf("%s",messages[i]);
        unsigned long length = strlen(messages[i]);
        
        for(int j = 2; j <maxLength-length; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("***********\n");
    printf("\n\n\n");
}

void printFancyCode2(char *name, unsigned long number)
{
    int maxLength = 11;
    char *messages[5] =
    {
        "Hello",name,"Welcome","To","CICCC"
    };
    
    printf("***********\n");
    for (int i = 0; i < 5; i ++)
    {
        printf("* ");
        printf("%s",messages[i]);
        unsigned long length = strlen(messages[i]);
        for(int j = 2; j <maxLength-length-1; j++)
        {
            printf(" ");
        }
        printf(" *");

        printf("\n");
    }
    printf("***********\n");
    printf("\n\n\n");
}

void printFancyCode3(char *name, unsigned long number)
{
    int maxLength = 11;
    char *messages[5] =
    {
        "Hello",name,"Welcome","To","CICCC"
    };
    
    printf("***********\n");
    for (int i = 0; i < 5; i ++)
    {
        printf("* ");
        printf("%s",messages[i]);
        printf(" *");
        printf("\n");
    }
    printf("***********\n");
    printf("\n\n\n");
}
