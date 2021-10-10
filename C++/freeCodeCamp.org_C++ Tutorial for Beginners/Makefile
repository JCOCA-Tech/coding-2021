# default
all:
	make helloworld
	make triangle
	make variables
	make datatypes

helloworld: src/001_Hello\ World/HelloWorld.cpp
	rm -rdf -- bin/001_Hello\ World
	mkdir bin/001_Hello\ World
	g++ src/001_Hello\ World/HelloWorld.cpp -o bin/001_Hello\ World/HelloWorld

triangle: src/002_Triangle/Triangle.cpp
	rm -rdf -- bin/002_Triangle
	mkdir bin/002_Triangle
	g++ src/002_Triangle/Triangle.cpp -o bin/002_Triangle/Triangle

variables: src/003_Variables/Variables.cpp
	rm -rdf -- bin/003_Variables
	mkdir bin/003_Variables
	g++ src/003_Variables/Variables.cpp -o bin/003_Variables/Variables

datatypes: src/004_Data\ Types/DataTypes.cpp
	rm -rdf -- bin/004_Data\ Types
	mkdir bin/004_Data\ Types
	g++ src/004_Data\ Types/DataTypes.cpp -o bin/004_Data\ Types/DataTypes

workingwithstrings: src/005_Working\ with\ Strings/WorkingWithStrings.cpp
	rm -rdf -- bin/005_Working\ with\ Strings
	mkdir bin/005_Working\ with\ Strings
	g++ src/005_Working\ with\ Strings/WorkingWithStrings.cpp -o bin/005_Working\ with\ Strings/WorkingWithStrings.cpp

# clean
clean:
	rm -rfd -- bin/*
	rm -rfd -- src/*/*.o