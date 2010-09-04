t1: t1.o
	gcc -o t1  -lstdc++ t1.o
t1.o: t1.cpp t1.h
	gcc -o t1.o  -I/home/lxl/workspace/test/ctest/c++ -c t1.cpp
clean:
	rm t1 t1.o