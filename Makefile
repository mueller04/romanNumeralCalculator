
test: build
		@./output

build: src/convert.h src/convert.c src/convertToNumeral.c src/convertToNumeral.h test/convert_tests.c test/convert_tests.h
		@gcc -o output src/convert.h src/convert.c src/convertToNumeral.c src/convertToNumeral.h test/convert_tests.c test/convert_tests.h `pkg-config --cflags --libs check`

clean:
		@rm ./output
