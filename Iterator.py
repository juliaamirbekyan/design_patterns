class BookIterator:
    def __init__(self, books):
        self.books = books
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index >= len(self.books):
            raise StopIteration
        book = self.books[self.index]
        self.index += 1
        return book

class Library:
    def __init__(self, books):
        self.books = books

    def __iter__(self):
        return BookIterator(self.books)


library = Library(["Book 1", "Book 2", "Book 3"])
for book in library:
    print(book)
