#include <stdio.h>

void generateSeries(int num)
{
    if (num <= 0)
        return;
    
    generateSeries(num - 1); // Recursive call

    // Calculate the current term in the series
    int term = 2 + (num - 1) * 3;

    printf("%d ", term);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    generateSeries(n);

    return 0;
}

