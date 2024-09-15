//Завдання 1: Клас для реєстрації автомобіля
// CarRegistration.h
#include <string>
#include <vector>

class CarRegistration {
public:
    CarRegistration();
    ~CarRegistration();

    // Setters
    void setBrand(const std::string& brand);
    void setOwner(const std::string& owner);
    void setLicensePlate(const std::string& licensePlate);
    void setYearOfManufacture(int year);
    void setTechnicalCondition(const std::string& condition);
    void setRepairYears(const std::vector<int>& years);

    // Getters
    std::string getBrand() const;
    std::string getOwner() const;
    std::string getLicensePlate() const;
    int getYearOfManufacture() const;
    std::string getTechnicalCondition() const;
    std::vector<int> getRepairYears() const;

private:
    std::string mBrand;
    std::string mOwner;
    std::string mLicensePlate;
    int mYearOfManufacture;
    std::string mTechnicalCondition;
    std::vector<int> mRepairYears;  // роки проведення ремонту
};
