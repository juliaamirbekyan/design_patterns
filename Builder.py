class House:
    def __init__(self, rooms, bathrooms, garage, pool, garden):
        self.rooms = rooms
        self.bathrooms = bathrooms
        self.garage = garage
        self.pool = pool
        self.garden = garden

    def get_details(self):
        return {
            "Rooms": self.rooms,
            "Bathrooms": self.bathrooms,
            "Garage": self.garage,
            "Pool": self.pool,
            "Garden": self.garden
        }

class HouseBuilder:
    def __init__(self):
        self.rooms = 0
        self.bathrooms = 0
        self.garage = False
        self.pool = False
        self.garden = False

    def set_rooms(self, rooms):
        self.rooms = rooms
        return self

    def set_bathrooms(self, bathrooms):
        self.bathrooms = bathrooms
        return self

    def add_garage(self):
        self.garage = True
        return self

    def add_pool(self):
        self.pool = True
        return self

    def add_garden(self):
        self.garden = True
        return self

    def build(self):
        return House(self.rooms, self.bathrooms, self.garage, self.pool, self.garden)


house = HouseBuilder().set_rooms(3).set_bathrooms(1).add_garage().add_garden().build()

print(house.get_details())
