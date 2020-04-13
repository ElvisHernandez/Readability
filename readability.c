#include <stdio.h>
#include <cs50.h>

int get_letters(string text);
int get_words(string text);
int get_sentences(string text);

int main(void) {
	// string text = get_string("Text: ");
	string test_string = "Congratulations! Today is your day. You're off to Great Places! You're off and away!"; 
	string test_string2 = "Hello! 5How are you today?";
	int letters = get_letters(test_string);
	int words = get_words(test_string);
	int sentences = get_sentences(test_string);
	float ave_letters = (letters /(float) words) * 100;
	float ave_sentences = (sentences /(float) words) * 100;
	float index = (0.0588*ave_letters) -(0.296*ave_sentences) - 15.8;
	printf("Grade: %.0f\n", index);


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
