class Singleton:
    _instance = None
    def __new__(cls, *args, **kwargs):
        if cls._instance is None:
            cls._instance = super(Singleton, cls).__new__(cls)
        return cls._instance

    def __init__(self, value):
        self.value = value


obj1 = Singleton(1)
obj2 = Singleton(4)
print(id(obj1))
print(id(obj2))
print(obj1 is obj2)  
