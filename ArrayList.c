#include "ArrayList.h"

void LInit(List *pList)
{
        pList->numOfData = 0;
        pList->current = -1;
}

void LInsert(List *pList, Data d)
{
        if (pList->numOfList >= LIST_SIZE)
        {
                printf("There is no room for new data\n");
                return;
        }
        
        pList->array[pList->numOfData++] = d;
}

bool LFirst(List *pList, Data *pData)
{
        if (pList->numOfData == 0)
        {
                printf("No data avaiable\n");
                return false;
        }

        pList->current = 0;
        pData = pList->array[pList->current];
        
        return true;
}

bool LNext(List *pList, Data *pData)
{
        if (pList->numOfData == 0)
        {
                printf("No data avaiable\n");
                return false;
        }

        if (pList->current >= pList->numOfData)
        {
                printf("Reached the last element\n")
                return false;
        } 

        pData = list->array[list->current++];

        return true;
}
