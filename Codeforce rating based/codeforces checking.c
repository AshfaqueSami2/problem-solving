#include<stdio.h>
int main()
{
    int n;
    char ch;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {

        scanf(" %c",&ch);
        if(ch=='c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='o' || ch=='r' || ch=='s')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


    return 0;
}
