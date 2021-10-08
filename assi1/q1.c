#include <stdio.h>
#include <string.h>

#define ll long long int

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        char num[1000000];
        scanf("%s", num);
        ll flag = 1,onwait=0;
        ll length = strlen(num), dotCount = 0;
        printf("%lld",length);
        for (int i = 0; i < length; i++)
        {
            if (num[i] == '.' && dotCount == 0)
            {
                dotCount++;
                onwait=1;
            }
            else if ((num[i] - '0') >= 0 && (num[i] - '0') <= 9)
            {
                onwait=0;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        (dotCount == 0 || flag == 0||onwait==1) ? printf("Invalid\n") : printf("Valid\n");
    }
    return 0;
}
