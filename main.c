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

	fseek(in_file, 0, SEEK_END); // seek to end of file
	int size = ftell(in_file); // get current file pointer
	fseek(in_file, 0, SEEK_SET);
	char cipher[size];
	char* outputFileName = argsv[2];


	int offset = atoi(argsv[3]);
	char n;
  do 
    {
        /* Read single character from file */
        n = caesar(fgetc(in_file),offset);

        /* add character to cipher string */
				
				strncat(cipher, &n, 1);
				


    } while(n != EOF); /* Repeat this if last read character is not EOF */

    /* Done with this file, close file to release resource */
    fclose(in_file);
		FILE* output = fopen( outputFileName, "w");
		fprintf(output,"%s",cipher);


  return 0;
}

