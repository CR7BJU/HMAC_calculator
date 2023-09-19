#include <stdio.h>
#include <string.h>
#include <hmac.h>

int main() {
    const char *key = "top-secret"; // Substitua pela sua chave secreta
    const char *data = "ESTCube";

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    HMAC(EVP_sha256(), key, strlen(key), (unsigned char *)data, strlen(data), digest, &digest_len);

    printf("HMAC: ");
    for (unsigned int i = 0; i < digest_len; i++) {
        printf("%02x", digest[i]);
    }
    printf("\n");

    return 0;
}
