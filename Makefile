
test: link
		@./output

link:  out/arithmetic.o out/convert.o out/convertToNumeral.o out/convert_tests.o
		@gcc -o output out/arithmetic.o out/convert.o out/convertToNumeral.o out/convert_tests.o `pkg-config --cflags --libs check`

convert_tests.o:  test/convert_tests.c test/convert_tests.h
		@gcc -c -o out/convert_tests.o test/convert_tests.c

convertToNumeral.o: src/convertToNumeral.c src/convertToNumeral.h
	@gcc -c -o out/convertToNumeral.o src/convertToNumeral.c

convert.o: src/convert.h src/convert.c
		@gcc -c -o out/convert.o src/convert.c

arithmetic.o: src/arithmetic.h src/arithmetic.c
		@gcc -c -o out/arithmetic.o src/arithmetic.c

clean:
		@rm ./output
