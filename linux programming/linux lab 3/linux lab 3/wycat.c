/*
* wycat.c
* Author: Bryce Ostrem
* Date: Feb 18, 2020
*
* COSC 3750, Homework 4
*
* this program reads in file name and prints out the content to 
* 
*
*/
#include <stdio.h>
#include <string.h>
//using namespace std;
 // ARGC AND ARGV FOR MANIPULATIONG THE FILE INPUT
int main( int argc, char** argv){ 
	 //  FILE VARIABLE FOR INPUT 
	 	FILE *infile; 
	//  FILE VARIABLE FOR OUTPOUT
	FILE *outfile; 
	// changes trhe buffer size
	char buffer[4096]; 
	// creates file to save information to
	outfile = fopen("savedData.txt", "w");
	// loops through the inpu arguments
	for(int i=0; i< argc; i++){

	// opens file for reading
	infile = fopen(argv[i] , "r");
	//checks the return value
	if (infile == NULL){
			fwrite("cannot open the file", sizeof(buffer),sizeof(buffer),stdout);
			
	}else{
	// checks to see if intaking stdin values
	if(argv == NULL || strstr(argv[i], "-") != NULL ){
		// prints directions for the user
		fwrite(" please enter text then press enter\n", sizeof(buffer), sizeof(buffer),stdout);
		// gets the user input
		 fgets(buffer, sizeof(buffer),stdin);
	}else{
		
	// reads in the data and sets it equal to a value
	fread(buffer, sizeof(buffer), 1, infile);
	}
	}
	// outputs the info to the main output device
	fwrite(buffer, sizeof(buffer),sizeof(buffer),stdout);
	
	// closes the in file
	fclose(infile);
	
}
// closes the out file
fclose(outfile);
}
