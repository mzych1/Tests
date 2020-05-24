CC=gcc

all: testowanie

testowanie: main.c testy.c funkcje.c
		$(CC) main.c testy.c funkcje.c -o testowanie -lcunit
