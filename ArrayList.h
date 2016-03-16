#include <libbool.h>

#define LIST_SIZE       30

typedef int Data;

typedef struct __ArrayList
{
        Data array[LIST_SIZE];
        int current;
        int numOfData;
} ArrayList;

typedef ArrayList List;

void LInit(List *pList);

void LInsert(List *pList, Data d);

bool LFirst(List *pList, );

bool LNext(List *pList);

Data LRemove(List *pList);

int LCount(List *pList);

