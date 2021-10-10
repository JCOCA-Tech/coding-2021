# default
all:
	make helloworld
	make triangle
	make variables
	make datatypes
	make workingwithstrings
	make workingwithnumbers
	make gettinguserinput
	make buildingacalculator

helloworld: src/001_Hello\ World/HelloWorld.cpp
	rm -rdf -- bin/Linux/001_Hello\ World
	mkdir -p bin/Linux/001_Hello\ World
	g++ src/001_Hello\ World/HelloWorld.cpp -o bin/Linux/001_Hello\ World/HelloWorld

triangle: src/002_Triangle/Triangle.cpp
	rm -rdf -- bin/Linux/002_Triangle
	mkdir -p bin/Linux/002_Triangle
	g++ src/002_Triangle/Triangle.cpp -o bin/Linux/002_Triangle/Triangle

variables: src/003_Variables/Variables.cpp
	rm -rdf -- bin/Linux/003_Variables
	mkdir -p bin/Linux/003_Variables
	g++ src/003_Variables/Variables.cpp -o bin/Linux/003_Variables/Variables

datatypes: src/004_Data\ Types/DataTypes.cpp
	rm -rdf -- bin/Linux/004_Data\ Types
	mkdir -p bin/Linux/004_Data\ Types
	g++ src/004_Data\ Types/DataTypes.cpp -o bin/Linux/004_Data\ Types/DataTypes

workingwithstrings: src/005_Working\ with\ Strings/WorkingWithStrings.cpp
	rm -rdf -- bin/Linux/005_Working\ with\ Strings
	mkdir -p bin/Linux/005_Working\ with\ Strings
	g++ src/005_Working\ with\ Strings/WorkingWithStrings.cpp -o bin/Linux/005_Working\ with\ Strings/WorkingWithStrings.cpp

workingwithnumbers: src/006_Working\ with\ Numbers/WorkingWithNumbers.cpp
	rm -rdf -- bin/Linux/006_Working\ with\ Numbers
	mkdir -p bin/Linux/006_Working\ with\ Numbers
	g++ src/006_Working\ with\ Numbers/WorkingWithNumbers.cpp -o bin/Linux/006_Working\ with\ Numbers/WorkingWithNumbers.cpp

gettinguserinput: src/007_Getting\ User\ Input/GettingUserInput.cpp
	rm -rdf -- bin/Linux/007_Getting\ User\ Input
	mkdir -p bin/Linux/007_Getting\ User\ Input
	g++ src/007_Getting\ User\ Input/GettingUserInput.cpp -o bin/Linux/007_Getting\ User\ Input/GettingUserInput.cpp

buildingacalculator: src/008_Building\ a\ Calculator/BuildingACalculator.cpp
	rm -rdf -- bin/Linux/008_Building\ a\ Calculator
	mkdir -p bin/Linux/008_Building\ a\ Calculator
	g++ src/008_Building\ a\ Calculator/BuildingACalculator.cpp -o bin/Linux/008_Building\ a\ Calculator/BuildingACalculator.cpp
	
# clean
clean:
	rm -rfd -- bin/*
	rm -rfd -- src/*/*.o