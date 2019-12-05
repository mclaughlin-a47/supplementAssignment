
# COM326 Assignment 1 - Supplementary
## Description
This README contains detailed instructions for your assignment. Read it carefully.

## Submission details
* __Deadline:__ Before midnight on 26/11/2019. Submissions after this point will not be accepted.
* __Submission method:__ GitHub classroom.
* __Assignment type:__ Individual Assignment
* __Assignment weighting:__ Additional 25 marks to the Assignment 1 Total

### To do
* Student name: [Replace this text with  your name]
* StudentID: [Replace this text with your Student ID]
* GitHub Username: [Replace this text  with your GitHub username]
* Discord Name: [Replace this text with your Discord username]

## Problem statement:
Implement TWO additional functions to the date class called `UUDate` in C++ from Assignment 1. The `UUDate.h` file declares the interface for the class - you can check the signature of the two additional functions here. You must
implement these member functions in the `UUDate.cpp` file. __DO NOT__ change the signatures of the class member functions
or the data members of the class. You can add your own utility member functions or data members. However, your
code must provide the public member functions as specified in the `UUDate.h` file. 

## Files to work on
* `README.md` - You should only add your name and student ID, github and discord usernames to this file
* `UUDate.h` - Work on this file
* `UUDate.cpp` - Add your implementation here
* You can also modify 'main.cpp' to debug and test your code
* __DO NOT__ modify any other files in the repository. __Doing so could result in a mark of 0%__

## Constraints
* You are not permitted to use `<ctime>`, `<chrono>` or any other time/date headers
* Compulsary bank holidays will be taken into consideration - Additional comments are available in UUdate.h
* Details on Bank Holiday: https://en.wikipedia.org/wiki/Bank_holiday
* The constructors to process default string, increment function and GetString() are provided

## Exceptions
* Do not throw exceptions in your code. Just ignore invalid arguments.

## Notes
* We are using the Gregorian Calendar only
* The code in `UUDate.cpp` should __not__ write out to the console or accept input from the keyboard
* Make sure your code compiles and runs. __There are no points for code that does not compile__
* You will receive marks for every test your code passes
* Total mark for the test is 25. 
* Check the logs from Travis to verify the correctness of your program
* Travis-CI uses the `GCC compiler` which is different to visual studio. Windows specific code will not compile in GCC. Ensure you __write portable C++ code__.
* Make sure your last push to GitHub is before the deadline. Submissions after the deadline will not be possible. Your last push will be considered as your final submission.


## Marking scheme
Your assignment mark will be based on the unit tests passed. The unit tests for this assignment are:

\# | Description | Marks
-- | ----------- | -----
01 | Test AddDays for Non-leap Year | 4
02 | Test AddDays for Leap-Year  		| 4
03 | Test AddWorkingDays 1          | 4
04 | Test AddWorkingDays 2          | 4
05 | Test AddWorkingDays 3 		      | 4
06 | Test AddWorkingDays 4 		      | 4

* Bonus 1 marks for the passing all 6 unit tests

## Running tests
* Your code will automatically be tested every time you push your code to GitHub :octocat:.
* Travis-CI will send you email notifications of broken, failed and fixed builds.
* Examine the build logs carefully if your code does not pass a unit test or fails to build.
