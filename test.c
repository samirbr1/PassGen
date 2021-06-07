#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


void PassGen(int num)
{
    int i = 0, randomizer = 0;

    char numbers[] = "0123456789";

    char alphabet[] = "abcdefghijklmnoqprstuvwyzx";

    char ALPHABET[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

    char symbols[] = "!@#$^&*?";

    char password[num];

    srand((unsigned int)(time(NULL)));

    randomizer = rand() % 4;

    for(i = 0; i < num; i++)
    {
         if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = ALPHABET[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = alphabet[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }

}

int main()
{
    int pass_lenght;

    printf("Insert the lenght in your password: ");
    scanf("%d", &pass_lenght);


    PassGen(pass_lenght);

    return 0;
}
