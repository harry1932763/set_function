#include <stdio.h>
#include <string.h>

char *set(char input_array[]);


int main(void) {
  // printf("Hello World\n");
  printf("%s", set("h1234567890ello everyo0ne")); 
  return 0;
}

char *set(char input_array[]){
  // counts the matches found
  int match = 0;
  // keeps track of index of set_array
  int position = 0;
  // stores length of input_array
  int length = strlen(input_array);
  // 
  char set_array[length]; 
  // for all the elements in the array
  for (int i = 0; i < length; i++){
    // give each index of set_array a value of 0 to be compared against
    set_array[i] = 0; 
    // for all the elements in the array
    for(int j = 0; j < length; j++){    
      // compares the elements of input_array with set_array
      if (input_array[i] == set_array[j]){
        // if a match is found increment match
        match++;
        }
      }
      // if no match is found after comparing the arrays then put the current element into the set_array and increment the position of the index for storing the next element. 
      if (match == 0){
        set_array[position] = input_array[i];
        position++;
    }
    // reset the match counter so another element can be counted
    match = 0;
  } 
  // make a pointer to return the set_array as local variables cannot be returned. 
  char *set_array_pointer = set_array; 
  return set_array_pointer; 
}

