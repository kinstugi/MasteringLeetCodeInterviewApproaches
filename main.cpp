#include<iostream>

/*
The question string is temporary.  I'd like to show a snapshot of the question itself.
Also included are 4 options, one of which is guaranteed to be correct!  (correctAnswer)
A correct answer will yield 10 points, and the subOptimal approach (BF, for example) gets 5 points
If a question is answered/tackled, the program will indicate this

For the time being, the spaced-repetition element is being excluded.  However, using Anki or Memmo
would be an ideal way to ensure questions only repeat after a specific numbers of days, depending
on how well they've been answered in the past

I'll be brainstorming ideas on how to improve things here, but we'll use some container for
all current Question objects, and work out how to manage this at a later time

Thoughts:  how to present things when there's ONLY one good option?  (x, rather than a,b,c,d)
Make sure we always convert UpperCase input into lowercase
etc...
*/
struct Question {
	std::string question;
	std::string optionA;
	std::string optionB;
	std::string optionC;
	std::string optionD;
	char correctAnswer;
	char subOptimalAnswer;
	bool answered;
};

int main() {
  Question q1 = {"1143. Longest Common Subsequence","Binary Search","Hash Table","Greedy","Dynamic Programming And Memoization",d,x,false};
}
