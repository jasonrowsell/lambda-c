all: clean
	gcc lambda.c -o lambda

clean:
	rm -f lambda
