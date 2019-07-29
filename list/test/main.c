#include "stdio.h"
#include "stdlib.h"
#include "list.h"


typedef struct {
    struct list_head to_list;
    int key;
} Node;


int main(void) {
    Node nodes[100];
    struct list_head head;
    INIT_LIST_HEAD(&head);
    
    int i = 0;
    for (i = 0; i < 100; ++i) {
        nodes[i].key = i;
        list_add(&nodes[i].to_list, &head);
    }

    Node *pos = NULL;
    list_for_each_entry(pos, &head, to_list) {
        printf("pos.key:%d\n", pos->key);
    }

    return 0;
}