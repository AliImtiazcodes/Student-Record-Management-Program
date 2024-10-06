#include <iostream>
using namespace std;
int main() 
{
    const int MAX_SIZE = 100;
    const int MAX_ENTRIES = 50;
    int rollNumber[MAX_SIZE];
    float midtermMarks[MAX_SIZE];
    float finalMarks[MAX_SIZE];
    int studentClass[MAX_SIZE];
    char grades[MAX_SIZE];
    int numEntries = 0;
    int choice;

    do {
        cout << "Main Menu: " << endl;
        cout << "1. Sort and display all records roll number wise in ascending order." << endl;
        cout << "2. Sort and display all records roll number wise in descending order." << endl;
        cout << "3. Sort and display all records in ascending order based on marks in Midterm." << endl;
        cout << "4. Sort and display all records in descending order based on marks in Midterm." << endl;
        cout << "5. Sort and display all records in ascending order based on marks in Final." << endl;
        cout << "6. Sort and display all records in descending order based on marks in Final." << endl;
        cout << "7. Sort and display all records in ascending order based on Grade." << endl;
        cout << "8. Sort and display all records in descending order based on Grade." << endl;
        cout << "9. Add a new entry of a student." << endl;
        cout << "10. Delete a student record based on his roll number." << endl;
        cout << "11. Display record of all the students greater than X marks in final exam (in descending order)." << endl;
        cout << "12. Display record of all the students greater than X marks in final exam (in ascending order)." << endl;
        cout << "13. Display record of all the students less than or equal to X marks in final exam (in descending order)." << endl;
        cout << "14. Display record of all the students less than or equal to X marks in final exam (in ascending order)." << endl;
        cout << "15. Display record of all the students greater than X grade (in descending order)." << endl;
        cout << "16. Display record of all the students greater than X grade (in ascending order)." << endl;
        cout << "17. Display record of all the students less than or equal to X grade (in descending order)." << endl;
        cout << "18. Display record of all the students less than or equal to X grade (in ascending order)." << endl;
        cout << "e. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int tempInt;
        float tempFloat;
        char tempChar;

        switch (choice) {
        case 1: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (rollNumber[j] > rollNumber[j + 1]) {

                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

           
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 2: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (rollNumber[j] < rollNumber[j + 1]) {
                       
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

      
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 3: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (midtermMarks[j] > midtermMarks[j + 1]) {
                    
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

        
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 4: {
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (midtermMarks[j] < midtermMarks[j + 1]) {
                       
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

           
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 5: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (finalMarks[j] > finalMarks[j + 1]) {
                      
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

            
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 6: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (finalMarks[j] < finalMarks[j + 1]) {
                        
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }
               
                for (int i = 0; i < numEntries; ++i) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            break;
        }

        case 7: { 
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (grades[j] > grades[j + 1]) {
                       
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

           
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 8: {
            for (int i = 0; i < numEntries - 1; ++i) {
                for (int j = 0; j < numEntries - i - 1; ++j) {
                    if (grades[j] < grades[j + 1]) {
                       
                        tempInt = rollNumber[j];
                        rollNumber[j] = rollNumber[j + 1];
                        rollNumber[j + 1] = tempInt;

                        tempFloat = midtermMarks[j];
                        midtermMarks[j] = midtermMarks[j + 1];
                        midtermMarks[j + 1] = tempFloat;

                        tempFloat = finalMarks[j];
                        finalMarks[j] = finalMarks[j + 1];
                        finalMarks[j + 1] = tempFloat;

                        tempInt = studentClass[j];
                        studentClass[j] = studentClass[j + 1];
                        studentClass[j + 1] = tempInt;

                        tempChar = grades[j];
                        grades[j] = grades[j + 1];
                        grades[j + 1] = tempChar;
                    }
                }
            }

           
            for (int i = 0; i < numEntries; ++i) {
                cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                    << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                    << ", Grade: " << grades[i] << endl;
            }
            break;
        }

        case 9: { 
            if (numEntries < MAX_ENTRIES) {
                cout << "Enter Roll Number: ";
                cin >> rollNumber[numEntries];
                cout << "Enter Midterm Marks: ";
                cin >> midtermMarks[numEntries];
                cout << "Enter Final Marks: ";
                cin >> finalMarks[numEntries];
                cout << "Enter Class: ";
                cin >> studentClass[numEntries];

               
                if (finalMarks[numEntries] < 50)
                    grades[numEntries] = 'F';
                else if (finalMarks[numEntries] >= 50 && finalMarks[numEntries] <= 59)
                    grades[numEntries] = 'D';
                else if (finalMarks[numEntries] >= 60 && finalMarks[numEntries] <= 72)
                    grades[numEntries] = 'C';
                else if (finalMarks[numEntries] >= 73 && finalMarks[numEntries] <= 85)
                    grades[numEntries] = 'B';
                else
                    grades[numEntries] = 'A';

                ++numEntries;
            }
            else {
                cout << "Cannot add more entries. Maximum limit reached." << endl;
            }
            break;
        }


        case 10: { 
            int rollToDelete;
            cout << "Enter Roll Number to delete: ";
            cin >> rollToDelete;

            int foundIndex = -1;
            for (int i = 0; i < numEntries; ++i) {
                if (rollNumber[i] == rollToDelete) {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex != -1) {
                for (int i = foundIndex; i < numEntries - 1; ++i) {
                    rollNumber[i] = rollNumber[i + 1];
                    midtermMarks[i] = midtermMarks[i + 1];
                    finalMarks[i] = finalMarks[i + 1];
                    studentClass[i] = studentClass[i + 1];
                    grades[i] = grades[i + 1];
                }
                --numEntries;
                cout << "Record deleted successfully." << endl;
            }
            else {
                cout << "Record not found." << endl;
            }
            break;
        }

        case 11: { 
            float x;
            cout << "Enter the marks threshold: ";
            cin >> x;

           
            cout << "Records of students greater than " << x << " marks in final exam (in descending order):" << endl;
            for (int i = 0; i < numEntries; ++i) {
                if (finalMarks[i] > x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 12: {
            float x;
            cout << "Enter the marks threshold: ";
            cin >> x;

          
            cout << "Records of students greater than " << x << " marks in final exam (in ascending order):" << endl;
            for (int i = numEntries - 1; i >= 0; --i) {
                if (finalMarks[i] > x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 13: { 
            float x;
            cout << "Enter the marks threshold: ";
            cin >> x;

           
            cout << "Records of students less than or equal to " << x << " marks in final exam (in descending order):" << endl;
            for (int i = 0; i < numEntries; ++i) {
                if (finalMarks[i] <= x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 14: {
            float x;
            cout << "Enter the marks threshold: ";
            cin >> x;

            
            cout << "Records of students less than or equal to " << x << " marks in final exam (in ascending order):" << endl;
            for (int i = numEntries - 1; i >= 0; --i) {
                if (finalMarks[i] <= x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 15: {
            char x;
            cout << "Enter the grade threshold: ";
            cin >> x;

            
            cout << "Records of students greater than " << x << " grade (in descending order):" << endl;
            for (int i = 0; i < numEntries; ++i) {
                if (grades[i] > x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 16: { 
            char x;
            cout << "Enter the grade threshold: ";
            cin >> x;

           
            cout << "Records of students greater than " << x << " grade (in ascending order):" << endl;
            for (int i = numEntries - 1; i >= 0; --i) {
                if (grades[i] > x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 17: { 
            char x;
            cout << "Enter the grade threshold: ";
            cin >> x;

           
            cout << "Records of students less than or equal to " << x << " grade (in descending order):" << endl;
            for (int i = 0; i < numEntries; ++i) {
                if (grades[i] <= x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 18: { 
            char x;
            cout << "Enter the grade threshold: ";
            cin >> x;

            
            cout << "Records of students less than or equal to " << x << " grade (in ascending order):" << endl;
            for (int i = numEntries - 1; i >= 0; --i) {
                if (grades[i] <= x) {
                    cout << "Roll Number: " << rollNumber[i] << ", Midterm Marks: " << midtermMarks[i]
                        << ", Final Marks: " << finalMarks[i] << ", Class: " << studentClass[i]
                        << ", Grade: " << grades[i] << endl;
                }
            }
            break;
        }

        case 'e':
        case 'E': 
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }

    } while (choice != 'e' && choice != 'E');

    return 0;
}

