#include <stdio.h>
#include <string.h>

void main(void){
	int tonyMontana = 0;
	char* get = "first";
	printf("%s", get);

	while (!strcmp(get,"women") == 0){

		switch (tonyMontana) {
			case 1:
				get = "power";
				break;
			case 2:
				get = "women";
				break;
			default:
				get = "money";
				break;
		}

		tonyMontana++;
		printf(" you get the %snthen",get);

	}
}