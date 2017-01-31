//
//  main.c
//  assignments5-2
//
//  Created by saekof on 2017-01-30.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
struct point
{
    int x;
    int y;
};
int distance(int pointX, int pointY);
void printPoint(struct point point1);
void average(struct point* poinrArr1, struct point* pointArr2);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

int distance(int pointX, int pointY)
{
    //return (x2 + y2)1/2; // nanikore?
    return 6;
}
void printPoint(struct point point1)
{
    printf("%d",point1.x);
    printf("%d",point1.y);

}
void average(struct point* poinrArr1, struct point* pointArr2)
{
}
