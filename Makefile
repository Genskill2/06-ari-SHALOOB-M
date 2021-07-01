.PHONY: clean test

ari: ari.c main.c
	gcc -Wall -g ari.c main.c -o ari -lcs50 -lm 

test: ari
	./ari


clean: 
	rm -f ari
