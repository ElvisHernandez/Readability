#include <stdio.h>
#include <cs50.h>

int get_letters(string text);
int get_words(string text);
int get_sentences(string text);

int main(void) {
	// string text = get_string("Text: ");
	string test_string = "Hello!, how ar3e the people of5 the world today?\n";
	string test_string2 = "Hello! 5How are you today?";
	int letters = get_letters(test_string2);
	int words = get_words(test_string);
	int sentences = get_sentences(test_string);
	printf("Number of sentences: %i\n", sentences);
	

}

int get_letters(string text) {
	int counter = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] <= 'Z' && text[i] >= 'A' || text[i] <= 'z' && text[i] >= 'a')
			//printf("%c", text[i]);
			counter++;	
	}
	//printf("Number of letters: %i\n", counter);
	return counter;
}

int get_words(string text) {
	int counter = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == ' ') {
			counter++;
		}
	}
	counter++; // for the last word in a sentence
	// problem stated that sentences will not end with a space
	//printf("Number of words: %i\n",counter);
	return counter;
}

int get_sentences(string text) {
	int counter = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
			counter++;
		}
	}
	return counter;
}
