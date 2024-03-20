#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to the Pirate Adventure Game!\n");

    while (1) {
        printf("\nYou find yourself on a pirate ship. What do you do?\n");
        printf("1. Search the ship's cabin.\n");
        printf("2. Talk to the captain.\n");
        printf("3. Go below deck.\n");
        printf("4. Jump overboard.\n");
        printf("5. Quit the game.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nYou search the ship's cabin and find a treasure map!\n");
                break;
            case 2:
                printf("\nYou approach the captain, who challenges you to a duel!\n");
                printf("You fight valiantly and emerge victorious!\n");
                break;
            case 3:
                printf("\nYou venture below deck and encounter a group of rival pirates!\n");
                printf("You engage in a fierce battle, but ultimately lose.\n");
                break;
            case 4:
                printf("\nYou jump overboard and swim to a nearby island.\n");
                printf("You discover a hidden treasure buried in the sand!\n");
                break;
            case 5:
                printf("\nThanks for playing the Pirate Adventure Game!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

