CC=g++

all: MyCpp1 MyCpp2

MyCpp1:
	$(CC) $@.cpp -o $@

MyCpp2:
	$(CC) $@.cpp -o $@

clean:
	rm -f MyCpp1
	rm -f MyCpp2

purge:
	rm solution*.txt
