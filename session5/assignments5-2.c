
//
//  main.c
//  assignments5-2
//
//  Created by saekof on 2017-01-30.
//  Copyright © 2017 CICCC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
double distance(struct point point1, struct point point2);
void printPoint(struct point point1);
double average(struct point points[], char cord);
struct point vectorAverage(struct point points[]);

int main(int argc, const char * argv[]) {
    struct point p1 = {5,6}; // we need to initialize
    struct point p2 = {10,12};// we need to initialize
    
    double doubleDistance = distance(p1,p2);
    
    printf("distance is %f\n",doubleDistance);
    struct point p3 = {3,4};
    printPoint(p3);
    
    struct point points[5] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    double ave = average(points, 'x');
    printf("average is %f\n",ave);
    
    struct point point3 = vectorAverage(points);
    printPoint(point3);
    
    return 0;
}

double distance(struct point p1, struct point p2)
{
    double result;
    result = ((p1.x -p2.x) * (p1.x -p2.x) + (p1.y -p2.y) * (p1.y - p2.y));
    double dirt = sqrt(result);
    
    return dirt;
}

void printPoint(struct point p)
{
    printf("the pointis at coordinate [%d,%d] ,where x and y are the %d and %d coordination of the input point.\n", p.x,p.y,p.x,p.y);
    
}
double average(struct point points[], char cord)
{
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < 5; i++)
    {
        if(cord == 'x')
        {
            sum = sum + points[i].x;
            counter++;
        }
        else
        {
            sum = sum + points[i].y;
            counter++;
        }
    }
    double average = sum/counter;
    return average;
}

struct point vectorAverage(struct point points[])
{
    double ansX = average(points,'x');
    double ansY = average(points,'y');
    
    struct point avePoint = {ansX,ansY};
    return avePoint;
    
}
