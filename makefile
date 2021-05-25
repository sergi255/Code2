.PHONY: clean

.SUFFIXES: .c .o
c.o:
	gcc -c $<
Code2: main.o pola.a objetosc.so
	gcc -o $@ pola.o objetosc.o main.o
pola.o: pola.c
objetosc.o: objetosc.c
main.o: main.c
pola.a: pola.o
	ar rc pola.a $<
	ranlib pola.a
objetosc.so: objetosc.o
	gcc -shared -o objetosc.so $<
clean:
	rm  -f Code2 *.o *.a *.so

