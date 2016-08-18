
test: build
		@./output

build: src/arithmetic.h src/arithmetic.c src/convert.h src/convert.c src/convertToNumeral.c src/convertToNumeral.h test/convert_tests.c test/convert_tests.h
		@gcc -o output src/arithmetic.c src/convert.c src/convertToNumeral.c test/convert_tests.c `pkg-config --cflags --libs check`

clean:
		@rm ./output
