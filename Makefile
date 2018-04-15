all: hello

hello: build/main.o build/board.o build/boardC.o build/boardMove.o
	gcc -Wall -Werror build/main.o build/board.o build/boardC.o build/boardMove.o -o hello

build/main.o: main.c
	gcc -Wall -Werror -c main.c -o build/main.o

build/board.o: board.c
	gcc -Wall -Werror -c board.c -o build/board.o

build/boardC.o: boardC.c
	gcc -Wall -Werror -c boardC.c -o build/boardC.o

build/boardMove.o: boardMove.c
	gcc -Wall -Werror -c boardMove.c -o build/boardMove.o

.PHONY : clean
clean:
	rm -rf build/*.o
