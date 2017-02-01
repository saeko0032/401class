
//
//  main.c
//  assignments6-1
//
//  Created by saekof on 2017-01-31.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void increase(int data[], int counter);

int main(int argc, const char * argv[]) {
    int flg = 1;
    int counter = 0;
    int *point = malloc(1 * sizeof(int));
    while (flg) {
        printf("enter the number you want(except 0)\n");
        
        scanf("%d",&point[counter]);

        if (0 >= &point[counter]) {
            flg = 0;
            // printf("oko");
        }
        else
        {
            counter++;
            increase(point, counter);
        }
    }

}

void increase(int data[], int counter)
{
    data = realloc(data, (counter + 1) * sizeof *data);
}
