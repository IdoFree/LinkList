//
//  hashMap.c
//  linkedList
//
//  Created by idohuang on 2017/8/22.
//
//

#include "hashMap.h"
#include <stdlib.h>
#include <string.h>
#include <string.h>

pNode* init_hash_map(int size){
    if(size == 0){
        size = DEFAULT_TABLE_SIZE;
    }
    
    //mallloc one more area for storing the size
    pNode* hash_table = calloc(size+1,sizeof(pNode) );
    if(hash_table == NULL){
        printf("no memory available !");
        return NULL;
    }
    
    
    (*hash_table) = calloc(1,sizeof(pNode));
    
    int* pInt = calloc(1,sizeof(int));
    *pInt = size;
    
    (*hash_table) = (void *)pInt;
    
    
    return hash_table;
}

int get_map_size(pNode* map ){
    return *((int *)(*map));
}

int hash_map_put(pNode* map ,char* key, void* val){
    int hash_val = hash(key);
    int index_to_put = hash_val % get_map_size(map);
    
    //move one more step ,cause the first posistion is for the int *
    
    pNode* table_head = (map+1);
    //pNode list_head = *(table_head+index_to_put);
    
    pNode*  original_list_head =(table_head+index_to_put);
    
    if(*(table_head+index_to_put) == NULL){
        //list_head = init();
        *(table_head+index_to_put)= init();
        pNode list_head =*(table_head+index_to_put);
        pPair p = calloc(1, sizeof(Pair));
        p->key = key;
        p->val = val;
        
        push(list_head, p);
        
    }else{
        pNode list_head =*(table_head+index_to_put);
        list_head = list_head->next;
        while (list_head!=NULL) {
            char * stored_key =  get_key(list_head);
            if(strcmp(stored_key, key) == 0){
                //repalce the val
                ((Pair *)(list_head->e))->val = val;
                
                
                return 0;
            }
            
            list_head = list_head->next;
        }
        
        //if no value found , insert to the list
        
        pPair p = calloc(1, sizeof(Pair));
        p->key = key;
        p->val = val;
        
        push(*original_list_head, p);
        
    }
    
    
    return 0;
}

static void* get_val_ptr(pNode node){
    return  ((Pair *)(node->e))->val;

}


static char* get_key(pNode node){
    return  ((Pair *)(node->e))->key;
    
}

void* hash_map_get(pNode* map ,char* key){
    int hash_val = hash(key);
    int index_to_get = hash_val % get_map_size(map);
    pNode* table_head = (map+1);
    pNode list_head = (*(table_head+index_to_get));
    list_head = list_head->next;
    while(list_head!=NULL){
        if(strcmp(key, ((Pair *)(list_head->e))->key) == 0)
            return ((Pair *)(list_head->e))->val;
        else
            list_head = list_head->next;
    }
    
    printf("no such key found %s", key);
    
    
    return NULL;
}


void destroy_map(pNode* map){
    //free the list
    pNode* table_head = (map+1);
    int map_size = get_map_size(map);
    
    for(int i =0; i < map_size; i++){
        destroy(*(table_head+1));
    }
    
    //free the size
    int* pSize = (int *)*map;
    free(pSize);
    
    
    
}


int hash(char * key){
    unsigned long  len = strlen(key);
    int hash_val = 0;
    for(int i = 0; i< len; ++i){
        hash_val += *(key+i);
    }
    
    return  hash_val;
}


