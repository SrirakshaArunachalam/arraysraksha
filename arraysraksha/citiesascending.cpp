#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CITIES 100
#define MAX_LEN 100

void capitalizeFirstLetter(char* city) {
    if (city[0]) {
        city[0] = toupper(city[0]);
    }
}

int main() {
    int n;
    char cities[MAX_CITIES][MAX_LEN];
    char temp[MAX_LEN];


    printf("Enter number of cities: ");
    scanf_s("%d", &n);


    getchar();  // Consume trailing newline after scanf_s
    for (int i = 0; i < n; i++) {
        printf("Enter city %d: ", i + 1);
        fgets(cities[i], MAX_LEN, stdin);
        // Remove trailing newline
        cities[i][strcspn(cities[i], "\n")] = '\0';
        capitalizeFirstLetter(cities[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(cities[j], cities[j + 1]) > 0) {
                strcpy_s(temp, cities[j]);
                strcpy_s(cities[j], cities[j + 1]);
                strcpy_s(cities[j + 1], temp);
            }
        }
    }

    printf("\nCities in Ascending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
