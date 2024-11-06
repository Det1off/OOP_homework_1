#pragma once
#include <string>
#include <iostream>
using namespace std;


class Kettle {
public:
    string brand;
    double capacity;
    bool isOn;
    int temperature;
    string color;

    void turnOn() { 
        isOn = true; 
    }

    void turnOff() { 
        isOn = false; 
    }

    void setTemperature(int temp) { 
        temperature = temp; 
    }

    void pourWater(double amount) { 
        capacity -= amount; 
    }

    void refillWater(double amount) { 
        capacity += amount; 
    }

};

class Book {
public:
    string title;
    string author;
    int pages;
    string genre;
    int currentPage;

    void open() { 
        cout << "Opening book..." << "\n"; 
    }

    void close() { 
        cout << "Closing book..." << "\n"; 
    }

    void turnPage(int pageNum) { 
        currentPage = pageNum; 
    }

    void read() { 
        cout << "Reading page " << currentPage << "..." << "\n"; 
    }

    void bookmark() {
        cout << "Bookmarking page " << currentPage << "\n"; 
    }

};

class Phone {
public:
    string model;
    string OS;
    int batteryLevel;
    bool isOn;
    string color;

    void turnOn() { 
        isOn = true; 
    }

    void turnOff() { 
        isOn = false; 
    }

    void call(string number) { 
        cout << "Calling " << number << "..." << "\n"; 
    }

    void charge(int amount) { 
        batteryLevel += amount; 
    }

    void checkBattery() { 
        cout << "Battery level: " << batteryLevel << "%" << "\n"; 
    }

};

class Pen {
public:
    string color;
    double inkLevel;
    string type;
    bool isCapped;
    string brand;

    void cap() { 
        isCapped = true; 
    }

    void uncap() { 
        isCapped = false; 
    }

    void write() { 
        cout << "Writing with pen..." << "\n"; inkLevel -= 0.1; 
    }

    void refill(double amount) { 
        inkLevel += amount; 
    }

    void checkInkLevel() {
        cout << "Ink level: " << inkLevel << "\n"; 
    }
};

class Banknote {
public:
    int denomination;
    string currency;
    string serialNumber;
    string condition;
    int yearOfIssue;

    void inspect() { 
        cout << "Inspecting banknote..." << "\n"; 
    }

    void validate() {
        cout << "Validating banknote..." << "\n"; 
    }

    void exchange(string currencyType) { 
        currency = currencyType; 
    }

    void updateCondition(string newCondition) { 
        condition = newCondition; 
    }

    void printInfo() {
        cout << denomination << " " << currency << " (" << yearOfIssue << "), Condition: " << condition << "\n";
    }
};