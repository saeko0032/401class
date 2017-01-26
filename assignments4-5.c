//
//  main.c
//  problem4-4
//
//  Created by saeko fukui on 2017-01-26.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>

char* name = "saeko fukui";
char charAtPosition(int position);

int main(int argc, const char * argv[]) {

    
    // 1
    for(int i = 0; i < 11; i++)
    {
        printf("%c\n",name[i]);
    }
    // 2
    char temp = charAtPosition(3);
    printf("your name[index] is %c\n",temp);
    
    //3
    for(int i = 0; i < 11; i++)
    {
        printf("your name[%d] is %c\n", i, charAtPosition(i));
    }
    return 0;
}

char charAtPosition(int position)
{
    return name[position];
}
