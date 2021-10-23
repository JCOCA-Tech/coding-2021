class Movie:

    _rating = ""
    title = ""
    director = ""

    @property
    def rating(self): return self._rating

    @rating.setter
    def rating(self, rating="NR"):
        rating = rating
        if(rating == "G" or (rating == "PG" or (rating == "PG-13" or (rating == "R" or rating == "NR")))):
            self._rating = rating
            print("[DEBUG]: Rating set to default value \"", self.rating, "\"")
        else:
            self._rating = "NR"
            print("[ERROR]: Value is not a valid rating. Rating was instead set to default value \"NR\"")
    
    @rating.getter
    def rating(self): return self._rating

    def __init__(self, title="No title", director="No director", rating="NR"):
        print("[DEBUG]: creating object [\"", title, "\", \"", director, "\", \"", rating, "\"]...")
        self.title = title
        self.director = director
        self.rating = rating
        print("[DEBUG]: Object created [\"", self.title, "\", \"", self.director, "\", \"", self.rating, "]")
        print("[DEBUG]: Done")

avengers = Movie("The Avengers", "Joss Whedon", "PG-13")
oblivion = Movie("Oblivion", "Joseph Kosinski", "PG-1")
interstellar = Movie("Interstellar", "Christopher Nolan", "PG")
transcendence = Movie("Transcendence", "Wally Pfister", "PG-11")

Movies = [avengers, oblivion, interstellar, transcendence]

for movie in Movies:
    print("\nTitle:\t\t", movie.title)
    print("Director:\t", movie.director)
    print("Rating:\t\t", movie.rating)