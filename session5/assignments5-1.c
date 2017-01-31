//
//  main.c
//  assignments5-1
//
//  Created by saekof on 2017-01-30.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

struct machine
{
    int name;
    char* memory;
};

struct time {
    int *day;
    int *month;
    int *year;
};
int main(int argc, const char * argv[]) {
    // date
    struct date *dates;
    dates = (struct date*) malloc(sizeof(struct date));
    dates->day = 10;
    printf("date : %d\n",dates->day);
    
    // machine
    struct machine* mpu641;
    mpu641 = (struct machine*) malloc(sizeof(struct machine));
    mpu641->memory = "CPUType";
    mpu641->name = 10;
    
    // time
    struct time* times;
    times = (struct time*) malloc(sizeof(struct time));
    int temp = 10;
    times->day = &temp;
    
    // sample
    struct time* sample[10];
    for(int i = 0; i < 10; i++)
    {
        sample[i] = (struct time*) malloc(sizeof(struct time));
    }
    int temp12 = 12;
    sample[2]->month = &temp12;
    
    struct date **datesptr;
    *datesptr = dates;
    
    struct machine **machineptr;
    *machineptr = mpu641;

    printf("day value : %d address: %p\n",(*datesptr)->day, &(*datesptr)->day);
    printf("memory value : %s address: %p\n",(*machineptr)->memory, &(*machineptr)->memory);
    printf("sample value : %d address: %p\n",*sample[2]->month, sample[2]->month);
    
    // change the value
    int a = 20;
    int* b = &a;
    dates->day = *b;
    char aaa[] = "CPUT";
    mpu641->memory = aaa;
    int c = 2;
    int* d = &c;
    mpu641->name = *d;
    printf("day value : %d address: %p\n",(*datesptr)->day, &(*datesptr)->day);
    printf("memory value : %s address: %p\n",(*machineptr)->memory, &(*machineptr)->memory);
   // printf("mpu641 value : %d address: %p\n",mpu641->name, &mpu641->name);
    return 0;
}
