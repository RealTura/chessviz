default: bin/hello

test: bin/chessviz-test
	bin/chessviz-test

bin/hello: build/main.o build/board.o build/boardC.o build/boardMove.o
	gcc -Wall -Werror build/main.o build/board.o build/boardC.o build/boardMove.o -o bin/hello

bin/chessviz-test: build/main_test.o build/board.o build/boardC.o build/boardMove.o
	gcc -Wall -Werror build/main_test.o build/board.o build/boardC.o build/boardMove.o -o bin/chessviz-test

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -std=c99 -Wall -Werror -c src/board.c -o build/board.o

build/boardC.o: src/boardC.c
	gcc -std=c99 -Wall -Werror -c src/boardC.c -o build/boardC.o

build/boardMove.o: src/boardMove.c
	gcc -std=c99 -Wall -Werror -c src/boardMove.c -o build/boardMove.o

build/main_test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/main_test.o

.PHONY : clean
clean:
	rm -rf build/*.o
