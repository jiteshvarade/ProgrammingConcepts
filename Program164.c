#include <stdio.h>
#include <stdlib.h>

// Struture Declaration
struct Node
{
    int iData;              // 4 bytes 
    struct Node * Next;     // 8 bytes
};
// If padding consider kela tr object size 16 byte hote 

int main()
{
    struct Node *First = NULL;   // 8 bytes

    return 0;
}