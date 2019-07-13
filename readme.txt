COMP 142 Programming Project 1, Hailstone

Name: Emery Morales

Email Address: morej-22@rhodes.edu

Please summarize the help you found useful for this assignment, which
may include office hours, discussion with peers, tutors, et cetera.
If none, say "none".

Zybooks COMP142: Computer Science II: Object Oriented Programming
  4.5 More for loop examples
Rhodes College Computer Science Tutors

================================ Questions ==================================

1. Which kind of a loop did you use for the first program? Why?

: I used a While Loop for the first program.
: A While Loop should be used when you do not know the specific number of times the loop should run or when no range of numbers is given.

2a. Once you've completed the second program, run hailstats on the following
inputs, and record your results in the table below:

  input range  | minimum length | achieved by | maximum length | achieved by
-----------------------------------------------------------------------------
    50 100     |        6       |      64     |      118       |       97
   100 200     |        7       |     128     |      124       |      171
   200 400     |        8       |     256     |      143       |      327

2b. What pattern do you think there is in the values achieving minimum length?
Can you explain why it holds?

: Minimum length "achieved by" column has powers of 2.
: If the minimum length is n, then "achieved by" is 2^n.
  It holds because when a number is even the number is even the rule is to divide by 2.
  So powers of 2 take 2^n turns to achieve 1.

3a. Let X be the smallest integer whose length is greater than 150.
By running your hailstats program several times on carefully chosen inputs,
determine what is the value of X.

X is : 703

3b. Explain, briefly, the way in which you used your hailstats program
(i.e., which inputs you gave it) to find this answer.

: The closest maximum length reached in the table is 143 by the integer 327.
  This means the new range lower bound should be greater than 327.
: Tested range 400 to 800 to continue pattern. Maximum Length 170 achieved by 703.
  This means that the lower bound range must be less than 703.
: Tested range 300 to 702. Maximum Length 144 achieved by 649.
: Tested range 500 to 702. Maximum Length 144 achieved by 649.
: Tested range 650 to 700. Maximum Length 144 achieved by 654.
: Tested range 660 to 700. Maximum Length 144 achieved by 654.
: Tested range 670 to 700. Maximum Length 126 achieved by 684.
: Tested range 650 to 702. Maximum Length 144 achieved by 654.
: Tested range 655 to 702. Maximum Length 144 achieved by 655.

================================ Remarks ====================================

Filling in anything here is OPTIONAL.

Approximately how long did you spend on this assignment?

: 3 hours.

Were there any specific problems you encountered? This is especially useful to
know if you turned it in incomplete.

: I misread the instructions for question 3a. as having to find an integer whose length was 150.

Do you have any other remarks?

: No other remarks.
