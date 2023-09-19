#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>

int main() {
    const char *data = "ESTCube";
    const EVP_MD *md = EVP_sha224(); // SHA-224 algorithm. SHA-2 hash functions deprecated.

    if (!md) {
        printf("Erro: Algoritmo não encontrado.\n");
        return 1;
    }

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();

    if (!EVP_DigestInit_ex(mdctx, md, NULL)) {
        printf("Erro ao inicializar o contexto do hash.\n");
        return 1;
    }

    if (!EVP_DigestUpdate(mdctx, data, strlen(data))) {
        printf("Erro ao atualizar o hash com os dados.\n");
        return 1;
    }

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    if (!EVP_DigestFinal_ex(mdctx, md_value, &md_len)) {
        printf("Erro ao finalizar o hash.\n");
        return 1;
    }

    EVP_MD_CTX_free(mdctx);

    printf("SHA-224 Hash: ");
    for (unsigned int i = 0; i < md_len; i++) {
        printf("%02x", md_value[i]);
    }
    printf("\n");

    return 0;
}






