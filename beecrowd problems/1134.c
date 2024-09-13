
#include <stdio.h>

int main()
{
    int alcohol = 0, gasoline = 0, diesel = 0, x;

    while(1)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            alcohol++;
        }
        else if (x == 2)
        {
            gasoline++;
        }
        else if (x == 3)
        {
            diesel++;
        }
        else if(x==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);

    return 0;
}

