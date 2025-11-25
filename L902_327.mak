l902327o = L902_327.o L902_327test.o
L902327.exe: $(l902327o)
 	$(CXX) -o L902327.exe $(l902327o)

L902_327.o: L902_327.cpp L902_327.hpp
 	$(CXX) -c L902_327.cpp

L902_327test.o: L902_327test.cpp L902_327.hpp
	$(CXX) -c L902_327test.cpp

.PHONY: clean run all
clean:
 	$(RM) $(objects) $(l902327o) m.exe L902327.exe

run:
	L902327.exe

all: L902327.exe run clean