#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n --) {

        char s1[100];
        char s2[100];

        scanf("%s",s1);
        scanf("%s",s2);

        int comparevalue = strcmp(s1,s2);
        int sz = strlen(s1);
        int sz2 = strlen(s2);
        if(comparevalue == -1) {

            for(int i=0; i<sz; i++) {
                printf("%c",s1[i]);
                printf("%c",s2[i]);
            }

           for (int i = sz; s2[i] != '\0'; i++)
            {
                printf("%c", s2[i]);
            }
        }
        else{
            for(int i=0; i<sz2; i++) {
                printf("%c",s1[i]);
                printf("%c",s2[i]);
            }

          for (int i = sz2; s1[i] != '\0'; i++)
            {
                printf("%c", s1[i]);
            }
        }
printf("\n");
   }

return 0;
}

