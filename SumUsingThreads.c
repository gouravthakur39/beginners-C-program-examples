#include<stdio.h>
#include<pthread.h>

pthread_t tids[3]; //creating three threads using pthread library
int numbers[10] = {1,2,3,4,5,6,7,8,9,10}; //decleration of numbers array with 10 elements
int num[2]={0,0}; //decleration of num array with 2 elements

//dividing firt five numbers into one array
void*  first5(void* arg){
	int ans = 0;
	for(int i=0;i<5;i++){
		ans += numbers[i]; 
	}
	printf("%d\n",ans);
	num[0] = ans;
}

diving second five numbers into another array
void*  second5(void* arg){
	int ans = 0;
	for(int i=5;i<10;i++){
		ans+=numbers[i];
	}
	printf("%d\n",ans);
	num[1]=ans;
}

//funtion to calculate sum
void* sum(void* arg){
	pthread_join(tids[0],NULL);
	pthread_join(tids[1],NULL);
	int ans = num[0]+num[1];
	printf("%d\n",ans);
}

int main (void){
	
	pthread_create(&tids[0],NULL,first5,(void*)NULL); //creating one thread to calculate sum of first five numbers
	pthread_create(&tids[1],NULL,second5,(void*)NULL); //creating second thread to calculate sum of last five numbers
	pthread_create(&tids[2],NULL,sum,(void*)NULL); //creating another thread to to take sum of the above
	pthread_join(tids[2],NULL); // thread 3 will wait until thread 1 and 2 finish executing
	printf("Main Ended\n");

	return 0;
}

