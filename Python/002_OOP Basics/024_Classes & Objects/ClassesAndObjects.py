# Python program that uses classes and objects to represent realworld entities
class Book(): # A class is a custom datatype template or blueprint
    title="" # Attribute
    author=""
    pages=0

book1 = Book() # An object is an instance of a class
book2 = Book()

book1.title = "Harry Potter" # The objects attribute values can be directly modified
book1.author = "JK Rowling"
book1.pages = 500

book2.title = "Lord of the Rings"
book2.author = "Tolkien"
book2.pages = 700

print("\nTitle:\t", book1.title,"\nAuthor:\t",book1.author,"\nPages:\t",book1.pages) # Prints the attribute values of the first book object
print("\nTitle:\t", book2.title,"\nAuthor:\t",book2.author,"\nPages:\t",book2.pages) # Prints the attribute values of the second book object