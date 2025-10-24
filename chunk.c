#include "chunk.h"
#include "stdlib.h"
#include  "memory.h"
void init_chunk(Chunk* chunk){
    chunk->capacity = 0;
    chunk->count = 0;
    chunk->data = NULL;
}

void write_chunk (Chunk* chunk,uint8_t byte) {
   if (chunk->count + 1 > chunk->capacity)
   {
    int old_capacity = chunk->capacity;
    chunk->capacity = GROW_CAPACITY(old_capacity);
    // TODO: Grow the array
    // chunk->data = 
   }
    
    chunk->data[chunk->count] = byte;
    chunk->count++;      
}