#ifndef STACK
#define  STACK
#include "decodc.h"

typedef struct cell cell;

typedef struct {
    cell *top;
}stack;

typedef struct{
    bloco *recall_bloco;
    char  recall_state[5];
}recall;

struct cell{
    recall *data;
    cell  *bot;
};

stack *initStack(void);
void   pushStack(stack *pilha, recall *new_data);
recall *popStack(stack *pilha);

#endif
