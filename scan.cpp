#include <iostream>
#include <limits> // Include the header for numeric_limits

struct q2 {
    int age;
    char name[20];
};

// Function to display the contents of a q2 object
void display(const q2& data) {
    std::cout << "Age: " << data.age << "\tName: " << data.name << std::endl;
}

int main() {
    // Declare an array of q2 objects to store 5 sets of integers and strings
    q2 data[5];

    // Read and store integers and strings
    for (int i = 0; i < 5; ++i) {
        // Read and store the integer age input by the user
        std::cout << "Enter age for set " << i + 1 << ": ";
        std::cin >> data[i].age;

        // Clear the input buffer to handle potential issues
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Read and store the string name input by the user
        std::cout << "Enter name for set " << i + 1 << ": ";
        
        // Using cin.getline to handle potential buffer overflow
        std::cin.getline(data[i].name, sizeof(data[i].name));

        // Display the entered data
        display(data[i]);
    }

    return 0;
}
