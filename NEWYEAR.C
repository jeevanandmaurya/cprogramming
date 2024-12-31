#include <stdio.h>
#include <windows.h>
#include <string.h>

void remove2023()
{

    int year = 2024;
    int x = 30,y=10;
   
    while (x != 0)
    {
         // top margin
    for (int i = 0; i < y; i++)
    {
        printf("\n");
    }
        // left margin
        for (int i = 0; i < x; i++)
        {
            printf(" ");
        }
        printf("%d <--", year);
        x--;
        Sleep(50);
        system("cls");
    }
}

int main()
{

    remove2023();

    int x = 25, y = 10;

    system("cls");
    char c = 'A';

    char txt[] = "HAPPY NEW YEAR";
    for (int i = 0; i < 12; i++)
    {
        // skip for space
        if (i == 5 || i == 9)
            continue;

        while (c != txt[i])
        {
            // top margin
            for (int i = 0; i < y; i++)
            {
                printf("\n");
            }
            // left margin
            for (int i = 0; i < x; i++)
            {
                printf(" ");
            }
            // print txt
            for (int j = 0; j < i; j++)
            {
                printf("%c", txt[j]);
            }
            printf("%c", c);
            c++;
            Sleep(10);
            system("cls");
        }
        c = 'A';
    }
    printf("%s\n", txt);
    system("cls");

    int yy[4] = {2, 0, 2, 5};
    for (int i = 0; i < 4; i++)
    {
        int a = 0;
        while (a != yy[i])
        {
            // top margin
            for (int i = 0; i < y; i++)
            {
                printf("\n");
            }
            // left margin
            for (int i = 0; i < x; i++)
            {
                printf(" ");
            }
            printf("%s\n", txt);
            // left margin
            for (int i = 0; i < x; i++)
            {
                printf(" ");
            }
            // left margin
            for (int i = 0; i < 5; i++)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("%d", yy[j]);
            }
            printf("%d", a);
            a++;
            Sleep(200);
            system("cls");
        }
    }
    // top margin
    for (int i = 0; i < y; i++)
    {
        printf("\n");
    }

    // left margin
    for (int i = 0; i < x; i++)
    {
        printf(" ");
    }
    printf("%s\n", txt);

    // left margin
    for (int i = 0; i < x; i++)
    {
        printf(" ");
    }
    // left margin
    for (int i = 0; i < 5; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < 4; j++)
    {
        printf("%d", yy[j]);
    }

    // bottom margin
    for (int i = 0; i < y; i++)
    {
        printf("\n");
    }

    return 0;
}