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
struct item* ptrStruct(void);

int main(int argc, const char * argv[]) {
    struct item* tempItem = ptrStruct();
   // int age = tempItem->next->age;
    
//    for(int i = 0; i< 10; i++)
//    {
//        printf("age : %d",tempItem->age);
//    }
    return 0;
}

struct item* ptrStruct(void)
{
    struct item *tempItem =(struct item*)  malloc(sizeof(struct item));
    
    struct item item1[20];
    
    item1[0] = *tempItem;
    
    for(int i = 0; i< 10; i++)
    {
        printf("what is your prefer number?");
        scanf("%d",&item1[i].age);
        item1[i].next =(struct item*)  malloc(sizeof(struct item));
        printf("%p",item1[i].next);
    }

    for(int j=0;j<10;j++)
    {
        item1[j].next = item1[j+1].next;
        printf("%d\n",item1[j].age);
    }
    return item1;
}
