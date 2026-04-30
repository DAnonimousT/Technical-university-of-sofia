#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char word[] = "hangman";
	int wordLength = sizeof(word) / sizeof(char) - 1;
	char guessword[wordLength];

	for(int i = 0; i < wordLength; i++){
		guessword[i] = '_';
	}
	printf("guessword: %s\n", guessword);
	
	int maxTurs = wordLength + 2;
	char guess;
	for(int i = 0; i < maxTurs; i++){

		scanf(" %c", &guess);

		for(int j = 0; j < wordLength; j++){
			if(word[j] == guess){
				guessword[j] = guess;
			}
		}

		printf("Current guess: %s\n", guessword);
		int count = 0;
		for(int j =  0; j < wordLength; j++){
			if(guessword[j] == '_'){
				count++;
			}
		}

		if(count == 0){
			printf("WIN!\n");
			return 0;
		}
		printf("Turns left: %d\n", maxTurs - i - 1);
	}
	return 0;
}
