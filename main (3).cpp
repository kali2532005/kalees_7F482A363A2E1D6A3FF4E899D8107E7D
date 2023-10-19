#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Custom comparison function to sort students by CGPA in descending order
bool compareByCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa;
}

// Function to sort a list of students by CGPA in descending order
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Example input list of students
    std::vector<Student> students = {
        {"Alice", "S001", 3.8},
        {"Bob", "S002", 3.5},
        {"Charlie", "S003", 4.0},
        {"David", "S004", 3.9}
    };

    // Sort the students by CGPA
    sort_students(students);

    // Print the sorted list of students
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}
