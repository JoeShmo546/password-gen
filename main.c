#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char password[20];

	char passarray[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*?";
	
    srand(time(0));
    int passindex;	
	
	for (int i = 0; i < strlen(password); i++){
		passindex = rand() % (38 + 1 - 0) + 1;
		char passchar = passarray[passindex];
		strncat(password, &passchar, 1);
	}
	
	while(strlen(password) > 20){
		password[strlen(password)-1] = '\0';
	}
	
	printf("this is fine: %s \n",password);

	return 0;
}
