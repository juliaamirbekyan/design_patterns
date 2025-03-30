#include <iostream>
using namespace std;

class Singleton {
    static Singleton instance;
    int num;

public:
    static Singleton& getInstance() {
        return instance;
    }

    void showMessage() {
        cout << "Singleton instance address: " << this << ", num: " << num << endl;
    }

private:
    Singleton(int n = 0) : num(n) {} 
};

Singleton Singleton::instance(42);

int main() {
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    s1.showMessage();
    s2.showMessage();

    return 0;
}
