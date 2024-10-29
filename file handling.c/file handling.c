//C file handling : writing to a file
 #include<stdio.h> //scanf(), printf(), fprintf(), fscanf(), fclose()
 #include<stdlib.h> //exit() 
 
 int main(){
 	 int number;
 	 FILE *fptr; //declare pointer
 	 
 	 fptr = fopen("C:\\Users\\USER\\Desktop\\ASSIGNMENT1\\file.txt", "w");
 	 if  (fptr == NULL){
 	 	  printf("Error opening the file");
			exit(1);
	  }
	  printf("Enter a random number: ");
	  scanf("%d", &number);
	  
	  fprintf(fptr, "The number entered is %d", number);
	  fclose(fptr);
	  printf("Number written successfully");	             

	 return 0; //execution successful
 }