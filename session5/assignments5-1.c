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
    struct date* time;
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
    char *CPUType = mpu641->memory;
    mpu641->name = 10;
    // time
    struct time* times = (struct time*) malloc(sizeof(struct time));
    times->time = (struct date*) malloc(sizeof(struct date));
    times->time->day = 10;
    struct time* sample = (struct time*) malloc(sizeof(struct time));
    for(int i = 1; i < 13; i++)
    {
        sample[i].time = (struct date*)malloc(sizeof(struct date));
        sample[i].time->month = i;
        printf("%d\n",sample[i].time->month);
    }
    times->time->year = 2017;
    printf("day value : %d address: %p\n",dates->day, &dates->day);
    printf("memory value : %s address: %p\n",mpu641->memory, &mpu641->memory);
    printf("mpu641 value : %d address: %p\n",mpu641->name, &mpu641->name);
    printf("year value : %d address: %p\n",times->time->year, &times->time->year);
    // change the value
    int a = 20;
    int* b = &a;
    dates->day = *b;
    char aaa = 't';
    mpu641->memory = &aaa;
    int c = 2;
    int* d = &c;
    mpu641->name = *d;
    int e = 2018;
    int* f = &e;
    times->time->year = *f;
    printf("day value : %d address: %p\n",dates->day, &dates->day);
    printf("memory value : %s address: %p\n",mpu641->memory, &mpu641->memory);
    printf("mpu641 value : %d address: %p\n",mpu641->name, &mpu641->name);
    printf("year value : %d address: %p\n",times->time->year, &times->time->year);
    return 0;
}
