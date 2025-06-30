GXX := g++
CXXFLAGS := -O3 -Wall -Wextra
SFMLFLAGS := -lsfml-system -lsfml-window -lsfml-graphics
OBJ = bin/main.o bin/MainWindow.o

eje: $(OBJ)
	$(GXX) $(GXXFLAGS) -o eje $(OBJ) $(SFMLFLAGS)

bin/%.o: src/%.cpp
	$(GXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f bin/*.o eje
