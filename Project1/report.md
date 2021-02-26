Project 1 Report

Original:
 For the original version, I did not change the code.

Logic_error: 
In this version, I inputted incorrect logic. For the code percentages to be calculated correctly, the formula should be (100 * votes) total. However, for the republicans, I changed the 100 to 90 so it became: ( 90.0 * republicanVotes ) / totalVoters. This is incorrect because the percentages will not be accurate as they will be less than needed. For example, in the original, if 10 voted, 5 republicans and 5 democrats, then the percentages will become 50% for both. However, in this version, with the same input, republicans will have 45% and democrats 50%.

Compile_error: 
 In this version, I did not declare the integer totalVoters and I took off the semicolon from this line: double pctRepub = ( 100.0 * republicanVotes ) / totalVoters.
This led the code to be unsuccessful and it failed to compile
