#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{

    system("cls");
    char c = 'A';

    char arr[] = {'H', 'E', 'L', 'L', 'O', 'W', 'O', 'R', 'L', 'D', '\0'};
    char str[20] = "";
    for (int i = 0; i < 10; i++)
    {

        while (c != arr[i])
        {
            printf("%s", str);
            printf("%c", c);
            c++;
            Sleep(100);
            system("cls");
        }

        strncat(str, &c, 1);
        if (i == 4)
        {
            strncat(str, " ", 1);
        }
        c = 'A';
    }

    printf("%s", str);

    return 0;
}