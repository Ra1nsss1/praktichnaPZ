#include <iostream>
#include <Windows.h>
using namespace std;
//інтерфейс
class IWeaponBehavior {
public:
    virtual ~IWeaponBehavior() = default;
    virtual void UseWeapon() const = 0;
};
// різна поведінка всьої зброї
class AxeBehavior : public IWeaponBehavior {
public:
    void UseWeapon() const override {
        cout << "рубає сокирою!\n";
    }
};
class BowBehavior : public IWeaponBehavior {
public:
    void UseWeapon() const override {
        cout << "стріляє з лука!\n";
    }
};
class SwordBehavior : public IWeaponBehavior {
public:
    void UseWeapon() const override {
        cout << "атакує мечем!\n";
    }
};