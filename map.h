// map.h
#ifndef MAP_H
#define MAP_H

#define SIZE 100

typedef struct value {
    int key;
    int val;
    struct value* next;
} value;

typedef struct {
    value** array;
} map;

// Function declarations
void map_init(map* m);
void map_insert(map* m, int key, int val);
void map_get(map* m, int key);
void map_free(map* m); 
void map_delete(map* m, int key);
void map_print(map* m);
int map_length(map* m);
void map_update(map* m, int key, int val);

#endif // MAP_H
