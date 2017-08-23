//
//  linkList.h
//  linkedList
//
//  Created by idohuang on 2017/8/18.
//
//

#ifndef linkList_h
#define linkList_h

typedef struct Node_ {
    struct Node_ *  next;
    void* e;
}Node ,*pNode;




pNode init(void );
int push(pNode head, void * data);

pNode get(pNode head, int index);

void destroy(pNode head);

pNode remove_node(pNode head , int index);

int get_list_size(pNode head);






#endif /* linkList_h */
