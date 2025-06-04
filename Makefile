GXX := g++ # Compiler
CFLAGS := -O2 -Wall -Wextra
SFMLFLAGS := -lsfml-graphics -lsfml-system -lsfml-window

arcanoid: bin/main.o bin/MainWindow.o
	$(GXX) $(CFLAGS) -o arcanoid bin/main.o bin/MainWindow.o $(SFMLFLAGS)

bin/main.o: src/MainWindow/MainWindow.hpp  
	$(CXX) -c src/main.cpp -o bin/main.o

bin/MainWindow.o: src/MainWindow/MainWindow.hpp
	$(CXX) -c src/MainWindow/MainWindow.cpp -o bin/MainWindow.o 

clean:
	rm -f bin/*.o && rm -f arcanoid
