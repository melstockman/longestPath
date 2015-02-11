#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;


int findLongestPath( string *matrix )
{

	string newMatrix;

	findLongestPath(newMatrix);
	
}

int main(int argc, char **argv) 
{
  string line;
  
    
  ifstream inFile(argv[1]);

  if (inFile.is_open())
  {
    while ( getline(inFile,line) )
    {
		int n = (int) sqrt((double) line.length()); 
		// put in matrix format
		for (int i=0; i<n; i++)      
		{
			for (int j=0; j<n; j++)
			{
				matrix[i][j] = line[(n*j)+i];
				cout << matrix[i][j] << " ";
			}
			cout << endln;
		}

	}
    inFile.close();
  }
  else 
	cout << "Unable to open file %s"  << argv[1]; 

  return 0;
}

