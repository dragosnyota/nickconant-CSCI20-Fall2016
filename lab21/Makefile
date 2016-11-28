lab21.exe : main.o myclass.o
	g++ main.o myclass.o -o lab21.exe
	
main.o : main.cpp myclass.cpp myclass.h
	g++ -Wall -c main.cpp
	
myclass.o : myclass.cpp myclass.h
	g++ -Wall -c myclass.cpp
	
clean : 
	rm *.o lab21.exe