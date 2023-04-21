#include <stdio.h>

struct Item
{
    int itemCode;
    char itemName[20];
    float itemPrice;

    struct expiryDate
    {
        int dd;
        int mm;
        int yy;
    } ED;
};

int main()
{
    struct Item obj;
    obj.ED.dd = 8;
    obj.ED.mm = 12;
    obj.ED.yy = 2023;

    return 0;
}