CC := gcc
#CFLAGS := 
DEST := ./build/

all: string.c
	mkdir -p build
	$(CC) string.c -lcs50 -o $(DEST)/string 