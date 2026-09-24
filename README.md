Welcome to my Mail and Call Directory program!

This program is built in C++ and was tested and run in Visual Studio Code for desktop. The code in this project should run in any IDE that can  run C++, output text to the console, and take input from the user.

This program is meant to be a directory program for a receptionist needing to find out what employee handles specific topics. These topics are included as search terms that are associated with an employee.

*****************************************

A few assumptions the program has:

- The program assumes that the end user has access to full information about the person involved in the search. No Personally Identifiable Information (PII) has been included that could be used to harass or contact an individual included in the directory. 
- The program assumes that there are specific topics associated with each employee. For more ambiguous searches, a search term will be included that will provide the user with a full list of the directory and its associated terms.
- The program assumes the user has at least a basic understanding of running code in an IDE. While the run instructions provided below will try to outline the steps, it is easier for the user if they already have some understanding.

*****************************************

To run the program:

1. Copy and paste the code in main.cpp into an IDE of your choice that can run C++ and name the file "main.cpp."
2. Copy and paste the text file labeled "employee_directory.txt" into a basic text file and include that file in the folder/workspace running your main.cpp so that the program can access that file. You will need to name the file "employee_directory.txt" in order for the file to be read correctly by the program. **The program will notify you if this file fails to be found and read.**
3. Run the program and input a search term when prompted. Hit the enter key after inputting the term you want to look for. The program will then output the employee associated with that term.
