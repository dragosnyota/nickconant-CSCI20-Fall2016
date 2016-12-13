finalprogram.exe : main.o characterclass.o combat.o
	g++ main.o characterclass.o combat.o -o finalprogram.exe
	
main.o : main.cpp
	g++ -Wall -c main.cpp
	
characterclass.o : characterclass.cpp
	g++ -Wall -c characterclass.cpp
	
combat.o : combat.cpp
	g++ -Wall -c combat.cpp
	
clean : 
	rm *.o finalprogram.exe