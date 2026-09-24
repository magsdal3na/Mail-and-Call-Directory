#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

//Function used to convert strings to lowercase
//so that the user doesn't have to worry about 
//case sensitivity
string toLower(string str) {
    //Transforms the string characters to lowercase
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return tolower(c);
    });

    return str;
}

//Main searching functionality for the program
int search() {
    //Creates the variables for the name of the file
  //and the search term
  string fileName = "employee_directory.txt";
  string searchTerm;

  //User input here with prompt
  cout << "Please enter your search term: ";
  cin >> searchTerm;

  //Starts the file stream and attempts to find the
  //fileName variable which has the name of the
  //file in it
  ifstream file(fileName);

  //Attempting to open the file
  if(!file.is_open()) {
    cout << "Error opening file " << fileName << endl;

    //If the file doesn't open, there is an error. So return 1
    return 1;
  }

  //Sets up the variables used to search for the term
  //in the directory file and the employeeName
  //variable which will be used to return who the 
  //employee associated with the search term is
  string termInFile;
  string employeeName;
  //Sets up boolean variable to check for if the
  //term has been found or not
  bool found = false;

  //Convert the user's input to lowercase
  string lowerSearchTerm = toLower(searchTerm);

  //Reads through the file for the search term and uses
  //a comma in it to read the terms in the file as 
  //separate variables
  while(getline(file, termInFile, ',') && getline(file, employeeName)) {

    //Search for the term in the current line and 
    //run loop if the term is in the line
    if(toLower(termInFile) == lowerSearchTerm) {
        cout << "For " << searchTerm << ", you need to contact" << employeeName << endl;
        //Changes the boolean value for found to "true"
        //so that the program knows the term has been found
        //and it won't run the "not found" output text
        found = true;
        break; //Stops the loop since a match has been found
    }
    //If the term hasn't been found, this continues
    //the while loop until the term has been found
    //or until the .txt file has been fully read
    else{
        continue;
    }
  }

  //If the boolean for found is still false and the
  //file has been full read through, this output text
  //will appear for the user letting them know that the
  //term has no associated employee
  if(found == false) {
    cout << "No employee matches the term: " << searchTerm << endl;
  }

  file.close();
  
  return 0;

}

int main() {

  search();

  return 0;
}
