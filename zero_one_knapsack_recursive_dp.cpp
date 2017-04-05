#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
	return (a > b) ? a : b;
}

int knapsackSolution(int val[], int wt[], int N, int W) {
	if(N == 0 || W == 0)  // Base case
		return 0;

	if(wt[N-1] > W)  // If the wt of Nth item > Capacity W, then it can not be included in the optimal solution
		return knapsackSolution(val, wt, N-1, W);

	else  // Otherwise, return the maximum value from the two cases
		return max( val[N-1] + knapsackSolution(val, wt, N-1, W - wt[N-1]),  // Nth item included
					knapsackSolution(val, wt, N-1, W)                        // Nth item not included
				  );
}

int main() {
	int knapsackSize, N, i;
	printf("Enter the knapsack size: ");
	scanf("%d", &knapsackSize);
	printf("Enter the number of items: ");
	scanf("%d", &N);

	int values[N]; // Array of values
	int weights[N]; // Array of weights

	printf("Enter %d items' values and weights respectively: \n", N);
	for(i = 0; i < N; i++) {
		scanf("%d %d", &values[i], &weights[i]);
	}

	int totalValue = knapsackSolution(values, weights, N, knapsackSize);
	printf("Total value accumulated: %d \n", totalValue);
	return 0;
}


