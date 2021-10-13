#include <stdio.h>
#include <string.h>
#define ll long long int
#define nl "\n"
#define sci(var) scanf("%lld", &var);
#define scc(var) scanf("%c", &var);
#define scs(var) scanf("%s", var);
#define pri(var) printf("%lld", var);
#define prc(var) printf("%c", var);
#define prs(var) printf("%s", var);

int main()
{
    ll t;
    sci(t);

    // test cases
    while (t--)
    {
        prs("\nEnter two decimal values \n");
        ll x, y;
        sci(x);
        sci(y);
        ll result;
        prs("1. Addition \n2. Multipilcation \n");
        ll opt;
        sci(opt);
        if (opt == 1)
            pri(x + y);
        if (opt == 2)
            pri(x * y);

        prs(nl);
    }

    return 0;
}