#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ll long long int
#define nl "\n"
#define sci(var) scanf("%lld", &var);
#define scc(var) scanf("%c", &var);
#define scs(var) scanf("%s", var);
#define pri(var) printf("%lld", var);
#define prc(var) printf("%c", var);
#define prs(var) printf("%s", var);

void swapp(ll *x, ll *y)
{
    ll temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{

    ll n;
    sci(n);
    ll a[n], b[n];
    srand(time(0));
    for ( int i = 0; i < n; i++)
    {
        a[i]=rand();
        b[i] = a[i];
    }

    clock_t start1, end1;
    start1 = clock();

    //   Bubble sort****
    for (int i = 0; i < n - 1; i++)
    {
        ll flag=0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag=1;
                swapp(&a[j + 1], &a[j]);
            }
        }
        if(flag==0)break;
    }
    end1 = clock();
    ll t1 = end1 - start1;
    printf("%f",(double)t1/(double)CLOCKS_PER_SEC); prs(nl);

    clock_t start2, end2;
    start2 = clock();

    // selection sort****
    for (int i = 0; i < n - 1; i++)
    {
        ll minElementIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (b[minElementIndex] > b[j])
            {
                minElementIndex = j;
            }
        }
        swapp(&b[i], &b[minElementIndex]);
    }
    end2 = clock();
    ll t2 = end2 - start2;
    printf("%f",(double)t2/(double)CLOCKS_PER_SEC); prs(nl);

    return 0;
}
