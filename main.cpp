/* A simple text-based c++ program to timetable classes at the university, a database which
   stores information on modules, classes, students, lecturers and rooms.
*/

#include <iostream>
#include <fstream> // this is for file input and output.
#include <cstdlib> // this is for general utilities.
#include <iomanip> // this is to store data in tabular format.
#include <string>

// THIS PROGRAM WILL WRITE THE INFORMATION INTO A TEXT FILE.


using namespace std;
// Using struct to create a database.
struct Timetable{
//list of objects to be saved in the database.
string Lecturer_name;
string Classes;
string Modules;

};
void writeToFile(Timetable m [], int size); // a function to write info to file,which takes an array of stuct.

int main()
{
    int number; // this is the number of times you want to take in objects.
    string Lecturer_name;
    string Classes;
    string Modules;

    cout << "How many object do you want to take in: " << endl;
    cin>>number;

    Timetable mode[number]; // this takes the array of struct object.
    // using the for loop.

    for(int i =0; i<number; i++)
        {

            cout<< " Enter the Lecturer's name: " << endl;
            cin>>mode[i].Lecturer_name;
            cout<<endl;



            cout<< "Enter the classes to be taken: " << endl;
            cin>>mode[i].Classes;
            cout<<endl;



            cout<< " Enter the Modules: " << endl;
            cin>>mode[i].Modules;


            }

     writeToFile(mode,number); // this to call the function to pass the array and number of entries.
    return 0;
}


void writeToFile(Timetable m[], int size) //this takes an array of object.
{
    //TO CREATE AN OBJECT FROM THE FSTREAM LIBRARY.
 ofstream output; // this used to output the object created.

 output.open("University_Timetable.txt",ios::app); //this open the file
 if(!output.is_open()){

    cout << "Error reading the file!"<< endl;//if the file is not created, end operation.
    exit(EXIT_FAILURE);
 }
 else{
    for(int i=0;i<size;i++) //this continues to place text into file
        {
            //formatting my data.
            output<<endl; // output is used instead of cout,so the object can get to the file.
            output<<m[i].Lecturer_name<<endl;

            output<<endl;
            output<<endl;
            output<<endl;

            output<<m[i].Classes<<endl;

            output<<endl;
            output<<endl;
            output<<endl;

            output<<m[i].Modules<<endl;

            output<<endl;
            output<<endl;
            output<<endl;
        }

 }
}
