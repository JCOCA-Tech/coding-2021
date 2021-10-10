
output: src/main.o  src/message.o
	g++ src/main.o src/message.o -o bin/output

main.o: main.cpp
	g++ -c src/main.cpp

message.o: src/message.cpp src/message.h
	g++ -c src/message.cpp

clean:
	rm src/*.o bin/output
