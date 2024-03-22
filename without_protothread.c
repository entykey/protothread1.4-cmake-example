/*
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    unsigned long previousMillis1 = 0;
    unsigned long previousMillis2 = 0;
    const long interval1 = 1; // 1 second
    const long interval2 = 2; // 2 seconds

    while (1) {
        unsigned long currentMillis = time(NULL);

        if (currentMillis - previousMillis1 >= interval1) {
            previousMillis1 = currentMillis;
            printf("Output 1: Time elapsed\n");
        }

        if (currentMillis - previousMillis2 >= interval2) {
            previousMillis2 = currentMillis;
            printf("Output 2: Time elapsed\n");
        }

        // Sleep for 100 milliseconds to prevent busy waiting
        usleep(100000); // 100 milliseconds
    }

    return 0;
}
*/




#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    unsigned long previousMillis1 = 0;
    unsigned long previousMillis2 = 0;
    const long interval1 = 1; // 1 second
    const long interval2 = 2; // 2 seconds
    int count = 0;

    while (1) {
        unsigned long currentMillis = (unsigned long)time(NULL);

        if (currentMillis - previousMillis1 >= interval1) {
            previousMillis1 = currentMillis;
            printf("Output 1: Time elapsed\n");
        }

        if (currentMillis - previousMillis2 >= interval2) {
            previousMillis2 = currentMillis;
            printf("Output 2: Time elapsed\n");
        }

        // Increment count and print its value
        count++;
        printf("Count: %d\n", count);

        // Sleep for 100 milliseconds
        usleep(100000); // 100 milliseconds
    }

    return 0;
}
