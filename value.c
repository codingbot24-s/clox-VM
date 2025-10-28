#include <stdio.h>

#include "common.h"
#include "memory.h"
#include "value.h"


void init_value_array(ValueArray *array) {
  array->capacity = 0;
  array->count = 0;
  array->values = NULL;
}
void write_value_array(ValueArray *array, Value value) {
  if (array->count+1 > array->capacity) {
    // GROW the array
  }


  array->values[array->count] = value;
  array->count++;
} 
