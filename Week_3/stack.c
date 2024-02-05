#include <stdlib.h>
#include "stack.h"

int stack_init(struct stack *s)
{
    // NULL is a special value for NULL pointers.  It is defined: (void *) 0
    s->top = NULL;
    s->size = 0;

    return 0;
}

int stack_destroy(stack_t *s)
{
    stack_node_t *n;
    for (n = s->top; n; n = s->top)
    {
        s->top = s->top->next;
        free(n);
    }

    // This is not necessary; here because I am completionist
    s->size = 0;

    return 0;
}

int stack_push(stack_t *s, int d)
{
    stack_node_t *n;

    // sizeof is a static (i.e., compile time) operator that returns the number
    // of bytes required the store the expression given as its paramater
    if (!(n = malloc(sizeof(*n))))
    {
        return 1;
    }

    n->data = d;
    n->next = s->top;
    s->top = n;
    s->size++;

    return 0;
}

int stack_pop(stack_t *s, int *d)
{
    stack_node_t *n;

    if (!s->size)
    {
        return 1;
    }

    *d = s->top->data;
    n = s->top;
    s->top = s->top->next;
    free(n);
    s->size--;

    return 0;
}

int stack_top(stack_t *s, int *d)
{
    if (!s->size)
    {
        return 1;
    }

    *d = s->top->data;

    return 0;
}

int stack_size(stack_t *s)
{
    return s->size;
}

int stack_is_empty(stack_t *s)
{
    return !s->size;
}