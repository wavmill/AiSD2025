CXX=g++

l0713256o=src/L0713_256.o tests/L0713_256test.o

L0713256.exe: $(l0713256o)
    $(CXX) -o L0713256.exe $(l0713256o)

src/L0713_256.o: src/L0713_256.cpp include/L0713_256.hpp
    $(CXX) -c src/L0713_256.cpp -Iinclude

tests/L0713_256test.o: tests/L0713_256test.cpp include/L0713_256.hpp
    $(CXX) -c tests/L0713_256test.cpp -Iinclude

.PHONY: clean
clean:
    rm -f $(l0713256o) L0713256.exe

