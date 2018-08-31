#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

void CaeserCipher(char* PlainText, int key);

int main(int argc, string argv[])
{
    int key = 1;
    char PlainText[101];

    if(argc != 1)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
 else
 {
     printf("Plaintext: ");
     fgets(PlainText,sizeof(PlainText),stdin);

     printf("Ciphertext: ");
 }

   CaeserCipher(PlainText,key);
   return 0;
}

void CaeserCipher(char* PlainText, int key)
{
    int i = 0;
    int value;
    char Cipher;

    while(PlainText[i] != '\0' && strlen(PlainText)-1 > i)
    {
        value = ((int)PlainText[i]- 97 + key) % 26 + 97;
        Cipher = (char)(value);
        printf("%c",Cipher);
        i++;
    }
    printf("\n");
}cs50
cs50
