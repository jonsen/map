/**
 * simple test of map
 * compile: clang test.c ../src/map.c -o test
 */
#include <stdlib.h>
#include <stdio.h>

#include "../src/map.h"

int main(void) {
    
    map_int_t m; 
    map_init(&m);
    map_set(&m, "testkey", 123);
    int *val = map_get(&m, "testkey");
    if (val) {
      printf("value: %d\n", *val);
    } else {
      printf("value not found\n");
    }
    
    map_deinit(&m);

    return 0;
}
