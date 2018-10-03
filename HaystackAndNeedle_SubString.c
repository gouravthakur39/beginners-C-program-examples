// Function that takes a string "haystack" and a string "needle"
// and checks if needle appears in haystack

#include <stdio.h>
#include <string.h>

int SubString(char *haystack, char *needle ){
	int bigIndex = 0;
	int littleIndex = 0;

	// Iterate through Haystack until a match is found
	// then iterate through both strings until the end of needle
	// or a difference is found
	while (haystack[bigIndex] != '\0'){
		while (haystack[bigIndex + littleIndex] == needle[littleIndex]){
			if (needle[littleIndex + 1] == '\0')
				return (1);
			littleIndex++;
		}
		littleIndex = 0;\
		bigIndex++;
	}
	return (0);
}

int main(){
	char	needle[100];
	char	haystack[100];

	// Getting input
	printf("Please enter your Haystack string (< 100 characters): ");
	scanf("%s", haystack);
	printf("Please enter your Needle string (< 100 characters): ");
	scanf("%s", needle);

	if (SubString(haystack, needle))
		printf("Needle was found in Haystack!\n");
	else
		printf("Needle not found in Haystack\n");
	return (0);
}
