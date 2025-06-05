GXX := g++ # Compiler
CFLAGS := -O2 -Wall -Wextra
SFMLFLAGS := -lsfml-graphics -lsfml-system -lsfml-window

arcanoid: bin/main.o bin/MainWindow.o bin/Ball.o
	$(GXX) $(CFLAGS) -o arcanoid bin/main.o bin/MainWindow.o bin/Ball.o $(SFMLFLAGS)

bin/main.o: src/MainWindow/MainWindow.hpp  
	$(CXX) -c src/main.cpp -o bin/main.o

bin/Ball.o: src/Ball/Ball.hpp src/Ball/Ball.cpp
	$(CXX) -c src/Ball/Ball.cpp -o bin/Ball.o

bin/MainWindow.o: src/MainWindow/MainWindow.hpp src/MainWindow/MainWindow.cpp src/Ball/Ball.hpp src/Header.hpp
	$(CXX) -c src/MainWindow/MainWindow.cpp -o bin/MainWindow.o 

clean:
	rm -f bin/*.o && rm -f arcanoid
