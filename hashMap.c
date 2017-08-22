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

pNode* init_hash_map(int size){
    if(size == 0){
        size = DEFAULT_TABLE_SIZE;
    }
    
    pNode* hash_table = malloc(sizeof(pNode)* size+1);
    if(hash_table == NULL){
        printf("no memory available !");
        return NULL;
    }
    
    
    (*hash_table) = malloc(sizeof(pNode));
    
    int* pInt = malloc(sizeof(int));
    *pInt = size;
    
    (*hash_table) = (void *)pInt;
    
    
    return hash_table;
}

int get_map_size(pNode* map ){
    return *((int *)(*map));
}

int hash_map_put(pNode* map ,char* key, void* val){
    //int hash_val = hash(key);
    //(*map)->
    
    //int table_index = hash_val ;
    
    
    
    
    return 0;
}
void* hash_map_get(pNode* map ,char* key){
    return NULL;
}

int hash(char * key){
    unsigned long  len = strlen(key);
    int hash_val = 0;
    for(int i = 0; i< len; ++i){
        hash_val += *(key+i);
    }
    
    return  hash_val;
}


