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
    chunk->data =  GROW_ARRAY(uint8_t,chunk->data,old_capacity,chunk->capacity);
   }
    
    chunk->data[chunk->count] = byteunk->data[chunk->count] = byte;;
    chunk->count++;      
}


void free_chunk (Chunk* chunk) {
    FREE(uint8_t,chunk->data,chunk->capacity);
    init_chunk(chunk);
}
