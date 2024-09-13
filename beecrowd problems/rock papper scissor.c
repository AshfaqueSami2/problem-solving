#include <stdio.h>

int main() {
    char p1[10], p2[10];
    int p1_choice, p2_choice;

    printf("Player 1 Name: ");
    scanf("%s", p1);
    printf("Player 1 choose (rock=1, paper=2, scissors=3): ");
    scanf("%d", &p1_choice);

    printf("Player 2 Name: ");
    scanf("%s", p2);
    printf("Player 2 choose (rock=1, paper=2, scissors=3): ");
    scanf("%d", &p2_choice);

    if (p1_choice == p2_choice) {
        printf("Its a Draw!\n");
    } else if (p1_choice == 1 && p2_choice == 3) {
        printf("%s wins!", p1);
    } else if (p1_choice == 2 && p2_choice == 1) {
        printf("%s wins!", p1);
    } else if (p1_choice == 3 && p2_choice == 2) {
        printf("%s wins!", p1);
    } else {
        printf("%s wins!\n", p2);
    }
    return 0;
}

