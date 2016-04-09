#include <iostream>
using namespace std;

int main(){

	int sarray[] = {5, 10, 15};	//initialize new array of type int 

	int * p = sarray;		//initialize new pointer of type int which
					//points at address in memory of sarray[0]

	int sarray_size = sizeof(sarray)/sizeof(sarray[0]); 	//get the # of
	// (# of bytes in array) / (# of bytes in 1 element)	//elements in
								//sarray

	while(p != sarray + sarray_size){	//while the pointer does not point
						//to the address of the last element
						//in sarray	
		
		cout << *p++ << endl; 		//increment p and print out value
						//held in the previous address
						//pointed to by p 
						//Same as *(p++)
		}
}
