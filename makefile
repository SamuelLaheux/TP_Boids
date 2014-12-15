test.out: main.o bwindow.o boids.o agent.o
	g++ -o test.out main.o bwindow.o boids.o agent.o -lX11 -L/usr/X11R6/lib

main.o: main.cpp
	g++ -c main.cpp 

bwindow.o: bwindow.cpp bwindow.h
	g++ -c bwindow.cpp

boids.o: boids.h boids.cpp agent.h
	g++ -c boids.cpp

agent.o: agent.cpp agent.h
	g++ -c agent.cpp

clean :
	rm *.o *.out