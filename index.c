#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int SieveOfEratosthenes(int n, int arr[])
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    int k = 0;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            arr[k] = p;
            k++;
        }
    }
    return k;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int k = SieveOfEratosthenes(n, arr);
    for (int i = 0; i < k - 3; i++)
    {
        int a1 = arr[i];
        int a2 = arr[i + 1];
        int a3 = arr[i + 2];
        int a4 = arr[i + 3];
        if (a1 + a2 + a3 + a4 <= n)
        {
            printf("%d %d %d %d", a1, a2, a3, a4);
            break;
        }
    }
    return 0;
}