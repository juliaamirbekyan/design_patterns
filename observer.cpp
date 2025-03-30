#include <iostream>
#include <string>
using namespace std;

class Shop {
public:
    string name;
    Shop(const string& shopName) {
    name = shopName;
	}
};

class Subscriber {
public:
    string name;
    Subscriber(const string& subscriberName) {
    name = subscriberName;
	}

    void notification(const Shop& shop, const string& product_name) {
        cout << name << " received a notification from " << shop.name
             << ": New product - " << product_name << "!" << endl;
    }
};

int main() {
    Shop shop("MY SHOP");
    Subscriber subscriber1("Alice");
    Subscriber subscriber2("Bob");
    subscriber1.notification(shop, "Smartphone");
    subscriber2.notification(shop, "Notebook");
    return 0;
}
