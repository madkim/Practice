// Void Pointer Example Program
#include <iostream>
using namespace std;

void increase (void* data, int psize)	//increaser function, takes in a void
					//pointer and an int	
{
  if ( psize == sizeof(char) )				//if the int is equal to
  							//the size of a char	
  
  { char* pchar; pchar=(char*)data; ++(*pchar); } 	//declare a char pointer
  							//pchar and set it equal to 
							//the function parameter data 
							//cast as a char*
							//dereference & increment
 
  else if (psize == sizeof(int) )			//otherwise if the int is
  							//equal to the size of an int
  
  { int* pint; pint=(int*)data; ++(*pint); }		//declare an int pointer
  							//pint and set it equal to
							//the function parameter
							//data cast as an int*
							//dereference & increment
  }

	int main ()
	{
	  char a = 'x';				//initialize a char 
	  int b = 1602;				//initialize an int
	  increase (&a,sizeof(a));		//pass in the address of the char
	  					//and its size in bytes

	  increase (&b,sizeof(b));		//pass in the address of the int 
	  					//and its size in bytes
	  
	  cout << a << ", " << b << '\n';	//print out the new values of a
	  					//and b
	  return 0;
	}

