#include <stdio.h>
#include <cs50.h>

int main(void) {
	// string text = get_string("Text: ");
	string test_string = "Hello there world of people\n";
	int counter = 0;
	for (int i = 0; test_string[i] != '\0'; i++) {
		//printf("%c",test_string[i]);
		if (test_string[i] != ' ') {
			printf("%c", test_string[i]);
		}
	}
}
