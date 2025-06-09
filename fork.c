#include<stdio.h>
#include<unistd.h>

int main(){
	printf("\n Hello world");
	int f = fork();
	int p = getpid();
	printf("\n the pid is %d ",p);
	printf("\n the fork is %d ",f);
	
	return 0;

}



#include<stdio.h>
#include<unistd.h>

int main(){
	printf("\n Hello world");
	int f = fork();
	int p = getpid();
	if(f == 0){
		printf("\n im the child %d ",f);		
	}
	else{
		
	}
	printf("\n the pid is %d ",p);
	printf("\n the fork is %d ",f);
	
	
	//printf("\n Hello i'm parent process my child is %d",f);
	//printf("\n Hello i'm child process my parent is %d",p);
	
	return 0;

}

#include<stdio.h>
#include<unistd.h>

int main(){
	
	int f = fork();	
	if(f == 0){
		printf("\n im the child  \n");		
	}
	else if(f1 == 0){	
		printf("\n im the sibling  \n ");		
	}
	else{
		printf("\n im the parent A \n ");	
	}
	
	return 0;

}










#include<stdio.h>
#include<unistd.h>

int main(){
	int p = getpid();
	int f = fork();
	if (f==0){
		printf("i'm child");
		printf("my parent id %d \n",getpid());
	}
	else{
		f1 =fork();
		if(f1==0){
			printf("i'm sibling");
			printf("my parent id %d \n",getpid());

		}
		else{
			printf("i'm parent");
			printf("my id %d \n",getpid());
			printf("my parent id %d \n",getppid());

		}
	}
}