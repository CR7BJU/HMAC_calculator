# HMAC calculator

****Description****

Simple hash function SHA224 calculator using [OpenSSL](https://www.openssl.org/docs/manmaster/man3/SHA256.html) libraries. SHA224_Init() and others are deprecated in newer versions of OpenSSL (3.0 and above). This calculator uses Message Digest Functions (EVP) instead of Secure Hash Algorithm functions (SHA). 

****How to run****

Copy this repo to a folder and run the following command: 
 
 -- cd "/home/salvadorf/Desktop/HMAC_calculator/HMAC_calculator/"
gcc -o sha224 sha224.c -I/usr/include -lssl -lcrypto

Make sure you have the OpenSSL 3.0 (or above) version.
