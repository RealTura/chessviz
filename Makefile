all: bin/hello

bin/hello: build/main.o build/board.o build/boardC.o build/boardMove.o
	gcc -Wall -Werror build/main.o build/board.o build/boardC.o build/boardMove.o -o bin/hello

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/board.o

build/boardC.o: src/boardC.c
	gcc -Wall -Werror -c src/boardC.c -o build/boardC.o

build/boardMove.o: src/boardMove.c
	gcc -Wall -Werror -c src/boardMove.c -o build/boardMove.o

.PHONY : clean
clean:
	rm -rf build/*.o
