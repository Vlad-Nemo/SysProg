#include "main.h"

int main() {
    struct Node *n0 = malloc(sizeof(struct Node));
    n0->next = NULL;
    struct Node *n1 = malloc(sizeof(struct Node));
    n1->next = n0;
    struct Node *n2 = malloc(sizeof(struct Node));
    n2->next = n1;
    struct Node *n3 = malloc(sizeof(struct Node));
    n3->next = n2;
    struct Node *n4 = malloc(sizeof(struct Node));
    n4->next = n3;
    struct Node *n5 = malloc(sizeof(struct Node));
    n5->next = n4;
    struct Node *n6 = malloc(sizeof(struct Node));
    n6->next = n5;
    struct Node *n7 = malloc(sizeof(struct Node));
    n7->next = n6;
    struct Node *n8 = malloc(sizeof(struct Node));
    n8->next = n7;
    struct Node *n9 = malloc(sizeof(struct Node));
    n9->next = n8;

    struct Node *current = n9;
    int i = 0;
    while (current != NULL) {
        current->num = i + 1;
        i++;
        current = current->next;
    }

    current = n9;
    float sum = 0;
    while (current != NULL) {
        sum += current->num;
        current = current->next;
    }
    float avg = sum / 10;

    printf("Среднее значение элементов списка: %f\n", avg);
    printf("Список: \n");

    current = n9;
    struct Node *last = n9;
    while (current != NULL) {
        if (current->num > avg) {
            current->next = current->next;
        }
        last = current->next;
        current = current->next;
    }

    current = n9;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");

    return 0;
}