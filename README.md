# LeetCodeQuizApplication
I would like aspiring software engineers to be able to hone their approaches to problem-solving, and facilitate easier progress with the kind of technical interviews seemingly in vogue (as of 2023) with all major tech corporations with a simple free-to-use quiz.  

As of April 2023, this will start as something very basic: it will pose a question, and offer a multiple-choice section of potential answers, for which points will be awarded.

Any intermediate programmer with a strong background in DSA should be able to find an approach (or multiple approaches) to any given problem.  The quiz itself is very simple: it asks a question, and then provides four tentative solutions.  The best answers are given 10 points, sub-optimal approaches get 5 points, while incorrect approaches are awarded a big fat zero!  It's initially going to cover the most frequently asked LeetCode questions, but should continue to grow and expand in the future.

Although the quiz/points aspect is one part of the idea, I also note an opportunity to try and incorporate a **spaced repetition learning** aspect to this.  It's very difficult to use spaced repetition in a meaningful way when dealing with LeetCode.  This finds a way to do so, should simplify the approach to learning!  Any previously answered or reviewed questions will be periodically incorporated with 'new' questions, based on how successfully the user has answered the question in the past.  Initially, I'll be building the quiz aspect: with the spaced repetition part coming later.

The question in each quiz is always the same:
**Which of the following approaches is considered the most optimal for solving this problem?**
*
LeetCode 1143. Longest Common Subsequence
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.*

Users will be posed accurate, precise sample answers, like so:
*A)  Two Pointers  B)  Hash Table  C) Greedy  D) Dynamic Programming and Memoization*

If you guessed D, then congratulations!  You have clearly mastered DSA to a good level, and should hopefully be able to build upon this.
