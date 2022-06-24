#include <stdio.h>
 #include <stdlib.h>
  // Given Student struct 
  struct Student 
{     int stdld; // stores student ID  
   char name[20]; // stores student name  
   double egpa; // stores student gpa 
};  
// global constant
 const int totalRecords = 100; // the input file's total number of records  
// This function takes an integer array and its size as input. 
 // The record number is represented by each element of the array. 
 // This function reads records from the input file with provided 
 // record numbers and writes them to the output file.
 void selectRecords (const int *list, const int listSize)
 {     const char input_file[] = "std.dat"; // name of input file 
    const char output_file[] = "out.dat"; // name of output file  
    // create a file pointer for reading input file 
    FILE *in_fptr;    
	 // create a file pointer for writing output file  
   FILE *out_fptr;   
   // open input file in binary read mode
     in_fptr = fopen(input_file, "rb");      // open output file in binary write mode 

    out_fptr = fopen(output_file, "wb");      // check if input file is successfully opened    
 if(in_fptr == NULL)
 {         // display the error message     
    printf("%s file failed to open !!!\n", input_file);          // and, exit the program    
     exit(1);  
   } 
     // check if ouput file is successfully opened  
   if(out_fptr == NULL)
 {    
     // display the error message      
   printf("%s file failed to open !!!\n", output_file);          // and, exit the program   
      exit(1);  
   }  
    // for storing record temporarily while reading from file  
   struct Student tempStud;      // iterate through given list of record numbers 
    for(int i = 0; i < listSize; i++) 
{    
     // get record number from the list  
       int rec_no = list[i];          // use fseek function to jump to the specific position   
      fseek(in_fptr, sizeof(struct Student) * (rec_no - 1), SEEK_SET);          // use fread function to read the record   
      fread(&tempStud, sizeof(struct Student), 1, in_fptr);          // use fwrite function to write read record into output file   
      fwrite(&tempStud, sizeof(struct Student), 1, out_fptr); 
    }   
   // close the files
     fclose(in_fptr); 
    fclose(out_fptr);
 }  
/********* ONLY FOR TESTING *************/
  // function to read out.dat file and print its contents
 void readOutputFile()
 {     FILE *out_fptr;      // open output file   
  out_fptr = fopen("out.dat", "rb");    
  struct Student s;      // read all records of out.dat file  
   while(fread(&s, sizeof(struct Student), 1, out_fptr)) 
{         // print out each record    
     printf("Rec. No.: %d\nName: %s\nGPA: %lf\n\n", s.stdld, s.name, s.egpa);  
   }      // close the file    
 fclose(out_fptr);
 } 
 // for testing
 int main(void)
 { 
    // record number to which we want to read   
  int arr[] = {4, 1, 7, 3};    
  // call selectRecords function   
  selectRecords(arr, 4);     
 // ONLY FOR TESTING  
   // call readOutputFile function to print contents of out.dat (output file)   
  readOutputFile();
      return 0; }
