all:static_library

static_library:
	gcc -c *.c
	ar rc libmy.a *.o
	cp libmy.a ..
	cp my.h ../../include

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf *.h
	
