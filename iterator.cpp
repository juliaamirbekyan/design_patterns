#include <iostream>
#include <string>
using namespace std;

class Library {
    string books[3];
    int index = 0;
public:
    Library() {
        books[0] = "Book 1";
        books[1] = "Book 2";
        books[2] = "Book 3";
    }
    bool hasNext() {
        return index < 3;
    }
    string next() {
        return books[index++];
    }
};

int main() {
    Library library;
    while (library.hasNext()) {
        cout << library.next() << endl;
    }
    return 0;
}