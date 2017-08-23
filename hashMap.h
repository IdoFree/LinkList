//
//  hashMap.h
//  linkedList
//
//  Created by idohuang on 2017/8/22.
//
//

#ifndef hashMap_h
#define hashMap_h
#include "linkList.h"

#include <stdio.h>

#define DEFAULT_TABLE_SIZE 10

typedef struct Pair_{
    char* key;
    void* val;
    
}Pair, *pPair;

typedef  pNode* Map;

pNode* init_hash_map(int size);

int hash_map_put(pNode* map , char* key, void* val);
void* hash_map_get(pNode* map , char* key);


int hash(char * key);

int get_map_size(pNode* map );

void destroy_map(pNode* map);

static char* get_key(pNode node);
static void* get_val_ptr(pNode node);

#endif /* hashMap_h */
