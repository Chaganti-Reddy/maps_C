// main.c
#include "map.h"
#include <stdio.h>

int main() {
  map m;
  map_init(&m);
  int c; 

  while (1) {
    printf("\n1. Insert\n2. Get\n3. Delete\n4. Print\n5. Length\n6. Update\n7. Exit\n");
    printf("Enter: ");
    scanf("%d", &c);

    if (c == 7) {
      break; 
    }

    switch (c) {
      case 1: {
        int key, val;
        printf("Enter key and value: ");
        scanf("%d %d", &key, &val);
        map_insert(&m, key, val);
        break;
      }
      case 2: {
        int key_to_get;
        printf("Enter key to get: ");
        scanf("%d", &key_to_get);
        map_get(&m, key_to_get);
        break;
      }
      case 3: {
        int key_to_delete;
        printf("Enter key to delete: ");
        scanf("%d", &key_to_delete);
        map_delete(&m, key_to_delete);
        break;
      }
      case 4: {
        map_print(&m);
        break;
      }
      case 5: {
        printf("\nLength: %d\n", map_length(&m));
        break;
      }
      case 6: {
        int key, val;
        printf("Enter key and value: ");
        scanf("%d %d", &key, &val);
        map_update(&m, key, val);
        break;
      }
      default:
        printf("Invalid choice\n");
        break;
    }
  }

  map_free(&m); 
  return 0;
}
