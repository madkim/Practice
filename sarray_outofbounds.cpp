#include <iostream>
using namespace std;

int main(){

	int sarray[] = {5, 10, 15};	//initialize new array of type int 
	int * p = sarray;		//initialize new pointer of type int which
					//points at address of sarray[0]

	int sarray_size = sizeof(sarray)/sizeof(sarray[0]); 	//get the # of
								//elements in
								//sarray

	while(p != sarray + 4){			//should print out values held in
						//sarray; however, since sarray is 
						//an array of 3 elements, adding 4 to
						//sarray will move the pointer past the 
						//block of memory initialized for the
						//array ultimately printing out a random 
						//number allocated to that memory
						//address at runtime. 
	
		cout << *p++ << endl; 		//print out value held in address
						//pointed to by p
		}
}
