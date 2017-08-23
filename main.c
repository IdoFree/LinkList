//
//  main.c
//  linkedList
//
//  Created by idohuang on 2017/8/18.
//
//

#include <stdio.h>
#include "linkList.h"
#include "hashMap.h"
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    pNode head = init();
//    int one = 10;
//    int two  = 20;
//    int three  = 30;
//    push(head, &one);
//    //printf("the second pointer is %p",&two);
//    push(head, &two);
//    push(head, &three);
//    
//    printf("the list size is %d\n", get_list_size(head));
//    
//    pNode removed_node = remove_node(head, 2);
//    
//    printf("the removed node value is %d\n", *(int *)removed_node->e);
//    
//    
//    printf("after remove a node , the list size is %d\n", get_list_size(head));
    
    //printf("the second element is %d", (*(int*)(pNode)get(head, 1)->e));
    
    //int **p = malloc(sizeof(int* ) * 10);
    
    
    
    
    
    //printf("hash value of 'hello' is %d\n", hash("hello") );
    
    //pNode* map = init_hash_map(20);
    
    //printf("the size of the map %d\n", get_map_size(map) );
    
    Map map = init_hash_map(5);
    
    hash_map_put(map, "hello", "world");
    
    printf("the value of hello is %s\n", hash_map_get(map, "hello"));
    
    hash_map_put(map, "hello", "c language");
    
    printf("the value of hello is %s\n", hash_map_get(map, "hello"));
    
    return 0;
}
