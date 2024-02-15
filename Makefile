all:
	g++ ./Recursion/counter.cpp -o ./Recursion/counter.out
	g++ ./Recursion/factorialN.cpp -o ./Recursion/factorialN.out
	g++ ./Recursion/fibonacci.cpp -o ./Recursion/fibonacci.out
	g++ ./Recursion/palindrome.cpp -o ./Recursion/palindrome.out
	

check:
	./Recursion/counter.out
	./Recursion/factorialN.out
	./Recursion/fibonacci.out
	./Recursion/palindrome.out

clean:
	rm -f ./Recursion/*.out

distcheck:
	make clean