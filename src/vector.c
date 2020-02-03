#include <stdio.h>
#include <stdlib.h>

#define VECTOR_INIT_CAPACITY 6
#define UNDEFINE -1
#define SUCCESS 0

#define VECTOR_INIT(vec) vector vec;\
 vector_init(&vec)

typedef struct sVectorList
{
        void **items;
        int capacity;
        int total;
} sVectorList;

typdef struct sVector vector;
struct sVector
{
        sVectorList vectorList;
        
        //function pointers
        int (*pfVectorTotal)(vecor *);
        int (*pfVectorResize)(vector *, int);
        int (*pfVectorAdd)(vector *, void *);
        int (*pfVectorSet)(vector *, int, void *);
        void *(*pfVectorGet)(vector *, int);
        int (*pfVectorDelete)(vector *, int);
        int (*pfVectorFree)(vector *); 
};
