class Chef: # Chef is a superclass

    def makeChicken(self):
        print("The chef makes chicken")
    
    def makeSalad(self):
        print("The chef makes salad")
    
    def makeSpecialDish(self):
        print("The chef makes bbc ribs")

class ItalianChef(Chef): # inherit the Chef class. ItalianChef is a subclass of the Chef class
    
    def makePasta(self):
        print("The italian chef makes pasta")
    
    def makeSpecialDish(self):
        print("The italian chef makes chicken parm")

chef1 = Chef()
chef1.makeChicken()

chef2 = ItalianChef()
chef2.makeChicken()

chef1.makeSpecialDish()
chef2.makeSpecialDish()