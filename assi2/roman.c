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

//getting the values of roman character
ll getValue(char c)
{
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
}

// roman format to decimal format;
ll romanToInt(char val[])
{
    ll length = strlen(val);
    ll intVal = 0, i;
    for (i = 0; i < length - 1; i++)
    {
        ll a = getValue(val[i]), b = getValue(val[i + 1]);
        if (a < b)
        {
            intVal += (b - a);
            i++;
        }
        else intVal += a;
    }
    if (i < length) intVal += getValue(val[i]);

    return intVal;
}

int main()
{
    ll intarr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char chararr[][2] = {{'0', 'M'}, {'C', 'M'}, {'0', 'D'}, {'C', 'D'}, {'0', 'C'}, {'X', 'C'}, {'0', 'L'}, {'X', 'L'}, {'0', 'X'}, {'I', 'X'}, {'0', 'V'}, {'I', 'V'}, {'0', 'I'}};
    ll t;
    sci(t);
    
    // test cases
    while (t--)
    {
        prs("\nEnter two roman values \n");
        char val1[100], val2[100];
        scs(val1);
        scs(val2);
        ll x = romanToInt(val1);
        ll y = romanToInt(val2);
        ll result;
        prs("1. Addition \n2. Multipilcation \n");
        ll opt;
        sci(opt);
        if (opt == 1) result = x + y;
        if(opt==2) result=x*y;

        char ans[100];
        ll idx = 0;

        // decimal to roman format
        for (int i = 0; i < 13; i++)
        {
            for (int j = 0; j < result / intarr[i]; j++)
            {
                if (chararr[i][0] != '0')
                {
                    ans[idx] = chararr[i][0];
                    idx++;
                }
                ans[idx] = chararr[i][1];
                idx++;
            }
            result %= intarr[i];
        }
        
        for (int i = 0; i < idx; i++) prc(ans[i]);
        prs(nl);
    }
    
    return 0;
}