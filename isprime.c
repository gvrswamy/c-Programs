/*
C  program to check number for prime using isprime function
*/
#include <stdio.h>
void isprime(int);
int main()
{
    int num;
    printf("Enter number\n");

    scanf("%d", &num);
    isprime(num);
    return 0;
}
void isprime(int n)
{
    int i, flag = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            // break;
        }
    }
    if (flag == 1)
    {
        printf("NOT A PRIME\n");
    }
    else
    {
        printf("PRIME NO\n");
    }
}

/*
output:
Enter number
13
PRIME NO

Enter number
12
NOT A PRIME

*/