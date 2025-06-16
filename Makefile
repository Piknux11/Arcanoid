GXX := g++ # Compiler
CFLAGS := -O2 -Wall -Wextra -std=c++17 -I/usr/include/SFML
SFMLFLAGS := -L/usr/include/SFML -lsfml-graphics -lsfml-system -lsfml-window

arcanoid: bin/main.o bin/MainWindow.o bin/Ball.o bin/Vaus.o
	$(GXX) $(CFLAGS) -o arcanoid bin/main.o bin/MainWindow.o bin/Ball.o bin/Vaus.o $(SFMLFLAGS)

bin/main.o: src/MainWindow/MainWindow.hpp src/main.cpp 
	$(CXX) -c src/main.cpp -o bin/main.o

bin/Ball.o: src/Ball/Ball.hpp src/GameProperties.hpp src/Ball/Ball.cpp
	$(CXX) -c src/Ball/Ball.cpp -o bin/Ball.o

bin/Vaus.o: src/Vaus/Vaus.hpp src/GameProperties.hpp src/Vaus/Vaus.cpp
	$(CXX) -c src/Vaus/Vaus.cpp -o bin/Vaus.o

bin/MainWindow.o: src/MainWindow/MainWindow.hpp src/Ball/Ball.hpp src/Vaus/Vaus.hpp src/GameProperties.hpp src/MainWindow/MainWindow.cpp
	$(CXX) -c src/MainWindow/MainWindow.cpp -o bin/MainWindow.o 

clean:
	rm -f bin/*.o && rm -f arcanoid
