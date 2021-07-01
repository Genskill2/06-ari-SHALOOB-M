#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <cs50.h>

typedef int count ;
string ari (string paragraph) {
	
	
	count no_of_characters(string );
	count no_of_words(string );
	count no_of_sentences(string );
	int score_formula(count , count , count );
	
	count char_count = no_of_characters(paragraph);
	count word_count = no_of_words(paragraph);
	count sentence_count = no_of_sentences(paragraph);
	int score = score_formula(char_count, word_count, sentence_count);
	
	string GradeLevel[14] = {"Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eight Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade" , "Twelfth Grade", "College Student", "Professor"};
	if (score > 14) {
		return GradeLevel[13];
	}
	else if (score == 0) {
		return "NULL";
	}
	else {
		return GradeLevel[score - 1];
	}
}

count no_of_characters(string paragraph) {
	int characters = 0;
	for (int i = 0; i < strlen(paragraph) ; i++) {
		if(isalnum(paragraph[i])) {
			characters++;
		}
	}
	return characters;
}

count no_of_words(string paragraph) {
	int words = 0;
	for (int i = 0; i < strlen(paragraph) ; i++) {
		if(paragraph[i] == ' ') {
			words++;
		}
	}
	return words;
}

count no_of_sentences(string paragraph) {
	int sentences = 0;
	for (int i = 0; i < strlen(paragraph) ; i++) {
		if((paragraph[i]) == '.' || paragraph[i] == '?' || paragraph[i] == '!') {
			sentences++;
		}
	}
	return sentences;
}

int score_formula(int characters, int words , int sentences) {
	float ret = 4.71 * (float)characters/words + 0.5 * (float)words/sentences - 21.43;
	
	if (ret - (int)ret != 0) {                       
		ret = (int)ret + 1;
	}
	return ret;
}
