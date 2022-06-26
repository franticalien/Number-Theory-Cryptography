# Approach Explained
First, I made a function which takes two natural numbers as input and returns the greatest common divisor of these two. For this, I made a loop which found all the common divisors of the two numbers (i.e. the number which left a remainder 0 when divided by both the input numbers). Next, I checked which of them is the greatest among them all.

After making the function, I used brute force to find the integers x and y that satisfied Bezout's Theorem. 

Note : There will be infinite such pairs (x,y).