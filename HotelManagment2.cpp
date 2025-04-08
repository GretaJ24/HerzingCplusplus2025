#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Parent class to represent a room in the hotel
class Room {
public:
    int roomNumber;
    bool isOccupied; // keeps track of the status of the rooms

    Room(int number) : roomNumber(number), isOccupied(false) {}

    virtual void displayInfo() {
        cout << "Room " << roomNumber << " - " << (isOccupied ? "Occupied" : "Available") << endl;
    }
};

// Child class to represent a Suite which is a type of Room
class Suite : public Room {
public:
    string amenities; // additional features specific to a suite

    Suite(int number, string amenitiesList) : Room(number), amenities(amenitiesList) {}

    // Override displayInfo to show Suite-specific information
    void displayInfo() override {
        cout << "Suite " << roomNumber << " - " << (isOccupied ? "Occupied" : "Available") 
             << " | Amenities: " << amenities << endl;
    }
};

// Class to represent the hotel
class Hotel {
private:
    vector<Room*> rooms; // Use a pointer to Room, so we can store both Room and Suite objects

public:
    Hotel(int numberOfRooms) {
        // Adding standard rooms (Room) to the hotel
        for (int i = 1; i <= numberOfRooms; i++) {
            rooms.push_back(new Room(i));
        }
    }

    // Adds a new Suite to the hotel
    void addSuite(int roomNumber, string amenitiesList) {
        rooms.push_back(new Suite(roomNumber, amenitiesList));
        cout << "Suite " << roomNumber << " with amenities " << amenitiesList << " has been added to the hotel." << endl;
    }

    // Displays all rooms and suites
    void displayRooms() {
        cout << "List of Rooms and Suites: " << endl;
        for (auto& room : rooms) {
            room->displayInfo();
        }
    }

    // Changes the status of a room to occupied if it is available
    bool bookRoom(int roomNumber) {
        for (auto& room : rooms) {
            if (room->roomNumber == roomNumber) {
                if (!room->isOccupied) {
                    room->isOccupied = true;
                    cout << "Room/Suite " << roomNumber << " has been booked!" << endl;
                    return true;
                } else {
                    cout << "Room/Suite " << roomNumber << " is already occupied!" << endl;
                    return false;
                }
            }
        }
        cout << "Room/Suite number " << roomNumber << " not found!" << endl;
        return false;
    }

    // Changes the status of a room to available if it is occupied
    bool checkoutRoom(int roomNumber) {
        for (auto& room : rooms) {
            if (room->roomNumber == roomNumber) {
                if (room->isOccupied) {
                    room->isOccupied = false;
                    cout << "Room/Suite " << roomNumber << " is now available!" << endl;
                    return true;
                } else {
                    cout << "Room/Suite " << roomNumber << " is already available!" << endl;
                    return false;
                }
            }
        }
        cout << "Room/Suite number " << roomNumber << " not found!" << endl;
        return false;
    }

    // Removes a room or suite from the hotel
    bool removeRoom(int roomNumber) {
        for (auto it = rooms.begin(); it != rooms.end(); ++it) {
            if ((*it)->roomNumber == roomNumber) {
                if (!(*it)->isOccupied) {
                    delete *it;  // Free memory
                    rooms.erase(it);
                    cout << "Room/Suite " << roomNumber << " has been removed from the hotel." << endl;
                    return true;
                } else {
                    cout << "Room/Suite " << roomNumber << " is occupied and cannot be removed." << endl;
                    return false;
                }
            }
        }
        cout << "Room/Suite number " << roomNumber << " not found!" << endl;
        return false;
    }

    ~Hotel() {
        for (auto& room : rooms) {
            delete room;  // Free memory for all rooms and suites
        }
    }
};

int main() {
    Hotel hotel(5);  // Hotel with 5 rooms

    int choice, roomNumber;
    string amenities;

    do {
        cout << "\nHotel Management System Menu:" << endl;
        cout << "1. Display Rooms" << endl;
        cout << "2. Book Room" << endl;
        cout << "3. Remove Room" << endl;
        cout << "4. Add Room" << endl;
        cout << "5. Add Suite" << endl;
        cout << "6. Checkout Room" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.displayRooms();
                break;
            case 2:
                cout << "Enter room number to book: ";
                cin >> roomNumber;
                hotel.bookRoom(roomNumber);
                break;
            case 3:
                cout << "Enter room number to remove: ";
                cin >> roomNumber;
                hotel.removeRoom(roomNumber);
                break;
            case 4:
                cout << "Enter room number to add: ";
                cin >> roomNumber;
                hotel.bookRoom(roomNumber);
                break;
            case 5:
                cout << "Enter room number for the new suite: ";
                cin >> roomNumber;
                cout << "Enter amenities for the suite: ";
                cin.ignore();  // To ignore the leftover newline
                getline(cin, amenities);
                hotel.addSuite(roomNumber, amenities);
                break;
            case 6:
                cout << "Enter room number to checkout: ";
                cin >> roomNumber;
                hotel.checkoutRoom(roomNumber);
                break;
            case 7:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
