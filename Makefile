
test: build
		@./output

build: src/*.h src/*.c test/*.c test/*.h
		@gcc -o output src/*.h src/*.c test/*.c test/*.h `pkg-config --cflags --libs check`

clean:
		@rm ./output
