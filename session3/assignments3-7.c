//
//  main.c
//  problem1
//
//  Created by saekof on 2017-01-23.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>

void printArrayNumbers(int arrays[]);
int sumArrayNumbers(int arrays[]);
float averageNumbers(int arrays[]);
int returnBiggestNumber(int arrays[]);
int returnMinNumber(int arrays[]);
char showQuestion();
void replaceArraysNumbers(int arrays[]);

int main(int argc, const char * argv[]) {
    int numbers[5];
    for (int i=0; i<5; i++)
    {
        printf("please enter the number\n");
        scanf("%d",&numbers[i]);
//        printf("%d\n",numbers[i]);
    }
    
//    printArrayNumbers(numbers);
//    int sum = sumArrayNumbers(numbers);
//    printf("sum is :%d", sum);
//    
//    int biggestNumber = returnBiggestNumber(numbers);
//    printf("the biggest number is : %d\n", biggestNumber);
//    
//    int minNumber = returnMinNumber(numbers);
//    printf("the minimum number is : %d\n", minNumber);
    
    char command = showQuestion();
    if(command == 'p')
    {
        printArrayNumbers(numbers);
    }
    else if (command == 'c')
    {
        int sum = sumArrayNumbers(numbers);
        printf("sum is :%d", sum);
    }
    else if (command == 'v')
    {
        float average = averageNumbers(numbers);
        printf("the minimum number is : %f\n", average);
    }
    else if (command == 'm')
    {
        int minNumber = returnMinNumber(numbers);
        printf("the minimum number is : %d\n", minNumber);
    }
    else if (command == 'x')
    {
        int biggestNumber = returnBiggestNumber(numbers);
        printf("the biggest number is : %d\n", biggestNumber);
    }
    else if (command == 'q')
    {
        printf("////////EXIT//////////\n");
    }
    else if (command == 'n')
    {
        replaceArraysNumbers(numbers);
    }
    else {
        showQuestion();
    }
    
}

void replaceArraysNumbers(int arrays[])
{
    for (int i=0; i<5; i++)
    {
        printf("please enter the number\n");
        scanf("%d",&arrays[i]);
    }
}

void printArrayNumbers(int arrays[])
{
    for (int i=0; i<5; i++)
    {
        printf("%d\n",arrays[i]);
    }
}

int sumArrayNumbers(int arrays[])
{
    int result = 0;
    for (int i=0; i<5; i++)
    {
        result = arrays[i] + result;
    }
    return result;
}

float averageNumbers(int arrays[])
{
    float result = 0;

    result = sumArrayNumbers(arrays)/5;
    return result;
}

int returnBiggestNumber(int arrays[])
{
    int biggestNumber = arrays[0];
    for (int i=0; i<5; i++)
    {
        if(arrays[i] > biggestNumber) biggestNumber = arrays[i];
    }
    return biggestNumber;
}

int returnMinNumber(int arrays[])
{
    int minNumber = arrays[0];
    for (int i=0; i<5; i++)
    {
        if(arrays[i] <= minNumber) minNumber = arrays[i];
    }
    return minNumber;
}

char showQuestion()
{
    printf("///////////////////////////////////////////////////////////////\n");
    printf("//                                                           //\n");
    printf("//   > What do you want to do?                               //\n");
    printf("//                                                           //\n");
    printf("//   [p] ... Printing the array                              //\n");
    printf("//   [c] ... Printing the sum of all numbers in the array    //\n");
    printf("//   [v] ... Printing the average of the numbers in the array//\n");
    printf("//   [m] ... Printing the minimum number in the array        //\n");
    printf("//   [x] ... Printing the maximum number in the array        //\n");
    printf("//   [q] ... Exit and terminate                              //\n");
    printf("//   [n] ... Enter a new array(with the same length)         //\n");
    printf("//                                                           //\n");
    printf("///////////////////////////////////////////////////////////////\n");
    
    char input;
    scanf(" %c",&input);
    
    return input;
}
