//
//  linkLIst.c
//  linkedList
//
//  Created by idohuang on 2017/8/18.
//
//
#include "linkList.h"
#include <stdio.h>
#include <stdlib.h>

pNode init(void ){
    pNode head  = malloc(sizeof(pNode));
    if(head == NULL) return  NULL;
    head->e = NULL;
    head->next = NULL;
    return head;
}
int add(pNode head, void * data){
    pNode new_node = malloc(sizeof(pNode));
    pNode preNext = head->next;
    
    if(new_node == NULL){
        printf("no memory available \n");
        return -1;
    }
    
    new_node->next = preNext;
    new_node->e = data;
    
    head->next = new_node;
    
    return 0;
}

pNode get(pNode head,  int index){
//pNode current = head->next;
    for(int i = 0; i < index; i++){
        head = head->next;
    }
    
    return head;
}


