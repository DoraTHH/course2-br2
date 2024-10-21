#include<stdio.h>
#include<stdbool.h>

typedef struct rule {
    int points;
    bool crossed;
}rule;

int main () {

}

// yahtzee

// implementation of a yatzee rule
int chance (int input[]) {
    int score = 0;
    for (int i = 0; i < sizeof(input); i++) {
        score += input[i];
    }
    return score;
}





//implementation of buble sort i stole off the internet
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        // swapped variable to signal if there is a
        // swap happened in the inner loop
        // initially set to false
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr + j, arr + j + 1);

                // swapped is set to true if the swap is
                // done
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}