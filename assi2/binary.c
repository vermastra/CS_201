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

//binary to decimal converstion;
ll binaryToInt(char val[])
{
    ll x = 0;
    for (int i = 0; i < strlen(val); i++)
        x = 2 * x + (val[i] - '0');
    return x;
}

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
        ll x = binaryToInt(val1);
        ll y = binaryToInt(val2);
        ll result;
        prs("1. Addition \n2. Multipilcation \n");
        ll opt;
        sci(opt);
        if (opt == 1)
            result = x + y;
        if (opt == 2)
            result = x * y;

        //decimal to binary
        char ans[100];
        ll idx=0;
        while (result)
        {
            (result%2)?(ans[idx]='1'):(ans[idx]='0');
            result/=2,idx++;
        }
        for (int i = 0; i < idx/2; i++)
        {
            ll temp=ans[i];
            ans[i]=ans[idx-i-1];
            ans[idx-i-1]=temp;
        }

        if(idx==0) { ans[0]='0',idx++; }
        for (int i = 0; i < idx; i++) prc(ans[i]);
        prs(nl);
    }

    return 0;
}