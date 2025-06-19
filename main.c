#include <stdio.h>
#include <stdlib.h>


// Dik ucgen
void draw_triangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Ters dik ucgen
void draw_inverted_triangle(int size)
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Ayna dik ucgen
void draw_mirrored_triangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Kum saati sekli
void draw_hourglass(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == 0) || (i == size - 1) || (i == j) || (i + j == size - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf A
void draw_letter_a(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == 0 && j > 0 && j < size - 1) ||
                    (j == 0 && i != 0) ||
                    (j == size - 1 && i != 0) ||
                    (i == size / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf C
void draw_letter_c(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == 0 && j > 0) ||
                    (j == 0 && i > 0 && i < size - 1) ||
                    (i == size - 1 && j > 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf E
void draw_letter_e(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || i == size / 2 || j == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf I
void draw_letter_i(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == size / 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf K
void draw_letter_k(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((j == 0) ||
                    (i == size / 2 && j <= size / 2) ||
                    (i + j == size - 1 && i <= size / 2) ||
                    (i == j && i >= size / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf R
void draw_letter_r(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 ||
                    (i == 0 && j < size - 1) ||
                    (i == size / 2 && j < size - 1) ||
                    (i < size / 2 && j == size - 1) ||
                    (i >= size / 2 && i == j))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf S
void draw_letter_s(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == 0) ||
                    (i == size / 2) ||
                    (i == size - 1) ||
                    (i < size / 2 && j == 0) ||
                    (i > size / 2 && j == size - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf T
void draw_letter_t(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == size / 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Harf Y
void draw_letter_y(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i == j && i <= size / 2) ||
                    (i + j == size - 1 && j >= size / 2) ||
                    (i > size / 2 && j == size / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main()
{
    int choice, size;

    // Boyut al
    printf("Enter size of the figure: ");
    scanf("%d", &size);

    // Menu dongusu
    while (1)
    {
        printf("\n=== Figure Menu ===\n");
        printf("1. Draw_triangle\n");
        printf("2. Draw_inverted_triangle\n");
        printf("3. Draw_mirrored_triangle\n");
        printf("4. Draw_hourglass\n");
        printf("5. Draw_letter_a\n");
        printf("6. Draw_letter_c\n");
        printf("7. Draw_letter_e\n");
        printf("8. Draw_letter_I\n");
        printf("9. Draw_letter_k\n");
        printf("10. Draw_letter_r\n");
        printf("11. Draw_letter_s\n");
        printf("12. Draw_letter_t\n");
        printf("13. Draw_letter_y\n");
        printf("0. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            draw_triangle(size);
            break;
        case 2:
            draw_inverted_triangle(size);
            break;
        case 3:
            draw_mirrored_triangle(size);
            break;
        case 4:
            draw_hourglass(size);
            break;
        case 5:
            draw_letter_a(size);
            break;
        case 6:
            draw_letter_c(size);
            break;
        case 7:
            draw_letter_e(size);
            break;
        case 8:
            draw_letter_i(size);
            break;
        case 9:
            draw_letter_k(size);
            break;
        case 10:
            draw_letter_r(size);
            break;
        case 11:
            draw_letter_s(size);
            break;
        case 12:
            draw_letter_t(size);
            break;
        case 13:
            draw_letter_y(size);
            break;
        case 0:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}
