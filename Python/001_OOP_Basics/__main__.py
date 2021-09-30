"""
A) Example problem:

    I want to pour water from a bottle into a glass.

    Ich möchte Wasser aus einer Flasche in ein Glas giessen.

B) Identified objects -> nouns:

    Bottle
    Water
    Glass

C) Identified functions -> verbs:

    pour()  ->  Bottle

"""
class Bottle:
    sizeInLiters=0
    amountLeftInLiters=0
    def __init__(self,sizeInLiters,amountLeftInLiters):
        self.sizeInLiters=sizeInLiters
        self.amountLeftInLiters=amountLeftInLiters
        print(f"[Bottle][Debug]: Bottle with size {self.sizeInLiters}L created")
    def pour(self,amountInLiters):
        if(self.amountLeftInLiters>=amountInLiters):
            self.amountLeftInLiters-amountInLiters
            return amountInLiters
        else:
            print(f"[Bottle][Debug]: Not enough water left ({self.amountLeftInLiters}L left)")
            return 0
class Glass:
    sizeInLiters=0
    amountLeftInLiters=0
    def __init__(self,sizeInLiters,amountLeftInLiters):
        self.sizeInLiters=sizeInLiters
        self.amountLeftInLiters=amountLeftInLiters
        print(f"[Glass][Debug]: Glass with size {self.sizeInLiters}L created")
    def fill(self,amountInLiters):
        if((self.sizeInLiters-self.amountLeftInLiters)>=amountInLiters):
            self.amountLeftInLiters+=amountInLiters
        else:
            print(f"[Glass][Debug]: Not enough space left ({self.amountLeftInLiters}L left)")
            return 0
    def query(self):
        print(f"[Glass][Debug]: {self.amountLeftInLiters}L filled")
bottle1 = Bottle(1,1) # Bottle is 1L in size and filled with 1L of water
bottle2 = Bottle(2,2)
bottle3 = Bottle(5,3)
glass1 = Glass(10,0) # Glass is 0.1L in size and not filled
glass1.query()
glass1.fill(bottle1.pour(1))
glass1.query()
glass1.fill(bottle2.pour(2))
glass1.query()
glass1.fill(bottle3.pour(3))
glass1.query()
