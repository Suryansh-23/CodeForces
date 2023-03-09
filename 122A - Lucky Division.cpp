#include <iostream>
using namespace std;

int main()
{
    int j, n, i = 4;
    bool chk, main_chk;
    scanf("%d", &n);

    main_chk = false;
    while (i <= n)
    {
        j = i;
        chk = true;
        while (j != 0)
        {
            if (!(j % 10 == 4 || j % 10 == 7))
            {
                chk = false;
                break;
            }
            j = j / 10;
        }

        if (chk && n % i == 0)
        {
            printf("YES");
            main_chk = true;
            break;
        }
        i++;
    }

    if (!main_chk)
    {
        printf("NO");
    }

    return 0;
}
