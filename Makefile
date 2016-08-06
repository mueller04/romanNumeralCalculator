
test: build
		@./output

build: src/convert.h src/convert.c test/convert_tests.c test/convert_tests.h test/arithmetic_tests.c test/arithmetic_tests.h
		@gcc -o output src/convert.h src/convert.c test/convert_tests.c test/convert_tests.h test/arithmetic_tests.c test/arithmetic_tests.h `pkg-config --cflags --libs check`

clean:
		@rm ./output
