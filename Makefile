runstack: Stackmain.o Stack.o
	g++ -std=c++11 -o runstack Stackmain.o Stack.o

Stackmain.o: Stackmain.cpp
	g++ -std=c++11 -c Stackmain.cpp

Stack.o: Stack.h Stack.cpp
	g++ -std=c++11 -c Stack.cpp

clean:
	rm runstack Stackmain.o Stack.o