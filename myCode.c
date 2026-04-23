#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	printf("Before fork only in Parent:  %u\n", getppid());
	int state=fork();
	
	if(state<0){
		printf("Failure to create a child\n");
	}
	else if(state==0){
		sleep(5);
		printf("This is the child running:  %u\n", getppid());
	}
	else{
		printf("This is the parent running: %u\n ", getppid());
		printf("The child id is %u\n ", state);

	}
	printf("After fork appears in both:  %u\n", getppid());
	return 0;
}