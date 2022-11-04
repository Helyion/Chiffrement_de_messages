GCC = gcc
SOURCES = $(wildcard *.c)
BINAIRES = $(patsubst %.c,%.o,${SOURCES})


all: main

main: ${BINAIRES}
#${GCC} Encodage.o main.c -o main
	${GCC} $^ -o $@

#Encodage.o: Encodage.c 
%.o: %.c Encodage.h
#${GCC} -c Encodage.c
	${GCC} -c $<
	
clean:
	rm main
	rm *.o