//
//  main.c
//  linkedList
//
//  Created by idohuang on 2017/8/18.
//
//

#include <stdio.h>
#include "linkList.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    pNode head = init();
    int one = 10;
    int two  = 20;
    add(head, &one);
    printf("the second pointer is %p",&two);
    add(head, &two);
    
    printf("the second element is %d", (*(int*)(pNode)get(head, 2)->e));
    
    printf("Hello, World!\n");
    return 0;
}
