#include <iostream>
#include <string>
#include <ctime>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Setter function to set car's information
    void setCarInfo(const std::string& carMake, const std::string& carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
    }

    // Getter functions to retrieve car's information
    std::string getMake() const {
        return make;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Function to calculate the age of the car
    int calculateCarAge() const {
        time_t now = time(nullptr);
        tm* localTime = localtime(&now);
        int currentYear = localTime->tm_year + 1900;
        return currentYear - year;
    }
};

int main() {
    // Create a car object and set its information
    Car myCar;
    myCar.setCarInfo("Toyota", "Camry", 2015);

    // Display the car's information
    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    // Calculate and display the age of the car
    int carAge = myCar.calculateCarAge();
    std::cout << "Car Age: " << carAge << " years" << std::endl;

    return 0;
}
