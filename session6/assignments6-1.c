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
    char arr[10];
    int *point = malloc(1 * sizeof(int));
    while (flg) {
        printf("enter the number you want(except 0)\n");
        
        fgets(arr, 4, stdin);
        point[counter] = atoi(arr);

        if (0 >= point[counter]) {
            flg = 0;
            int MaxNumber = point[0];
            for(int j = 0; j <counter; j++)
            {
                if(point[j] < point[j+1])
                {
                    MaxNumber = point[j+1];
                }
            }
            printf("maxNumber is %d\n",MaxNumber);
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
