#include<stdio.h>
int main()
{//row totogula hbe jotogula n er man hbe
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }
    return 0;
}