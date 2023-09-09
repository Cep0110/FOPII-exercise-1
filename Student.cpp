#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double grade;

public:
    // Setter function to set student's information
    void setStudentInfo(const std::string& studentName, int studentAge, double studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }

    // Getter functions to retrieve student's information
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getGrade() const {
        return grade;
    }
};

int main() {
    // Create student objects and set their information
    Student student1;
    student1.setStudentInfo(" Kaleb Tasew", 18, 85.5);

    Student student2;
    student2.setStudentInfo("Jemil Abrar", 17, 92.0);

    Student student3;
    student3.setStudentInfo("Biniyam Tesfaye", 19, 77.8);

    // Display each student's information
    std::cout << "Student 1: " << student1.getName() << ", Age: " << student1.getAge() << ", Grade: " << student1.getGrade() << std::endl;
    std::cout << "Student 2: " << student2.getName() << ", Age: " << student2.getAge() << ", Grade: " << student2.getGrade() << std::endl;
    std::cout << "Student 3: " << student3.getName() << ", Age: " << student3.getAge() << ", Grade: " << student3.getGrade() << std::endl;

    // Calculate the average grade for the group of students
    double totalGrade = student1.getGrade() + student2.getGrade() + student3.getGrade();
    int numStudents = 3;
    double averageGrade = (numStudents > 0) ? (totalGrade / numStudents) : 0.0;

    std::cout << "Average Grade: " << averageGrade << std::endl;

    return 0;
