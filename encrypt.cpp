#include "encrypt.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string* Encrypt::encrypt(string *s) {
    vector<int>* convertedVector = Encrypt::convertToASCII(s);
    for (int i = 0; i < convertedVector->size(); i++) {
        convertedVector->at(i) = convertedVector->at(i) * encryptNum;
        cout << convertedVector->at(i) << endl;
    }
    return nullptr;
}

vector<int>* Encrypt::convertToASCII(string *s) {
    vector<int>* v;
    for (int i = 0; i < s->length(); i++) {
        v->push_back(static_cast<int>(s->at(i)));
    }
    cout << "test in ASCII'\n";
    return v;
}