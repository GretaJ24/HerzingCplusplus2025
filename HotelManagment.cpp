#include <iostream>
#include <vector>
#include <string>

using namespace std;

//class to represent a room in the hotel
class Room {
public:
    int roomNumber;
    bool isOccupied; //keeps track of the status of the rooms

    Room(int number) : roomNumber(number), isOccupied(false) {}
};

//class to represent the hotel
class Hotel {
private:
    vector<Room> rooms;

public:
    Hotel(int numberOfRooms) {
        for (int i = 1; i <= numberOfRooms; i++) {
            rooms.push_back(Room(i));
        }
    }
    //shows the list of rooms and their status (avalible or occupied)
    void displayRooms() {
        cout << "List of Rooms: " << endl;
        for (auto& room : rooms) {
            cout << "Room " << room.roomNumber << " - "
                 << (room.isOccupied ? "Occupied" : "Available") << endl;
        }
    }
    //changes the staus of a room to occupied if it is available
    bool bookRoom(int roomNumber) {
        if (roomNumber > 0 && roomNumber <= rooms.size()) {
            if (!rooms[roomNumber - 1].isOccupied) {
                rooms[roomNumber - 1].isOccupied = true;
                cout << "Room " << roomNumber << " has been booked!" << endl;
                return true;
            } else {
                cout << "Room " << roomNumber << " is already occupied!" << endl;
                return false;
            }
        } else {
            cout << "Invalid room number!" << endl;
            return false;
        }
    }
    //removes a room from the list, will not remove an occupied room
    bool removeRoom(int roomNumber) {
        if (roomNumber > 0 && roomNumber <= rooms.size()) {
            if (!rooms[roomNumber - 1].isOccupied) {
                rooms.erase(rooms.begin() + roomNumber - 1);
                cout << "Room " << roomNumber << " has been removed from the hotel." << endl;
                return true;
            } else {
                cout << "Room " << roomNumber << " is occupied and cannot be removed." << endl;
                return false;
            }
        } else {
            cout << "Invalid room number!" << endl;
            return false;
        }
    }
    //adds a new room to the hotel
    void addRoom(int roomNumber) {
        rooms.push_back(Room(roomNumber));
        cout << "Room " << roomNumber << " has been added to the hotel." << endl;
    }
    //changes the status of a room to available if it is occupied
    bool checkoutRoom(int roomNumber) {
        if (roomNumber > 0 && roomNumber <= rooms.size()) {
            if (rooms[roomNumber - 1].isOccupied) {
                rooms[roomNumber - 1].isOccupied = false;
                cout << "Room " << roomNumber << " is now available!" << endl;
                return true;
            } else {
                cout << "Room " << roomNumber << " is already available!" << endl;
                return false;
            }
        } else {
            cout << "Invalid room number!" << endl;
            return false;
        }
    }
};

int main() {
    Hotel hotel(5);  // Hotel with 5 rooms

    int choice, roomNumber;

    do {
        cout << "\nHotel Management System Menu:" << endl;
        cout << "1. Display Rooms" << endl;
        cout << "2. Book Room" << endl;
        cout << "3. Remove Room" << endl;
        cout << "4. Add Room" << endl;
        cout << "5. Checkout Room" << endl;
        cout << "6. Exit" << endl;
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
                hotel.addRoom(roomNumber);
                break;
            case 5:
                cout << "Enter room number to checkout: ";
                cin >> roomNumber;
                hotel.checkoutRoom(roomNumber);
                break;
            case 6:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}