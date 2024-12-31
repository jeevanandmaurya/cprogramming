#include <stdio.h>
#include <windows.h>
#include <string.h>

void leftmargin(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf(" ");
    }
}

void topmargin(int y)
{
    for (int i = 0; i < y; i++)
    {
        printf("\n");
    }
}

void remove2023()
{

    int year = 2024;
    int x = 30, y = 10;

    while (x != 0)
    {
        // top margin
        topmargin(y);
        // left margin
        leftmargin(x + 5);
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
        if (i == 5 || i == 9)continue;

        while (c != txt[i])
        {
            // top margin
            topmargin(y);
            // left margin
            leftmargin(x);
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
            topmargin(y);
            // left margin
            leftmargin(x);
            printf("%s\n", txt);
            // left margin
            leftmargin(x + 5);
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
    topmargin(y);
    // left margin
    leftmargin(x);
    printf("%s\n", txt);
    // left margin
    leftmargin(x+5);
    
    for (int j = 0; j < 4; j++)
    {
        printf("%d", yy[j]);
    }

    // bottom margin
    topmargin(y);

    return 0;
}