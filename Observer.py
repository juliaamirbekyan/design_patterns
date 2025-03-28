class Shop:
    def __init__(self, name):
        self.name = name  

class Subscriber:
    def __init__(self, name):
        self.name = name

    def notification(self, shop, product_name):
        print(f"{self.name} received a notification from {shop.name}: New product - {product_name}!")

shop = Shop("MY SHOP")  
subscriber1 = Subscriber("Alice")
subscriber2 = Subscriber("Bob")
subscriber1.notification(shop, "Smartphone")
subscriber2.notification(shop, "Notebook")
