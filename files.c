
#include <stdio.h>
#include <string.h>

int main()
{


	FILE* filePointer;


	char dataToBeWritten[50] = "sandeep reddy "
							" Reddy";


	filePointer = fopen("sandeep.c", "w");


	if (filePointer == NULL) {
		printf("sandeep.c file failed to open.");
	}
	else {

		printf("The file is now opened.\n");


		if (strlen(dataToBeWritten) > 0) {


			fputs(dataToBeWritten, filePointer);
			fputs("\n", filePointer);
		}

		fclose(filePointer);

		printf("Data successfully written in file "
			"sandeep.c\n");
		printf("The file is now closed.");
	}

	return 0;
}

