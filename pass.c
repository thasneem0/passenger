#include <stdio.h>
#include <string.h>
void searchByDestination(int n, char name[][100], int age[], char destination[][100]) {
    char searchDest[100];
    printf("\nEnter destination to search: ");
    scanf(" %s", searchDest);

    printf("\nPassengers traveling to %s:\n", searchDest);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(destination[i], searchDest) == 0) {
            printf("%s, %d years old\n", name[i], age[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No passengers found for this destination.\n");
    }
}

int main() {
    int n, i;

    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    char name[100][100], destination[100][100];  
    int age[100];

    
    for (i = 0; i < n; i++) {
        printf("\nEnter Passenger %d Name: ", i + 1);
        scanf(" %s", name[i]);

        printf("Enter Passenger %d Age: ", i + 1);
        scanf("%d", &age[i]);

        printf("Enter Passenger %d Destination: ", i + 1);
        scanf(" %s", destination[i]);
    }

    searchByDestination(n, name, age, destination);

   
    printf("\nPassenger List:\n");
    for (i = 0; i < n; i++) {
        printf("Passenger %d: %s, %d years old, Destination: %s\n", i + 1, name[i], age[i], destination[i]);
    }

    return 0;
}
