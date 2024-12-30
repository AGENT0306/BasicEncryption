#ifndef ENCRYPT_LIBRARY_H
#define ENCRYPT_LIBRARY_H
#include <string>
#include <vector>

class Encrypt {
    public:
        static std::string* encrypt(std::string *text);
        static std::string* decrypt(std::string *text);
        static std::vector<int>* convertToASCII(std::string *text);
        static std::string* convertToText(std::string *text);
    private:
        static constexpr int encryptNum = 1223;
};

#endif //ENCRYPT_LIBRARY_H