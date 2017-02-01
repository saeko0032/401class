//
//  main.c
//  assignments5-3
//
//  Created by saeko fukui on 2017-01-31.
//  Copyright © 2017 Saeko Fukui. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct item
{
    int age;
    struct item* next; /* nexr item pointer */
};
struct item getItem(void);
int main(int argc, const char * argv[]) {
    getItem();
    return 0;
}

struct item getItem(void)
{
    struct item item1[20];
    
    for(int i = 0; i< 10; i++)
    {
        printf("what is your prefer number?");
        scanf("%d",&item1[i].age);
//        item1[i].next = NULL;
//        if(itemList[i] == NULL)
//        {
//            itemList[i] = (struct item*)  malloc(sizeof(struct item));
//        }
        item1[i].next =(struct item*)  malloc(sizeof(struct item));
    }
    for(int j=0;j<10;j++)
    {
        item1[j].next = item1[j+1].next;
        printf("%d",item1[j].age);
    }
    
    return item1[0];
}
