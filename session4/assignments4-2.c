//
//  main.c
//  assignments4-2
//
//  Created by saekof on 2017-01-25.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word1[] = "Hello";
    char* word2 = "World";
    printf("word 1 is %s\n", word1); // Hello
    printf("word 2 is %s\n", word2); // World
    
    word2 = "I am not world";
    printf("word 1 is %s\n", word1); // Hello
    printf("word 2 is %s\n", word2); // I am not world
    
    word2 = word1;
    printf("word 1 is %s\n", word1); // Hello
    printf("word 2 is %s\n", word2); // Hello
    
    word1 = word2;
    printf("word 1 is %s\n", word1);
    printf("word 2 is %s\n", word2);
    
    // <1>
    // <2>
    // <3>
    // <4> ERROR
}
