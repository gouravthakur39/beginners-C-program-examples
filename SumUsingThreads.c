#include<stdio.h>
#include<pthread.h>

pthread_t tids[3];
int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
int num[2]={0,0};

void*  first5(void* arg){
	int ans = 0;
	for(int i=0;i<5;i++){
		ans += numbers[i]; 
	}
	printf("%d\n",ans);
	num[0] = ans;
}

void*  second5(void* arg){
	int ans = 0;
	for(int i=5;i<10;i++){
		ans+=numbers[i];
	}
	printf("%d\n",ans);
	num[1]=ans;
}

void* sum(void* arg){
	pthread_join(tids[0],NULL);
	pthread_join(tids[1],NULL);
	int ans = num[0]+num[1];
	printf("%d\n",ans);
}

int main (void){
	



	pthread_create(&tids[0],NULL,first5,(void*)NULL);
	
	pthread_create(&tids[1],NULL,second5,(void*)NULL);
	pthread_create(&tids[2],NULL,sum,(void*)NULL);
	pthread_join(tids[2],NULL);
	printf("Main Ended\n");



	return 0;
}

