#include <iostream>

void GetIntBytes();
void GetBiggestNum();
void GetBiggestByte();
void ReverseString(char* _sCadena_, unsigned int _iLength);

int main()
{
    GetIntBytes();
    printf("\n");

    GetBiggestNum();
    printf("\n");

    GetBiggestByte();
    printf("\n");

    char word[] = "¡Hola!"; // Cambiado en main

    ReverseString(word, static_cast<unsigned int>(sizeof(word) / sizeof(char)));
    printf("%s", word);
    printf("\n");

    return 0;
}