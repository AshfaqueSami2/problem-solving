#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],temp,s3[100];
    scanf("%s%s",s1,s2);
    int a = strlen(s1);
    int b = strlen(s2);
    strcpy(s3,s1);
    strcat(s1,s2);

    printf("%d %d\n",a,b);
    printf("%s\n",s1);
    
    temp = s3[0];
    s3[0]=s2[0];
    s2[0]=temp;
    printf("%s %s\n",s3,s2);
    return 0;
}
