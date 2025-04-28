// map.c
#include <stdio.h>
#include <stdlib.h>
#include "map.h"

void map_init(map* m) {
    m->array = (value**)calloc(SIZE, sizeof(value*));
}

void map_insert(map* m, int key, int val) {
    int idx = key % SIZE;
    value* node = (value*)malloc(sizeof(value));
    node->val = val;
    node->key = key;
    node->next = NULL;

    if (m->array[idx] == NULL) {
        m->array[idx] = node;
        return;
    }

    value* tmp = m->array[idx];
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = node;
}

void map_get(map* m, int key) {
    int idx = key % SIZE;
    value* tmp = m->array[idx];
    if (tmp == NULL) {
        printf("Key %d does not exist\n", key);
        return;
    }

    while (tmp != NULL) {
        if (tmp->key == key) {
            printf("\nValue at %d is %d\n", key, tmp->val);
            return;
        }
        tmp = tmp->next;
    }

    printf("Key %d not found\n", key);
}

void map_free(map* m) {
    for (int i = 0; i < SIZE; ++i) {
        value* tmp = m->array[i];
        while (tmp != NULL) {
            value* to_free = tmp;
            tmp = tmp->next;
            free(to_free);
        }
    }
    free(m->array);
}

void map_delete(map* m, int key) {
    int idx = key % SIZE;
    value* tmp = m->array[idx];
    value* prev = NULL;

    while (tmp != NULL) {
        if (tmp->key == key) {
            if (prev == NULL) {
                m->array[idx] = tmp->next;
            } else {
                prev->next = tmp->next;
            }
            free(tmp);
            printf("Key %d deleted successfully\n", key);
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    printf("Key %d not found\n", key);
}


void map_print(map* m) {
    if (m == NULL) {
        printf("Map is empty\n");
        return;
    }
    for (int i = 0; i < SIZE; ++i) {
        value* tmp = m->array[i];
        if (tmp == NULL) {
            continue;
        }
        printf("\nIndex %d:\n", i);
        while (tmp != NULL) {
            printf("\tKey: %d, Value: %d\n", tmp->key, tmp->val);
            tmp = tmp->next;
        }
    }
}

int map_length(map *m){
  int count = 0;
  for (int i = 0; i < SIZE; ++i) {
    value* tmp = m->array[i];
    while (tmp != NULL) {
      tmp = tmp->next;
      count++;
    }
  }
  return count;
}

void map_update(map* m, int key, int val) {
    int idx = key % SIZE;
    value* tmp = m->array[idx];
    while (tmp != NULL) {
        if (tmp->key == key) {
            tmp->val = val;
            return;
        }
        tmp = tmp->next;
    }
    printf("Key %d not found\n", key);
}
