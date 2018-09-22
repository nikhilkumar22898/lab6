// library
//Sum of even and odd
#include<iostream>
using namespace std;

//1.Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value.

int sumEvenNumbers (int firstNum, int secondNum, int sumEven) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2==0){
			sumEven = sumEven+n;
		}
	
	}
		
	return sumEven;
}



/*2.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/



int sumOddNumbers (int firstNum, int secondNum, int sumOdd) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2!=0){
			sumOdd = sumOdd+n;
		}
	
	}
		
	return sumOdd;
}
