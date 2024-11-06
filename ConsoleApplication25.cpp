#include "home.h"


int main() {

    Kettle kettle;
    kettle.brand = "Bosch";
    kettle.capacity = 1.5;
    kettle.color = "Silver";
    kettle.turnOn();
    kettle.setTemperature(90);

    Book book;
    book.title = "1984";
    book.author = "George Orwell";
    book.genre = "Dystopian";
    book.pages = 328;
    book.currentPage = 1;
    book.open();
    book.read();

    Phone phone;
    phone.model = "iPhone 14";
    phone.OS = "iOS";
    phone.batteryLevel = 85;
    phone.color = "Black";
    phone.turnOn();
    phone.call("123-456-7890");

    Pen pen;
    pen.brand = "Parker";
    pen.color = "Blue";
    pen.type = "Gel";
    pen.inkLevel = 100;
    pen.isCapped = true;
    pen.uncap();
    pen.write();

    Banknote banknote;
    banknote.denomination = 500;
    banknote.currency = "UAH";
    banknote.serialNumber = "AB1234567";
    banknote.condition = "New";
    banknote.yearOfIssue = 2020;
    banknote.inspect();
    banknote.printInfo();
}