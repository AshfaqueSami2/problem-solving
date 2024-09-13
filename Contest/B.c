#include<stdio.h>
#include<string.h>
int main()
{

    char input[110];
    scanf("%s",input);
    int length = strlen(input);
    int count[26]={0};
    int extra = 0;
    for(int i=0;i<length;i++)
    {
        count[input[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            extra++;
        }
    }
    if(extra%2==0)
    {
          printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }



}
