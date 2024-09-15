//Завдання 2: Основна програма для роботи з масивом або вектором об'єктів
// main.cpp
#include <iostream>
#include <vector>
#include "CarRegistration.h"

using namespace std;

int main() {
    // Створюємо вектор для зберігання інформації про кілька автомобілів
    vector<CarRegistration> carRegistry;

    // Створюємо новий екземпляр автомобіля
    CarRegistration car1;
    car1.setBrand("Toyota");
    car1.setOwner("John Doe");
    car1.setLicensePlate("AA1234BB");
    car1.setYearOfManufacture(2010);
    car1.setTechnicalCondition("Good");
    car1.setRepairYears({ 2015, 2018 });

    // Додаємо автомобіль до реєстру
    carRegistry.push_back(car1);

    // Виводимо інформацію про зареєстровані автомобілі
    for (const auto& car : carRegistry) {
        cout << "Brand: " << car.getBrand() << endl;
        cout << "Owner: " << car.getOwner() << endl;
        cout << "License Plate: " << car.getLicensePlate() << endl;
        cout << "Year of Manufacture: " << car.getYearOfManufacture() << endl;
        cout << "Technical Condition: " << car.getTechnicalCondition() << endl;

        cout << "Repair Years: ";
        for (int year : car.getRepairYears()) {
            cout << year << " ";
        }
        cout << endl;
    }

    return 0;
}
