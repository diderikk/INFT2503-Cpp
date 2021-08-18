#include <iostream>
#include <string>

using namespace std;

int main(void){
	// a
	string word1, word2, word3;
	cin >> word1 >> word2 >> word3;

	// b
	auto sentence = word1 + " " + word2 + " " + word3 + ".";
	cout << sentence << endl << endl;

	// c
	cout << "Word1 length: " << word1.length() << "\nWord2 length: " <<
	word2.length() << "\nWord3 length: " << word3.length() << 
	"\nSentence length: " << sentence.length() << endl << endl;

	// d
	auto sentence2 = sentence;

	// e
	for(size_t i = 9; i < 12; i++){
		if(i > sentence2.length()) break;
		sentence2[i] = 'x';
	}

	cout << "Sentence: " << sentence << endl;
	cout << "Sentence2: " << sentence2 << endl << endl;

	// f
	auto sentence_start = (sentence.length() > 5) ? 
	sentence.substr(0, 5) : sentence.substr(0, sentence.length());
	cout << "Sentence: " << sentence << endl;
	cout << "Sentence_start: " << sentence_start << endl << endl;

	// g
	auto found = sentence.find("hello");
	if (found!=string::npos) cout << "Hello found!" << endl << endl;
	else cout << "Hello not found" << endl << endl;

	// h
	int count = 0;
	size_t finder = sentence.find("er");
	while(finder != string::npos){
		count++;
		finder = sentence.find("er", finder+1);
	}

	cout << "'er' occurs	: " << count << " times" << endl;
		

	return 0;
}