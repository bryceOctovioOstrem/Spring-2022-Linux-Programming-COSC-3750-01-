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
#include <iostream>
using namespace std;
 // ARGC AND ARGV FOR MANIPULATIONG THE FILE INPUT
int main( int argc, char** argv){ 
	 //  FILE VARIABLE FOR INPUT 
	//  FILE VARIABLE FOR OUTPOUT
	FILE *outfile; 
	// changes trhe buffer size
	char buffer[4096]; 
	//string for holding characters
	string words;
	// creates file to save information to
	*outfile = fopen("savedData.txt", "w")
	// loops through the inpu arguments
	for(int i=0; i< argc; i++){

	// opens file for reading
	*infile = fopen(argv[i] , "r");
	//checks the return value
	if (*infile == NULL){
			fwrite("cannot open the file", sizeof(buffer),sizeof(buffer),stdout);
			
	}else{
	// checks to see if intaking stdin values
	if(argv == NULL || strstr(sent, "-") != NUL ){
		// prints directions for the user
		fwrite(" please enter text then press enter\n", sizeof(buffer), sizeof(buffer),stdout)<< " please enter text then press enter\n";
		// gets the user input
		scanf(%s,words);
	}else{
		
	// reads in the data and sets it equal to a value
	fread(words, sizeof(buffer), 1, *infile) = words;
	}
	}
	// outputs the info to the main output device
	fwrite(words, sizeof(buffer),sizeof(buffer),stdout);
	
	// closes the in file
	fclose(*infile);
	
}
// closes the out file
fclose(*outfile);
}