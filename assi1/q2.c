#include <stdio.h>
#include <string.h>
#define ll long long int

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        char email[100];
        scanf("%s", email);
        ll a = -1, dot = -1;
        ll length = strlen(email);
        for (int i = 0; i < length; i++)
        {
            if (email[i] == '@')
            {
                a = i;
            }

            if (email[i] == '.')
            {
                dot = i;
            }
        }

        if (a == -1 || dot == -1)
        {
            printf("Invalid");
        }
        else if ((dot - a) < 3)
        {
            printf("Invalid");
        }
        else if (a == 0 || dot == length - 1)
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
        printf("\n");
    }
    return 0;
}

