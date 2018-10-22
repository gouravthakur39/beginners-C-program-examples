#include<stdio.h>
#include<string.h>

char XORkey[12] = {'F','P','k','k','Y','P','l','p','V','P','L','z'};
void encryptDecrypt();

int main() {
	char sampleString[] = " This contains highly sensitive message\n"          \
                          " coordinates : 23.445, 34.443\n"                    \
                          " All further messages MUST be send via\n"           \
                          " XOR encryption only - Long Live Revolution!!\n" ;


	printf("\nEncrypted String :\n");
	encryptDecrypt(sampleString);

	printf("\nDecyrpted String :\n");
	encryptDecrypt(sampleString);

	return 0;
}

void encryptDecrypt(char inputString[]) {
	int i = 0;

	int len = strlen(inputString);
	for (i = 0; i < len; i++) {
		inputString[i] = inputString[i] ^ XORkey[i % (sizeof(XORkey)/sizeof(char))];
		printf("%c", inputString[i]);
	}

}

