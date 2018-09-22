// library
#include<iostream>
using namespace std;
	//Write a program with a function that takes two int parameters, adds them together.
	int addition(int a,int b){
		int c=a+b;
		return c;
		}
	int main(){
		//declaring two integers
			int a,b;
		//ask the user for two numbers
			cout<<"what is the value of a & b?"<<endl;
			cin>>a>>b;
		//call the function with the numbers as arguments
			int z;
			z=addition(a,b);
		//tell the user the sum
			cout<<"the sum of two numbers is"<<z<<endl;
		return 0;
}
