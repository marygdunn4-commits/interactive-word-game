* Summary

* To run: type ./bin/main in terminal

This is a game similar to Merriam-Webster’s “Synonym Sandwich,” in which players must
guess the common synonym between two words. Each question has a left word, a right word, and an unknown
middle synonym. In a given question, a player is given the two endpoint words and a blank where the middle word belongs
(ex. Strike : __ : Vigor). After the player guesses the middle word (Punch), the correct answer is revealed, along with two
example sentences that use the middle word in the context of both the left and right words.

Each question also has a point value associated with its relative difficulty. The player’s total score begins at 0.
If the player guesses the middle word correctly, their total score increases by the question’s full point value. 
If the player guesses incorrectly, their score does not change as a result of the guess.

For each question, the player may optionally request up to two hints. Each hint deducts 1 point from the player’s 
total score, regardless of whether they answer the question correctly. Each hint reveals one of the two example 
sentences associated with the question, but with the target middle synonym blanked out. The first hint shows a sentence 
that pairs the middle word with the left word, and the second hint shows a sentence that pairs the middle 
word with the right endpoint word. Hints are requested by typing "hint." All player input is case-insensitive so that capitalization does not matter in checking whether an answer matches 
the correct one. The player’s score is tracked across the 10 questions in a game and reported at the end.

The game uses a dataset of 50 total questions. For each game session, 10 distinct questions 
are selected at random from this dataset and then presented in random order. Within a single session, once a question
has been used it is not reused. As a result, a player can replay the game up to 5 times in a session and still see a
fresh set of questions. 

Starting state: (score is initially 0 internally)
1) What's the middle word? Strike : __ : Vigor (5 points)

Case 1: Correct guess, no hints (score updates to 5 internally)
Input:
Punch
Output:
Correct! The answer is: Strike : Punch : Vigor (+5)
The young boxer delivered the first (punch/strike).
The skilled orator’s speech had plenty of (punch/vigor).

Case 2: Incorrect guess, no hints (score remains 0 internally)
Input: 
Hit
Output:
Incorrect. The answer is: Strike : Punch : Vigor (+0)
The young boxer delivered the first (punch/strike).
The skilled orator’s speech had plenty of (punch/vigor).

Case 3: Using a hint before answering
Input:
hint
Output:
Hint 1: The young boxer delivered the first (__/strike). (-1)

If the player then guesses correctly (Punch), the score is 4 (-1 from hint + 5 since correct)

If the player guesses incorrectly, the score is -1 (-1 from hint + 0 since incorrect)

Next question (another randomly selected prompt)
2) What's the middle word? Catalog : __ : Tilt (5 points)

Case 1: If the player answered Q1 correctly with no hints:
Score = 5

Case 2: If they answered Q1 incorrectly with no hints:
Score = 0

Case 3: If they answered Q1 correctly with one hint:
Score = 4 

Case 4: If they answered Q1 incorrectly with one hint:
Score = -1 
