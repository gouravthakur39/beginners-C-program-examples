
int main(){
#if defined(__clang__)
// clang -fblocks lambda_in_c.c -lBlocksRuntime
int (^max)(int x, int y) = ^(int x, int y) {
	return x>y ? x:y;
};
#elif defined(__GNUC__) || defined(__GNUG__)
// gcc -std=gnu11 lambda_in_c.c 
int (*max)(int, int) = 
	({ 
	int __fn__ (int x, int y) { return x > y ? x : y; } 
	__fn__; 
	});
#endif
	printf("%d",max(1,23));
}
