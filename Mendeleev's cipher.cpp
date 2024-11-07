#include <pch.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char input[1024], inputedWord;
    int length = 0, exist = 0, itibciw = 0;
    char periodicTableNumbers[119][4] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24",
                                          "25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46",
                                          "47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64","65","66","67","68",
                                          "69","70","71","72","73","74","75","76","77","78","79","80","81","82","83","84","85","86","87","88","89","90",
                                          "91","92","93","94","95","96","97","98","99","100","101","102","103","104","105","106","107","108","109","110",
                                          "111","112","113","114","115","116","117","118" };
    char ptswofl[119][2] = { "H","H","L","B","B","C","N","O","F","N","N","M","A","S","P","S","C","A","K","C","S","T","V","C",
                                     "M","F","C","N","C","Z","G","G","A","S","B","K","R","S","Y","Z","N","M","T","R","R","P",
                                     "A","C","I","S","S","T","I","X","C","B","L","C","P","N","P","S","E","G","T","D","H","E",
                                     "T","Y","L","H","T","W","R","O","I","P","A","H","T","P","B","P","A","R","F","R","A","T",
                                     "P","U","N","P","A","C","B","C","E","F","M","N","L","R","D","S","B","H","M","D","R","C",
                                     "N","F","M","L","T","O", " " };
    char ptswofsl[119][2] = { "h", "h", "l", "b", "b", "c", "n", "o", "f", "n", "n", "m", "a", "s", "p", "s", "c", "a", "k", "c", "s", "t", "v", "c",
                                        "m", "f", "c", "n", "c", "z", "g", "g", "a", "s", "b", "k", "r", "s", "y", "z", "n", "m", "t", "r", "r", "p",
                                        "a", "c", "i", "s", "s", "t", "i", "x", "c", "b", "l", "c", "p", "n", "p", "s", "e", "g", "t", "d", "h", "e",
                                        "t", "y", "l", "h", "t", "w", "r", "o", "i", "p", "a", "h", "t", "p", "b", "p", "a", "r", "f", "r", "a", "t",
                                        "p", "u", "n", "p", "a", "c", "b", "c", "e", "f", "m", "n", "l", "r", "d", "s", "b", "h", "m", "d", "r", "c",
                                        "n", "f", "m", "l", "t", "o", " " };
start:
    system("cls");
    printf("Wprowadź zdanie by zaszyfrować: ");

    while ((inputedWord = getchar()) != '\n') {
        if (itibciw < sizeof(input) - 1) {
            input[itibciw] = inputedWord;
            itibciw++;
        }
        else {
            printf("Przekroczono maksymalną długość zdania.\n");
            goto end;
            break;
        }
    }

    input[itibciw] = '\0';

    length = strlen(input);

    if (length > 0)
    {
        for (int i = 0; i < length; ++i) {
            if (input[i] == 'j' || input[i] == 'J' || input[i] == 'q' || input[i] == 'Q' || input[i] == '*' || input[i] == '+' || input[i] == '-'
                || input[i] == '/' || input[i] == '|' || input[i] == '=' || input[i] == '_' || input[i] == '!' || input[i] == '@' || input[i] == '#'
                || input[i] == '$' || input[i] == '%' || input[i] == '^' || input[i] == '&' || input[i] == '(' || input[i] == ')' || input[i] == ':'
                || input[i] == ';' || input[i] == '\"' || input[i] == '\'' || input[i] == '[' || input[i] == ']' || input[i] == '{' || input[i] == '}'
                || input[i] == 'ę' || input[i] == 'ó' || input[i] == 'ą' || input[i] == 'ś' || input[i] == 'ł' || input[i] == 'ż' || input[i] == 'ź'
                || input[i] == 'ć' || input[i] == 'ń' || input[i] == 'Ę' || input[i] == 'Ó' || input[i] == 'Ą' || input[i] == 'Ś' || input[i] == 'Ł'
                || input[i] == 'Ż' || input[i] == 'Ź' || input[i] == 'Ć' || input[i] == 'Ń' || input[i] == '\\' || input[i] == '<' || input[i] == '>'
                || input[i] == '.' || input[i] == ',' || input[i] == '?' || input[i] == '`' || input[i] == '~') {
                exist = 1;
                break;
            }
        }
    }
    else if (length <= 0)
    {
        system("cls");
        printf("Wpisz zdanie by móc zaszyfrować\n");
        system("pause");
        goto start;
    }

    if (exist) {
        printf("Zdanie to: ");

        for (int i = 0; i < length; i++)
        {
            printf("%c", input[i]);
        };
        printf("\n");
        printf("Nie można zaszyfrować.\n");
    }
    else
    {
        printf("Szyfrowanie mozliwe.\n");
        printf("Zdanie to: ");

        for (int i = 0; i < length; i++)
        {
            if (input[i] != '\0')
            {
                printf("%c", input[i]);
            }
            else
            {
                goto cypher;
            }
        };
    cypher:
        printf("\n");
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < sizeof(ptswofl) - 1; j++)
            {
                if (input[i] == ptswofl[j][0] || input[i] == ptswofsl[j][0])
                {
                    if (j < 9 && j >= 0)
                    {
                        printf("%c", periodicTableNumbers[j][0]);
                        if (input[i + 1] == '\0')
                        {
                            goto end;
                        }
                        else
                        {
                            printf("*");
                        }
                        break;
                    }
                    else if (j >= 9 && j <= 99)
                    {
                        for (int k = 0; k < 2; k++)
                        {
                            printf("%c", periodicTableNumbers[j][k]);
                        }
                        if (input[i + 1] == '\0')
                        {
                            goto end;
                        }
                        else
                        {
                            printf("*");
                        }
                        break;
                    }
                    else if (j >= 99 && j < 118)
                    {
                        for (int l = 0; l < 3; l++)
                        {
                            printf("%c", periodicTableNumbers[j][l]);
                        }
                        if (input[i + 1] == '\0')
                        {
                            goto end;
                        }
                        else
                        {
                            printf("*");
                        }
                        break;
                    }
                    else if (j == 118)
                    {
                        if (input[i + 1] == '\0')
                        {
                            goto end;
                        }
                        else
                        {
                            printf("*");
                        }
                        break;
                    }
                }
            }
        }
    }
end:
    printf("\n");
    system("pause");
}
