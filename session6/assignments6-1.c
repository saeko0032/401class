//
//  main.c
//  assignments5-1
//
//  Created by saekof on 2017-01-30.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct date{
    int day;
    int month;
    int year;
};

int main(int argc, const char * argv[]) {
    struct date *dates;
    int num;
    dates = (struct date*) malloc(num * sizeof(struct date));
    dates->day = 10;
    printf("date : %d\n",dates->day);
    return 0;
}
