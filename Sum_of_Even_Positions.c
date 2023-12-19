#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int evenPosSum = 0;
    for (int i = 0; i < N; i += 2)
    {
        evenPosSum += arr[i];
    }
    printf("%d
", evenPosSum);
}