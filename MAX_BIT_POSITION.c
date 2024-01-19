// Created by AJ DiLeo
// For use in CS211 Fall 2023 ONLY

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>

#define MAX_BIT_POSITION 32

// Cache for storing FizzBuzz results for each bit position
char cache[MAX_BIT_POSITION][3];

// Initialize the cache with FizzBuzz results
void preComputeResults() {
    // TODO: For every possible position, pre-compute its corresponding string output
	// Make sure to handle the case where you will not replace the bit with Z, R, or U
	// Your advancedBitwiseFizzBuzz() code should know when to use the replacement and when to use the bit
    // Use 'Z' for numbers divisible by 3 and 5, 'R' for divisible by 3, and 'U' for divisible by 5
    
    
    //0-31 -> 1 -> 0 1 2 3 4 
    //1  0 1 0 1 5 .... 31 
    //0 1 2 ...30 
    int i=0;
    for(i=0;i<MAX_BIT_POSITION-1;i++){
        if(cache[i][0] == '0'){
            cache[i][2] = '0';
        }else if(i % 5 == 0 && i  % 3 == 0){
            cache[i][2]='Z';
        }else if(i % 3 == 0){
            cache[i][2] = 'R';
        }else if(i % 5 == 0){
            cache[i][2] = 'U';
        }else{
            cache[i][2]='1';
        }
    }
}

// Retrieve the FizzBuzz result for a specific bit position
char* getFizzBuzzForBit(int position) {
    // TODO: Return the FizzBuzz result for the given position from the cache
    return  &cache[position][2];
}

// Perform the advanced Bitwise FizzBuzz logic on the given number
void advancedBitwiseFizzBuzz(int32_t N) {
    // TODO: Implement the advanced Bitwise FizzBuzz logic
    // - For each bit in the number, apply the FizzBuzz logic
    // - Replace the MSb with 'S' if it's set
    // - Print each bit or its FizzBuzz result
    // - Format the output with a space every four bits

	// Each bitstring should be outputted from Left -> Right, MSb -> LSb
	// Index 0 of the bitstring should be the LSb
	// E.g., 
	// 1  0  0 1 0 0 0 1 1 1 0 0   <=== bitstring
	// 11 10 9 8 7 6 5 4 3 2 1 0   <=== indices
    int b,i;
    //set all bit 
    for ( i = MAX_BIT_POSITION-1; i >= 0; i--) {
       b = (N >> i) & 1;
       cache[i][0] ='0' + b;
    }
    if(cache[MAX_BIT_POSITION-1][0] == '1'){
        cache[MAX_BIT_POSITION-1][2]='S';
    }else{
        cache[MAX_BIT_POSITION-1][2]='0';
    }

    //opr
    preComputeResults();

    for(i=MAX_BIT_POSITION-1;i>=0;i--){
        printf("%c",cache[i][2]);
        if(i%4==0)
           printf(" ");
    }

}

// Main function to run the program
int main(int argc, char *argv[]) {
    // TODO: Parse the command line argument to get the input number
    // Use strtol to convert the string to a long integer
    
    int32_t num ;
    int i,j;

    long data = strtol(argv[1],NULL,0);

    // Check if the number is within the range of a 32-bit signed integer
	// If so, print "Number out of range for a 32-bit integer\n"
    if(data < INT32_MIN || data > INT32_MAX ){
        printf("Number out of range for a 32-bit integer\n");
        return 0;
    }

    // TODO: Initialize the cache
    // TODO: Call advancedBitwiseFizzBuzz with the parsed number
	// Make sure the number is an int32_t
 
    //cast data into int32_t 
    num = (int32_t)data;

    //initialize the cache 
    for(i=0;i<MAX_BIT_POSITION;i++){
        for(j=0;j<MAX_BIT_POSITION;j++){
            cache[i][j] = 0;
        }
    }
    
    //call advancedBitwiseFizzBuzz
    advancedBitwiseFizzBuzz(num);
 
    return 0;
}