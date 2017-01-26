//
//  main.c
//  assignments4-1
//
//  Created by saekof on 2017-01-25.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int intNumber = 6;
    char charWord = 's';
    long longNumber = 20;
    float floatNumber = 3.2;
    
    int* intNumberAdr = &intNumber;
    char* charWordAdr = &charWord;
    long* longNumberAdr = &longNumber;
    float* floadNumberAdr = &floatNumber;
    
    printf("int Number Value is %d , address is %p\n",intNumber, intNumberAdr);
    printf("charWord Value is %c , address is %p\n",charWord, charWordAdr);
    printf("long Number Value is %ld , address is %p\n",longNumber, longNumberAdr);
    printf("float Number Value is %1.2f , address is %p\n",floatNumber, floadNumberAdr);
    printf("\n\n");
    
    intNumber = *(&intNumber) + 10;
    *(&charWord) = 't';
    *(&longNumber) = 20000;
    *(&floatNumber) = 5.6;
    
    printf("new int Number Value is %d , address is %p\n", intNumber, intNumberAdr);
    printf("new charWord Value is %c , address is %p\n", charWord, charWordAdr);
    printf("new long Number Value is %ld , address is %p\n",longNumber, longNumberAdr);
    printf("new float Number Value is %1.2f , address is %p\n",floatNumber, floadNumberAdr);
    printf("\n\n");
    
    return 0;
}
