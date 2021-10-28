"""
title="Tagebuch"
author="Jovi"
pages="4500"

#print(title)
#print(author)
#print(pages)

title2="Tagebuch 44"
author2="Jorlly"
pages2=100

print(title)
print(author)
print(pages)
"""

class Book():
    title=""
    author=""
    pages=0

    def hello(self):
        print("hello")

book1 = Book()
book2 = Book()

book1.title = "Tagebuch"
book2.title = "Tagebuch 44"


print(book1.title)
print(book1.author)
print(book1.pages)

print(book2.title)
print(book2.author)
print(book2.pages)

book1.hello()