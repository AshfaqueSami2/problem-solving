#include<stdio.h>
int main()
{
    int row,col,exrow;
    scanf("%d%d%d",&row,&col,&exrow);
    int result;
    result = (row*col)+(col*exrow);
    printf("%d\n",result);



    return 0;
}
