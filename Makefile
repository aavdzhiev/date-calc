CC = gcc
CFLAG = -Wall -o

main: main.c
	$(CC) $(CFLAG) $@ $<

clean:
	rm main
