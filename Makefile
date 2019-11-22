run: compile
	./compile

compile: main.o tas.o #file.o file_prio.o
	gcc -Wall -o compile main.o tas.o -lpthread #file.o file_prio.o

#file.o: file.c file.h
	#gcc -Wall -c file.c

tas.o: tas.c tas.h
	gcc -Wall -c tas.c

main.o: main.c
	gcc -Wall -c main.c

#file_prio.o: file_prio.c file_prio.h file.h
	#gcc -c -Wall file_prio.c

clean:
	rm -f *.o
