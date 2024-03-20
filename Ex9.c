#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int treasure_location;
    int guess;
    int attempts = 0;

    // Seed the random number generator
    srand(time(NULL));
    treasure_location = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Treasure Hunting Game!\n");
    printf("I've hidden the treasure in a location between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == treasure_location) {
            printf("Congratulations! You found the treasure in %d attempts!\n", attempts);
            break;
        } else if (guess < treasure_location) {
            printf("Your guess is too low. Try again!\n");
        } else {
            printf("Your guess is too high. Try again!\n");
        }
    }

    return 0;
}

