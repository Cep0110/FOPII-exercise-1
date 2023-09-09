#include <iostream>
#include <string>

class Invoice {
private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int pricePerItem;
    double valueAddedTax;
    double discountRate;

public:
    // Constructor
    Invoice(const std::string& partNumber, const std::string& partDescription, int quantity, int pricePerItem)
        : partNumber(partNumber), partDescription(partDescription), quantity(quantity), pricePerItem(pricePerItem), valueAddedTax(0.20), discountRate(0.0) {}

    // Setters
    void setPartNumber(const std::string& partNumber) {
        this->partNumber = partNumber;
    }

    void setPartDescription(const std::string& partDescription) {
        this->partDescription = partDescription;
    }

    void setQuantity(int quantity) {
        this->quantity = (quantity > 0) ? quantity : 0;
    }

    void setPricePerItem(int pricePerItem) {
        this->pricePerItem = (pricePerItem > 0) ? pricePerItem : 0;
    }

    void setValueAddedTax(double valueAddedTax) {
        this->valueAddedTax = (valueAddedTax >= 0.0) ? valueAddedTax : 0.0;
    }

    void setDiscountRate(double discountRate) {
        this->discountRate = (discountRate >= 0.0) ? discountRate : 0.0;
    }

    // Getters
    std::string getPartNumber() const {
        return partNumber;
    }

    std::string getPartDescription() const {
        return partDescription;
    }

    int getQuantity() const {
        return quantity;
    }

    int getPricePerItem() const {
        return pricePerItem;
    }

    double getValueAddedTax() const {
        return valueAddedTax;
    }

    double getDiscountRate() const {
        return discountRate;
    }

    // Member function
    double getInvoiceAmount() const {
        double totalAmount = quantity * pricePerItem;
        double taxAmount = totalAmount * valueAddedTax;
        double discountAmount = totalAmount * discountRate;
        return totalAmount + taxAmount - discountAmount;
    }
};

int main() {
    Invoice invoice("ABC123", "Example Part", 5, 100);

    // Display initial values using getter functions
    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price per Item: " << invoice.getPricePerItem() << std::endl;
    std::cout << "Value Added Tax (VAT) Rate: " << invoice.getValueAddedTax() << std::endl;
    std::cout << "Discount Rate: " << invoice.getDiscountRate() << std::endl;

    // Set new values using setter functions
    invoice.setPartNumber("XYZ789");
    invoice.setPartDescription("New Part");
    invoice.setQuantity(10);
    invoice.setPricePerItem(75);
    invoice.setValueAddedTax(0.15);
    invoice.setDiscountRate(0.1);

    // Display updated values using getter functions
    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price per Item: " << invoice.getPricePerItem() << std::endl;
    std::cout << "Value Added Tax (VAT) Rate: " << invoice.getValueAddedTax() << std::endl;
    std::cout << "Discount Rate: " << invoice.getDiscountRate() << std::endl;

    // Calculate and display the invoice amount
    double invoiceAmount = invoice.getInvoiceAmount();
    std::cout << "Invoice Amount: " << invoiceAmount << std::endl;

    return 0;
}
