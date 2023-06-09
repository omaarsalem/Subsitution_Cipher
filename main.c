// Programmed on 11-03-2023
// By O-M-A-R A-S-H-I
// CODE WORKS PROBARLY 


#include <stdio.h>
#include <string.h>

void Encryption()
{
    char plaintext[1000], ciphertext[1000];
    char key[26] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    int i, j;

    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);


    int len = (int)strlen(plaintext);

    // encrypt the plaintext
    for (i = 0; i < len; i++) {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            j = plaintext[i] - 'a';
            ciphertext[i] = key[j];
        }
        else {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[len] = '\0';

    printf("Encrypted ciphertext: %s\n", ciphertext);
    
    
}

void Decryption(){
    
    char ciphertext[1000], plaintext[1000];
        char key[26] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        int i, j;

        printf("Enter ciphertext: ");
    fgets(plaintext, sizeof(ciphertext), stdin);

    int len = (int)strlen(ciphertext);

        // decrypt the ciphertext
        for (i = 0; i < len; i++) {
            if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
                for (j = 0; j < 26; j++) {
                    if (ciphertext[i] == key[j]) {
                        plaintext[i] = 'a' + j;
                        break;
                    }
                }
            }
            else {
                plaintext[i] = ciphertext[i];
            }
        }
        plaintext[len] = '\0';

        printf("Decrypted plaintext: %s\n", plaintext);
    
}



int main() {
    Encryption();
    
    Decryption();
    
    return 0;
}
