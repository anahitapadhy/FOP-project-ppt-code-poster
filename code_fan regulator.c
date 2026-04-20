#include <stdio.h>

// Function to control fan speed
void controlFan(int level) {
    switch (level) {
        case 0:
            printf("Fan is OFF.\n");
            break;
        case 1:
            printf("Fan speed: LOW\n");
            break;
        case 2:
            printf("Fan speed: MEDIUM\n");
            break;
        case 3:
            printf("Fan speed: HIGH\n");
            break;
        default:
            printf("Invalid regulator level!\n");
    }
}

int main() {
    int regulatorLevel;
    char choice;

    do {
        printf("\n--- FAN REGULATOR CONTROL SYSTEM ---\n");
        printf("0 -> OFF\n");
        printf("1 -> LOW SPEED\n");
        printf("2 -> MEDIUM SPEED\n");
        printf("3 -> HIGH SPEED\n");
        printf("Enter regulator level: ");
        scanf("%d", &regulatorLevel);

        controlFan(regulatorLevel);

        printf("\nDo you want to change speed again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nSystem shutting down. Fan control ended.\n");
    return 0;
}
