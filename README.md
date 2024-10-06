"Student Record Management System"

Overview:
This Student Record Management System is a console-based C++ program designed to help manage student data.
It allows sorting, adding, and displaying student records based on several parameters like roll number, midterm marks, final marks, and class. 
The user can interact with the system via a menu that provides options for these operations.

Features:
The system provides the following features:
1. Sort Student Records by Roll Number (Ascending/Descending)
2. Sort by Midterm Marks (Ascending/Descending)
3. Sort by Final Marks (Ascending/Descending)
4. Sort by Class (Ascending/Descending)
5. Add a New Student Record
6. Display All Student Records

Code Features and C++ Functions Used:
Global Variables and Constants
Arrays: 
  - `rollNumber[]`, `midtermMarks[]`, `finalMarks[]`, `studentClass[]`, and `grades[]` store the corresponding student data.
Constants: 
  - `MAX_SIZE`: Maximum size of arrays (used to store student data).
  - `MAX_ENTRIES`: Maximum number of entries (controls the maximum students in the system).
    
Functions:
1. Main Menu (`main` function):
   The main menu of the program is implemented in the `main()` function. It runs a loop and allows the user to select options via a series of cases. 
   - Input is taken from the user to select an operation.
   - Example of functions used:
     - `cin` for input.
     - `cout` for output display.
2. Sort Functions:
   - Sorting is implemented through bubble sort logic, but split across different sections (for roll number, midterm, final marks, and class). These sorts can be done in either ascending or descending order.
   - Sorting by Roll Number:
     - Sorting logic is applied based on the roll number.
     - `swap()` is used for swapping elements during sorting.
   - Sorting by Midterm Marks:
     - Similar logic but applied to the midterm marks array.
   - Sorting by Final Marks:
     - Uses the same logic as above but sorts the final marks.
   - Sorting by Class:
     - Bubble sort logic applied to the class array.
3. Add New Student Entry:
   - This feature allows the user to input new student data, including roll number, midterm marks, final marks, class, and grade.
   - Functions used:
     - `cin`: For taking input from the user.
     - `cout`: For output messages.
     - Checks to ensure new student entries do not exceed the allowed limit (`MAX_ENTRIES`).
4. Display All Records:
   - This function outputs all stored records in a tabular format. The records include:
     - Roll Number
     - Midterm Marks
     - Final Marks
     - Class
     - Grade
       
   - Functions used:
     - `cout`: For printing the records.
     - **Loops**: A `for` loop is used to traverse through the arrays and display the student records.

Control Flow and Error Handling:
- The program uses a switch-case structure to handle different operations.
- It also features an infinite loop that continues until the user decides to exit the program by pressing the appropriate key (this feature is not yet fully implemented but can be added using a `break` or `return` statement).
-
How the Program Works:
Main Program Flow:
1. Menu Display:
   - The program starts by displaying a menu of options to the user.
   - The user selects an option by entering a number corresponding to the desired operation.
2. Sort by Roll Number, Midterm Marks, Final Marks, or Class:
   - The program allows the user to sort the records based on any of the four attributes. The sorting can be done either in **ascending** or **descending** order.
   - Sorting is performed using the **bubble sort** algorithm.
3. Add New Student Entry:
   - The user is prompted to input the roll number, midterm marks, final marks, class, and grade of a new student.
   - The new student is then added to the existing records (up to a maximum of `MAX_ENTRIES`).
4. Display All Records:
   - This option outputs all the stored student records to the console.
   - Each student's details are displayed in a structured tabular format.
5. Exit Program (to be implemented):
   - The user should be able to exit the program by selecting a specific option or pressing a specific key (to be added).

How to Run the Program:
1. Compile: 
   You can compile the program using any standard C++ compiler. For example:
   ```bash
   g++ student_record_management.cpp -o student_record_management
   ```
2. Run:
   After compiling, you can run the program with:
   ```bash
   ./student_record_management
   ```
Code Example:

```cpp
// Main Menu
int choice;
while (true) {
    cout << "\nMenu:\n";
    cout << "1. Sort by Roll Number (Ascending)\n";
    cout << "2. Sort by Roll Number (Descending)\n";
    cout << "3. Sort by Midterm Marks (Ascending)\n";
    cout << "4. Sort by Midterm Marks (Descending)\n";
    cout << "5. Sort by Final Marks (Ascending)\n";
    cout << "6. Sort by Final Marks (Descending)\n";
    cout << "7. Add New Entry\n";
    cout << "8. Display All Records\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            sortByRollNumberAsc();
            break;
        case 2:
            sortByRollNumberDesc();
            break;
        case 3:
            sortByMidtermMarksAsc();
            break;
        case 4:
            sortByMidtermMarksDesc();
            break;
        case 5:
            sortByFinalMarksAsc();
            break;
        case 6:
            sortByFinalMarksDesc();
            break;
        case 7:
            addNewEntry();
            break;
        case 8:
            displayRecords();
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }
}
```

---

## Conclusion
This Student Record Management System demonstrates fundamental concepts of arrays, sorting algorithms, user input/output, and control flow using C++.
With additional features and enhancements, the system can be expanded into a fully functional student management application. 
