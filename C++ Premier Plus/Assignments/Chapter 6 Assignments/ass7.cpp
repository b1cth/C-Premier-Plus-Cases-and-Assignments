#include "functions.h"
void ass7() {
	char word[ArSize];
	int vowel_count = 0, consonant_count = 0, other = 0;
	std::cout << "Enter words (q to quit)\n";
	while (cin >> word) {
		
		if (word[0]=='q') {
			break;
		}
		if (isalpha(word[0])) {
			switch (toupper(word[0])) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel_count++;
				break;
			default:
				consonant_count++;
				break;
			}
		}
		else {
			other++;
		}
		
	}
	
	std::cout << vowel_count << " words beginning with vowels\n";
	std::cout << consonant_count << " words begining with consonant\n";
	std::cout << other << " others";
	
}