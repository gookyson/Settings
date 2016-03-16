#include <stdio.>

int main(void)
{
        // Init
        List list;
        Data data;
        Data d = {1,2,3,4,5,6,7,9};
        int i;

        LInit(&list);

        //Insrt
        for (i  = 0; i < sizeof(d); i++) 
                LInsert(&list, d[i]);

        //Get first element
        if (LFist(&list, &data) == true)
                printf("First Element : %d\n", data);

        return 0;

