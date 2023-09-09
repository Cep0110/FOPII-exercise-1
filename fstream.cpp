#include <iostream>
#include <fstream>

class Rectangle {
private:
    float width;
    float height;

public:
    // Setter functions
    void setWidth(float w) {
        width = w;
    }

    void setHeight(float h) {
        height = h;
    }

    // Function to calculate the area
    float calculateArea() {
        return width * height;
    }

    // Function to display the width, height, and area
    void display() {
        std::cout << "Width: " << width << "\n";
        std::cout << "Height: " << height << "\n";
        std::cout << "Area: " << calculateArea() << "\n";
    }

    // Function to save the rectangle details to a file
    void saveToFile(const std::string& filename) {
        // Open the file for writing
        std::ofstream file(filename);
        if (!file.is_open()) {
            std::cout << "Error opening file.\n";
            return;
        }

        // Write the rectangle details to the file
        file << "Width: " << width << "\n";
        file << "Height: " << height << "\n";
        file << "Area: " << calculateArea() << "\n";

        // Close the file
        file.close();

        std::cout << "Rectangle details saved to file: " << filename << "\n";
    }
};

int main() {
    // Create an instance of the Rectangle class
    Rectangle rectangle;
    // Set the dimensions
    rectangle.setWidth(8.5);
    rectangle.setHeight(4.2);
    // Display the details
    rectangle.display();
   // Save the rectangle details to a file
    std::string filename = "rectangle_details.txt";
    rectangle.saveToFile(filename);

    return 0;
}
