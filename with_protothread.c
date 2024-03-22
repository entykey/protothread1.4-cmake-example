/*
#include <stdio.h>
#include <unistd.h>
// #include <protothread.h>
#include "pt.h"
#include <time.h>


struct pt pt1, pt2;

PT_THREAD(task1(struct pt *pt)) {
    static unsigned long previousMillis = 0;
    PT_BEGIN(pt);

    while (1) {
        unsigned long currentMillis = (unsigned long)time(NULL);
        if (currentMillis - previousMillis >= 1) { // 1 second
            previousMillis = currentMillis;
            printf("Output 1: Time elapsed\n");
        }
        PT_YIELD(pt);
    }

    PT_END(pt);
}

PT_THREAD(task2(struct pt *pt)) {
    static unsigned long previousMillis = 0;
    PT_BEGIN(pt);

    while (1) {
        unsigned long currentMillis = (unsigned long)time(NULL);
        if (currentMillis - previousMillis >= 2) { // 2 seconds
            previousMillis = currentMillis;
            printf("Output 2: Time elapsed\n");
        }
        PT_YIELD(pt);
    }

    PT_END(pt);
}

int main() {
    PT_INIT(&pt1);
    PT_INIT(&pt2);

    while (1) {
        task1(&pt1);
        task2(&pt2);
    }

    return 0;
}
*/



#include <stdio.h>
#include <unistd.h>
// #include <protothread.h>
#include "pt.h"
#include <time.h>


struct pt pt1, pt2, pt3;

PT_THREAD(task1(struct pt *pt)) {
    static unsigned long previousMillis = 0;
    PT_BEGIN(pt);

    while (1) {
        unsigned long currentMillis = (unsigned long)time(NULL);
        if (currentMillis - previousMillis >= 1) { // 1 second
            previousMillis = currentMillis;
            printf("Output 1: Time elapsed\n");
        }
        PT_YIELD(pt);
    }

    PT_END(pt);
}

PT_THREAD(task2(struct pt *pt)) {
    static unsigned long previousMillis = 0;
    PT_BEGIN(pt);

    while (1) {
        unsigned long currentMillis = (unsigned long)time(NULL);
        if (currentMillis - previousMillis >= 2) { // 2 seconds
            previousMillis = currentMillis;
            printf("Output 2: Time elapsed\n");
        }
        PT_YIELD(pt);
    }

    PT_END(pt);
}

PT_THREAD(task3(struct pt *pt)) {
    static int count = 0;
    PT_BEGIN(pt);

    while (1) {
        count++;
        printf("Count: %d\n", count);
        usleep(100000); // 100 milliseconds
        PT_YIELD(pt);
    }

    PT_END(pt);
}

int main() {
    PT_INIT(&pt1);
    PT_INIT(&pt2);
    PT_INIT(&pt3);

    while (1) {
        task1(&pt1);
        task2(&pt2);
        task3(&pt3);
    }

    return 0;
}
