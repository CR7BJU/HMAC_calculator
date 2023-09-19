# HMAC calculator

Description
-----------

Simple hash function SHA224 calculator using [OpenSSL](https://www.openssl.org/docs/manmaster/man3/SHA256.html) libraries. SHA224_Init() and others are deprecated in newer versions of OpenSSL (3.0 and above). This calculator uses Message Digest Functions (EVP) instead of Secure Hash Algorithm functions (SHA). This small project is intended to be integrated into satellite firmware.

How to run
----------

To use this calculator, follow these steps:

1. Clone this repository to your desired folder using the following command:

        git clone https://github.com/CR7BJU/HMAC_calculator.git
2. Navigate to the folder where you cloned the repository:
   
        cd "/path/to/folder/"
   
3. Compile the source code using GCC with the required OpenSSL library:

        gcc -o sha224 sha224.c -I/usr/include -lssl -lcrypto

Please ensure that you have OpenSSL version 3.0 or above versions installed to use this calculator effectively.
