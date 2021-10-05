all: hw7.o
	gcc -o hw7 hw7.o

main.o: hw7.c
	gcc -c hw7.c
	
run:
	./hw7

clean: 
	rm hw7.o
