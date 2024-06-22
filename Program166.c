#include <stdio.h>
#include <stdlib.h>

// Struture Declaration
struct Node
{
    int iData;              // 4 bytes 
    struct Node * Next;     // 8 bytes
};
// If padding consider kela tr object size 16 byte hote 

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;
int main()
{
    PNODE First = NULL;   // 8 bytes

    return 0;
}