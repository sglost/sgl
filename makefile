bin/main:obj/mygets.o obj/ex1.o
	gcc $^ -o $@ -Wall -I include/
	
obj/%.o:src/%.c
	 gcc -c $^ -o $@ -I include/


