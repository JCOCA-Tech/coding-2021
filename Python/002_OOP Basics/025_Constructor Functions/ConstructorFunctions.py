class Book(): #  A class is a custom datatype template or blueprint
    title=""
    author=""
    pages=0

    
    def __init__(self, title = "No title", author = "No author", pages = 0): # Constructor using all 3 arguments or default values
        print("[DEBUG]: Creating book object [\"", title, "\", \"", author, "\", \"", pages, "\"]...")
        self.title = title
        self.author = author
        self.pages = pages
        print("[DEBUG]: Done")

"""
book1 = Book() # An object is an instance of a class
book1.title = "Harry Potter" # The objects public attributes can be directly modified
book1.author = "JK Rowling"
book1.pages = 500

book2 = Book()
book2.title = "Lord of the Rings";
book2.author = "Tolkien";
book2.pages = 700;

print("Title:\t", book1.title) # Prints the title of the first book object
print("Title:\t", book2.title) # Prints the title of the second book object
"""

book1 = Book("Harry Potter","JK Rowling",500) # Does the same as the above using the classes constructor
book2 = Book("Lord of the Rings","Tolkien",700)

book1.author = "J.K. Rowling" # attribute values can still be directly accessed

book3 = Book() # New book object without passing arguments. In this case the default values will be used instead

"""
This prints all the books attributes
"""

bookshelf = [book1, book2, book3] # Array with all 3 books

for book in bookshelf: # Print all book attribute values
    print("\nTitle:\t", book.title, "\nAuthor:\t", book.author, "\nPages\t", book.pages)