/*

Greedy Method :

Implementation of Fractional Knapsack Problem.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void initializeArray (int n, float arr[][n]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0.0;
        }
    }
}

void getInput (int n, float arr[]) {
    for (int i = 0; i < n; i++) {
        scanf ("%f", &arr[i]);
    }
}

void calculatePWratio (int n, float arr[][n]) {
    for (int i = 0; i < n; i++) {
        arr[2][i] = arr[0][i] / arr[1][i];
    }
}

void sort (int n, float arr[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[2][i] < arr[2][j]) {
                for (int k = 0; k < 3; k++) {
                    float temp = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
}

float fractionalKnapsack (int n, float capacity) {

    float profit = 0;
    float arr[4][n];
    int j;

    initializeArray (n, arr);

    printf ("\nEnter Profits : \n");
    getInput (n, arr[0]);

    printf ("\nEnter Weights : \n");
    getInput (n, arr[1]);

    calculatePWratio (n, arr);

    sort (n, arr);

    for (int i = 0; i < n; i++) {
        while (capacity >= arr[1][i]) {
            capacity -= arr[1][i];
            arr[3][i] = 1;
            j = i;
            break;
        }
    }

    j++;

    arr[3][j] = capacity / arr[1][j];
    capacity -= arr[1][j] * arr[3][j];

    for (int i = 0; i < n; i++) {
        profit += arr[0][i] * arr[3][i];
    }

    return profit;

} 


void main (void) {

    int n;
    float capacity, profit;

    printf ("\nEnter number of objects : ");
    scanf ("%d", &n);

    printf ("\nEnter the capacity of knapsack : ");
    scanf ("%f", &capacity);

    profit = fractionalKnapsack (n, capacity);

    printf ("\nTotal profit for %d objects with capacity %.1f = %.2f\n", n, capacity, profit);


}
