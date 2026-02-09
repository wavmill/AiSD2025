l0902327o = L0902_327.o L0902_327test.o
L0902327.exe: $(l0902327o)
 	$(CXX) -o L0902327.exe $(l0902327o)

L0902_327.o: L0902_327.cpp L0902_327.hpp
 	$(CXX) -c L0902_327.cpp

L0902_327test.o: L0902_327test.cpp L0902_327.hpp
	$(CXX) -c L0902_327test.cpp

.PHONY: clean run all
clean:
 	$(RM) $(objects) $(l0902327o) m.exe L0902327.exe

run:
	L0902327.exe

all: L0902327.exe run clean