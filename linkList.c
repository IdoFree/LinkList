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
int push(pNode head, void * data){
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


pNode remove_node(pNode head,int index){
    if(head == NULL) return NULL;
    
    //head = head->next;
    for(int i = 0; i < index; i++){
        head = head->next;
    }
    pNode to_be_removed = head->next;
    
    head->next = to_be_removed->next;
    free(to_be_removed);
    
    return to_be_removed;
}

int get_list_size(pNode head){
    int size = 0;
    while(head->next!=NULL){
        head = head->next;
        size++ ;
    }
    
    return  size;
}


pNode get(pNode head,  int index){
     head = head->next;
    for(int i = 0; i < index; i++){
        head = head->next;
    }
    
    return head;
}

void destroy(pNode head){
    if(head == NULL) return ;
    while(head->next !=NULL){
        pNode next = head->next;
        
        free(head->e);
        free(head);
        head = next;
    }
}


