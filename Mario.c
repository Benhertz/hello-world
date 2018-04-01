#include <stdio.h>
#include <cs50.h>


int main()
{
    int height = -1;
    int line = 0;
    int counter = 0;

    while (height < 0 || height > 23)
    {
        height = get_int("Enter the height: ");
    }
    printf("\n");

    for(line = 1; line <= height; line++)
    {
        int spaceNum = height - line;
        int spaceCounter = 1;
        for (spaceCounter = 0; spaceCounter < spaceNum ; spaceCounter++)
            printf(" ");
        for(counter = 0; counter <= line ; counter++)
            printf("#");

        printf("\n");
    }


    return 0;
}
