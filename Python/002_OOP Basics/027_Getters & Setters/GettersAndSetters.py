class Movie:

    _rating = ""
    title = ""
    director = ""

    def __init__(self, title, director, rating):
        print("[DEBUG]: creating object [\"", title, "\", \"", director, "\", \"", rating, "\"]...")
        self.title = title
        self.director = director
        self.set_rating(rating)
        print("[DEBUG]: Object created [\"", self.title, "\", \"", self.director, "\", \"", self.get_rating, "]")
        print("[DEBUG]: Done")

    @property
    def set_rating(self, rating):
        if(rating == "G" or rating == "PG" or rating == "PG-13" or rating == "R" or rating == "NR"):
            self.set_rating = rating
            print("[DEBUG]: Rating set to default value \"", self.get_rating(), "\"")
        else:
            self.set_rating = "NR"
            print("[ERROR]: Value \"", self.get_rating(), "\" is not a valid rating. Rating was instead set to default value \"NR\"")
    
    @property
    def get_rating(self):
        return self.get_rating

avengers = Movie("The Avengers", "Joss Whedon", "PG-13")
oblivion = Movie("Oblivion", "Joseph Kosinski", "PG-13")
interstellar = Movie("Interstellar", "Christopher Nolan", "PG-13")
transcendence = Movie("Transcendence", "Wally Pfister", "PG-13")

Movies = [avengers, oblivion, interstellar, transcendence]

for movie in Movies:
    print("Title:\t\t", movie.title)
    print("Director:\t", movie.director)
    print("Rating:\t\t", movie.getRating())