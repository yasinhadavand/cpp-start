#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User {
private:
    string username;
    string password;

public:
    User(string uname, string pwd) {
        username = uname;
        password = pwd;
    }

    string getUsername() {
        return username;
    }

    string getPassword() {
        return password;
    }
};

class AuthenticationSystem {
private:
    vector<User> users;

public:
    AuthenticationSystem() {}

    void registerUser(string username, string password) {
        User newUser(username, password);
        users.push_back(newUser);
        cout << "Registration successful!" << endl;
    }

    User* findUser(string username) {
        for (size_t i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == username) {
                return &users[i];
            }
        }
        return nullptr;
    }

    bool authenticateUser(string username, string password) {
        User* user = findUser(username);

        if (user != nullptr && user->getPassword() == password) {
            cout << "Authentication successful!" << endl;
            return true;
        } else {
            cout << "Authentication failed. Please check your username and password." << endl;
            return false;
        }
    }
};

int main() {
    AuthenticationSystem authSystem;

    while (true) {
        cout << "\nLogin and Registration System" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string username, password;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                authSystem.registerUser(username, password);
                break;
            }
            case 2: {
                string username, password;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                authSystem.authenticateUser(username, password);
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}