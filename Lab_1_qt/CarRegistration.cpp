//Завдання 1: Клас для реєстрації автомобіля
// CarRegistration.cpp
#include "CarRegistration.h"

// Constructor
CarRegistration::CarRegistration() {
    mYearOfManufacture = 0;
}

// Destructor
CarRegistration::~CarRegistration() {
    // Тут немає спеціальних дій, оскільки ми не використовуємо динамічну пам'ять
}

// Setters
void CarRegistration::setBrand(const std::string& brand) {
    mBrand = brand;
}

void CarRegistration::setOwner(const std::string& owner) {
    mOwner = owner;
}

void CarRegistration::setLicensePlate(const std::string& licensePlate) {
    mLicensePlate = licensePlate;
}

void CarRegistration::setYearOfManufacture(int year) {
    mYearOfManufacture = year;
}

void CarRegistration::setTechnicalCondition(const std::string& condition) {
    mTechnicalCondition = condition;
}

void CarRegistration::setRepairYears(const std::vector<int>& years) {
    mRepairYears = years;
}

// Getters
std::string CarRegistration::getBrand() const {
    return mBrand;
}

std::string CarRegistration::getOwner() const {
    return mOwner;
}

std::string CarRegistration::getLicensePlate() const {
    return mLicensePlate;
}

int CarRegistration::getYearOfManufacture() const {
    return mYearOfManufacture;
}

std::string CarRegistration::getTechnicalCondition() const {
    return mTechnicalCondition;
}

std::vector<int> CarRegistration::getRepairYears() const {
    return mRepairYears;
}
