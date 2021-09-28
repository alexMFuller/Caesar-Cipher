#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caesar.h"


int main(int argsc, char** argsv) {
	int c = 'c';
	FILE* in_file = fopen(argsv[1], "r"); // read only  
  
	
  if (! in_file )  {  
    printf("\noops, file can't be read\n"); 
    exit(-1); 
  }

	if (atoi(argsv[3])>25||atoi(argsv[3])<-25){
		printf("\ninvalid offset, try again");
		exit(-1);
	}

	fseek(in_file, 0, SEEK_END); // seek to end of file
	int size = ftell(in_file); // get current file pointer
	fseek(in_file, 0, SEEK_SET);
	char* outputFileName = argsv[2];


	int offset = atoi(argsv[3]);
	char n;
	FILE* output = fopen( outputFileName, "w");
	
  while(n != EOF){
        /* Read single character from file */
        n = caesar(fgetc(in_file),offset);
				printf("\n%c",n);
        /* add character to cipher string */
				fprintf(output,"%c",n);
				
    }  /* Repeat this if last read character is not the null terminator */

    /* Done with this file, close file to release resource */
    fclose(in_file);
		fclose(output);
		

  return 0;
}

