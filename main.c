#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char password[20];

	char passarray[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*?";
	
    srand(time(0));
    int passindex;	
	int using = 0;
	
	while(using == 0){

		for (int i = 0; i < strlen(password); i++){
			passindex = rand() % (38 + 1 - 0) + 1;
			char passchar = passarray[passindex];
			strncat(password, &passchar, 1);
		}

		password[0] = '\b';
		
		while(strlen(password) > 20){
			password[strlen(password)-1] = '\0';
		}
		
		printf("password: %s \n",password);

		//password[0]= '\0';
		
		fflush(stdin);
		char input = getchar();

		if(input == 'p'){
			continue;
		}
		else if (input == 'q'){
			return 0;
		}
		else{
			fflush(stdin);
			printf("that wasn't one of the options");
		}
	}

	return 0;
}
