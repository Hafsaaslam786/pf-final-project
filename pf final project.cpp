#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
};

struct Book {
    int id;
    string title;
};

struct Attendance {
    int studentId;
    string status;   // Present / Absent
};

struct Grade {
    int studentId;
    char grade;
};

vector<Student> students;
vector<Book> books;
vector<Attendance> attendanceList;
vector<Grade> grades;

void addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin >> s.name;
    students.push_back(s);
    cout << "Student Added Successfully!\n";
}

void viewStudents() {
    cout << "\n--- Student List ---\n";
    for (int i = 0; i < students.size(); i++) {
        cout << "ID: " << students[i].id
             << " Name: " << students[i].name << endl;
    }
}

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cout << "Enter Book Title: ";
    cin >> b.title;
    books.push_back(b);
    cout << "Book Added Successfully!\n";
}

void viewBooks() {
    cout << "\n--- Library Books ---\n";
    for (int i = 0; i < books.size(); i++) {
        cout << "Book ID: " << books[i].id
             << " Title: " << books[i].title << endl;
    }
}

void markAttendance() {
    Attendance a;
    cout << "Enter Student ID: ";
    cin >> a.studentId;
    cout << "Enter Status (Present/Absent): ";
    cin >> a.status;
    attendanceList.push_back(a);
    cout << "Attendance Marked!\n";
}

void viewAttendance() {
    cout << "\n--- Attendance Records ---\n";
    for (int i = 0; i < attendanceList.size(); i++) {
        cout << "Student ID: " << attendanceList[i].studentId
             << " Status: " << attendanceList[i].status << endl;
    }
}

void addGrade() {
    Grade g;
    cout << "Enter Student ID: ";
    cin >> g.studentId;
    cout << "Enter Grade (A/B/C/D/F): ";
    cin >> g.grade;
    grades.push_back(g);
    cout << "Grade Added!\n";
}

void viewGrades() {
    cout << "\n--- Grade Records ---\n";
    for (int i = 0; i < grades.size(); i++) {
        cout << "Student ID: " << grades[i].studentId
             << " Grade: " << grades[i].grade << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Integrated Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Add Book\n";
        cout << "4. View Books\n";
        cout << "5. Mark Attendance\n";
        cout << "6. View Attendance\n";
        cout << "7. Add Grade\n";
        cout << "8. View Grades\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: addBook(); break;
            case 4: viewBooks(); break;
            case 5: markAttendance(); break;
            case 6: viewAttendance(); break;
            case 7: addGrade(); break;
            case 8: viewGrades(); break;
            case 9: cout << "Program Exited Successfully.\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 9);

    return 0;
}
