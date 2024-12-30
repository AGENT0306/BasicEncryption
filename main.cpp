#include "encrypt.h"
#include <string>


int main() {
    std::string *plaintext = new std::string("Hello World");
    Encrypt::encrypt(plaintext);
}
