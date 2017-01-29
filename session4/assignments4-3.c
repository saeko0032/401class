//
//  main.c
//  assignments4-3
//
//  Created by saekof on 2017-01-25.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word[] = "World";
    printf("The beginning address of the array is at address %p\n",word);
    printf("W is at address %p\n",&(word[0])); // 0x7fff5fbff75a ibyte continuous 
    printf("O is at address %p\n",&(word[1])); // 0x7fff5fbff75b
    printf("R is at address %p\n",&(word[2])); // 0x7fff5fbff75c
    printf("L is at address %p\n",&(word[3])); // 0x7fff5fbff75d
    printf("D is at address %p\n",&(word[4])); // 0x7fff5fbff75e
    
    printf("\n");
    
    int numbers[] = {10, 20, 30, 40};
    printf("The beginning address of the array is at address %p\n",numbers);
    printf("10is at address %p\n",&(numbers[0])); // 0x7fff5fbff770 // int takes 4 bytes
    printf("20is at address %p\n",&(numbers[1])); // 0x7fff5fbff774
    printf("30is at address %p\n",&(numbers[2])); // 0x7fff5fbff778
    printf("40is at address %p\n",&(numbers[3])); // 0x7fff5fbff77c
    return 0;
}
