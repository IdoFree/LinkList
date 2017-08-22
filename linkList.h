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
int add(pNode head, void * data);

pNode get(pNode head, int index);

void destroy(pNode head);


#endif /* linkList_h */
