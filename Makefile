all:main_demo
CFLAGS=-g -O3
main_demo: new_personnel_management_system.o Bst_functions.o
	cc -o $@ $^

Bst_functions.o: Bst_functions.c Bst_Node.h
	cc -c $(CFLAGS) Bst_functions.c

new_personnel_management_system.o: new_personnel_management_system.c Bst_Node.h
	cc -c $(CFLAGS) new_personnel_management_system.c

demo:
	./main_demo

clean:
	rm -f *.o demo

