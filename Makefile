CC = gcc
CFLAG = -Wall -o

date-calc: date_calculator.c
	$(CC) $(CFLAG) $@ $<

clean:
	rm date-calc
