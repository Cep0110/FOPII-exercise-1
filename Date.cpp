 #include <iostream>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int month, int day, int year) {
        setMonth(month); // Set the month using the setter to ensure the value is within the valid range
        this->day = day;
        this->year = year;
    }

    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            this->month = month;
        } else {
            this->month = 1; // Set the default value of the month to 1 if it's out of range
        }
    }

    void setDay(int day) {
        this->day = day;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main() {
    Date date1(2, 15, 2023);
    Date date2(13, 32, 2024);

    date1.displayDate(); // Output: 2/15/2023
    date2.displayDate(); // Since 13 is an invalid month value, it defaults to 1/32/2024

    // Test the setter and getter functions
    date1.setMonth(10);
    date1.setDay(20);
    date1.setYear(2025);

    std::cout << "Updated date: " << date1.getMonth() << "/" << date1.getDay() << "/" << date1.getYear() << std::endl;
    // Output: Updated date: 10/20/2025

    return 0;
}


 
 
           
