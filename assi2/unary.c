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
        prs("\nEnter two binary values \n");
        char val1[100], val2[100];
        scs(val1);
        scs(val2);
        ll result;
        prs("1. Addition \n2. Multipilcation \n");
        ll opt;
        sci(opt);
        if (opt == 1)
            result = strlen(val1)+strlen(val2);
        if (opt == 2)
            result = strlen(val1)*strlen(val2);

        for (int i = 0; i < result; i++) prc('I');
        prs(nl);
    }

    return 0;
}