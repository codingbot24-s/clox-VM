#ifndef chunk_h
#define chunk_h
#include "common.h"

typedef enum {
    OP_RETURN,
}OPCODE;

typedef struct{
    int capacity;
    int count;
    uint8_t* data;
}Chunk;


void init_chunk(Chunk* chunk);
void write_chunk(Chunk* chunk,uint8_t byte);

#endif