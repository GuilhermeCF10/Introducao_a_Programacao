#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	srand(time(NULL));
	for(int i=1;i<=20;i++){
		printf("%10d", 1+(rand()%6));
		if(i%5==0){
			printf("%d\n", i);
		}
	}
}
