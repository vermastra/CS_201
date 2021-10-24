#include <stdio.h>
#include <limits.h>

#define size 1000000000
char is_prime[size] = {0};

int main()
{
    long long int n; 
    scanf("%lld", &n);

    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] == 0)
        {
            
            for (int j = 2 * i; j <= n; j += i)
            {
                is_prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <=n; i++)
    {
        if (is_prime[i]==0)
        {
            printf("%d ", i);
        }
        
    }

    return 0;
}

