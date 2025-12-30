#include <stdio.h>
#include <string.h>

// Define the structure
struct Mobile {
    char name[50];
    float price;
};

int main() {
    struct Mobile mobiles[10]; // Array to hold multiple mobiles
    int count = 0; // Counter for the number of mobiles

    // Get user input
    for (int i = 0; i < 10; i++) { // Loop to get multiple inputs
        printf("Enter the name of the mobile (or 'exit' to finish): ");
        scanf("%s", mobiles[i].name);
        if (strcmp(mobiles[i].name, "exit") == 0) { // Exit condition
            break;
        }
        printf("Enter the price of the mobile: ");
        scanf("%f", &mobiles[i].price);
        count++;
    }

    // Display mobiles with price greater than 10,000
    printf("Mobiles with price greater than 10,000:\n");
    for (int i = 0; i < count; i++) {
        if (mobiles[i].price > 10000) {
            printf("The mobile name is: %s, Price: %.2f\n", mobiles[i].name, mobiles[i].price);
        }
    }

    return 0;
}
