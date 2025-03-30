#include <iostream>
#include <string>
using namespace std;

class House {
public:
    int rooms;
    int bathrooms;
    bool garage;
    bool pool;
    bool garden;

    House(int rooms, int bathrooms, bool garage, bool pool, bool garden) {
        this->rooms = rooms;
        this->bathrooms = bathrooms;
        this->garage = garage;
        this->pool = pool;
        this->garden = garden;
    }

    void get_details() {
        cout << "Rooms: " << rooms <<endl;
        cout << "Bathrooms: " << bathrooms <<endl;
        cout << "Garage: " << (garage ? "Yes" : "No") <<endl;
        cout << "Pool: " << (pool ? "Yes" : "No") <<endl;
        cout << "Garden: " << (garden ? "Yes" : "No") <<endl;
    }
};

class HouseBuilder {
private:
    int rooms;
    int bathrooms;
    bool garage;
    bool pool;
    bool garden;

public:
    HouseBuilder() : rooms(0), bathrooms(0), garage(false), pool(false), garden(false) {}

    HouseBuilder& set_rooms(int rooms) {
        this->rooms = rooms;
        return *this;
    }

    HouseBuilder& set_bathrooms(int bathrooms) {
        this->bathrooms = bathrooms;
        return *this;
    }

    HouseBuilder& add_garage() {
        this->garage = true;
        return *this;
    }

    HouseBuilder& add_pool() {
        this->pool = true;
        return *this;
    }

    HouseBuilder& add_garden() {
        this->garden = true;
        return *this;
    }

    House build() {
        return House(rooms, bathrooms, garage, pool, garden);
    }
};

int main() {
    House house = HouseBuilder().set_rooms(3).set_bathrooms(1).add_garage().add_garden().build();

    house.get_details();

    return 0;
}
