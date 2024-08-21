all:
	g++ -std=c++11 ./Recursion/printAllSubSequence.cpp -o ./Recursion/printAllSubSequence.out
	g++ -std=c++11 ./Recursion/sum1toN.cpp -o ./Recursion/sum1toN.out
	g++ -std=c++11 ./Recursion/subSequence.cpp -o ./Recursion/subSequence.out
	g++ -std=c++11 ./Recursion/print1toNbackTrack.cpp -o ./Recursion/print1toNbackTrack.out
	g++ -std=c++11 ./Recursion/fibonacci.cpp -o ./Recursion/fibonacci.out
	g++ -std=c++11 ./Recursion/factorialN.cpp -o ./Recursion/factorialN.out
	g++ -std=c++11 ./Recursion/printNto1backTrack.cpp -o ./Recursion/printNto1backTrack.out
	g++ -std=c++11 ./Recursion/counter.cpp -o ./Recursion/counter.out
	g++ -std=c++11 ./Recursion/printAnySubSequenceWithGivenSum.cpp -o ./Recursion/printAnySubSequenceWithGivenSum.out
	g++ -std=c++11 ./Recursion/palindrome.cpp -o ./Recursion/palindrome.out
	g++ -std=c++11 ./Recursion/printNameNTimes.cpp -o ./Recursion/printNameNTimes.out
	g++ -std=c++11 ./Recursion/printAllSubSequenceWithGivenSum.cpp -o ./Recursion/printAllSubSequenceWithGivenSum.out
	g++ -std=c++11 ./Recursion/mergeSort.cpp -o ./Recursion/mergeSort.out
	g++ -std=c++11 ./Recursion/quickSort.cpp -o ./Recursion/quickSort.out
	g++ -std=c++11 ./Recursion/reverseArr.cpp -o ./Recursion/reverseArr.out
	g++ -std=c++11 ./LinkedLIst/convertArrToLL.cpp -o ./LinkedLIst/convertArrToLL.out
	g++ -std=c++11 ./DP/01knapSack.cpp -o ./DP/01knapSack.out

check:
	./Recursion/printAllSubSequence.out
	./Recursion/sum1toN.out
	./Recursion/subSequence.out
	./Recursion/print1toNbackTrack.out
	./Recursion/fibonacci.out
	./Recursion/factorialN.out
	./Recursion/printNto1backTrack.out
	./Recursion/counter.out
	./Recursion/printAnySubSequenceWithGivenSum.out
	./Recursion/palindrome.out
	./Recursion/printNameNTimes.out
	./Recursion/printAllSubSequenceWithGivenSum.out
	./Recursion/mergeSort.out
	./Recursion/quickSort.out
	./Recursion/reverseArr.out
	./LinkedLIst/convertArrToLL.out
	./DP/01knapSack.out

clean:
	rm -f ./**/*.out

distcheck:
	make clean
