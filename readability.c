#include <stdio.h>
#include <cs50.h>

int get_letters(string text);
int get_words(string text);
int get_sentences(string text);

int main(void) {
	string text = get_string("Text: ");
	int letters = get_letters(text);
	int words = get_words(text);
	int sentences = get_sentences(text);
	float ave_letters = (letters /(float) words) * 100;
	float ave_sentences = (sentences /(float) words) * 100;
	float index = (0.0588*ave_letters) -(0.296*ave_sentences) - 15.8;
	if(index > 16) {
		printf("Grade 16+\n");
	} 
	else if (index < 1) {
		printf("Before Grade 1\n");
	} 
	else {
		printf("Grade %.0f\n",index);
	}
}

int get_letters(string text) {
	int counter = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] <= 'Z' && text[i] >= 'A' || text[i] <= 'z' && text[i] >= 'a')
			counter++;	
	}
	
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
