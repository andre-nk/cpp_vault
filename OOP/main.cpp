#include <iostream>

using namespace std;

//#2A: ABSTRACTION EXAMPLE => abstract class to be implemented
class AbstractSith
{
    virtual void signatureDarkSkill() = 0;
};

class ForceSensitive
{
    // These fields will be accessible for the children classes, but not for public instances.
protected:
    string name;
    int age;

    // These field will only be accesible inside the parent class
private:
    int hitPoints;
    double midichlorians;

    // Private Constructor (useful in certain condifiton)
    //  Darth(string name, int age, int hitPoints, double midichlorians, OffensiveSkill offensiveSkills[3]){
    //      name = name;
    //      age = age;
    //      hitPoints = hitPoints;
    //      midichlorians = midichlorians;
    //      offensiveSkills = offensiveSkills;
    //  }

public:
    // Methods
    void characterDetails()
    {
        cout << "Name: " << name << endl;
        cout << "HP: " << hitPoints << endl;
        cout << "Midichlorians: " << midichlorians << endl;
    }

    // Getters and Setters (#1: ENCAPSULATION EXAMPLE => access private fields)
    void setMidichlorians(double _midichlorians)
    {
        midichlorians = _midichlorians;
    }
    string getName()
    {
        return name;
    }

    // Public constructor
    ForceSensitive(string _name, int _age, int _hitPoints, double _midichlorians)
    {
        name = _name;
        age = _age;
        hitPoints = _hitPoints;
        midichlorians = _midichlorians;
    }

    //#4a: POLYMORPHISM
    // Virtual methods => can be overriden by children into other forms, but when it's not, it will call this method instead
    virtual void action()
    {
        cout << "Force Sensitive user is practicing stone throw" << endl;
    }
};

//#3: INHERITANCE (extends), public keyword makes the parent's methods accessible
class Sith : public ForceSensitive
{
public:
    string darkSkill;

    Sith(string _name, int _age, int _hitPoints, double _midichlorians, string _darkSkill)
        // assign constructor params to parent class (super)
        : ForceSensitive(_name, _age, _hitPoints, _midichlorians)
    {
        darkSkill = _darkSkill;
    }

    //#4b: POLYMORPHISM Override
    void action()
    {
        cout << name << " is attacking with: " << darkSkill << endl;
    }
};

class Jedi : public ForceSensitive
{
public:
    string meditationSkill;

    Jedi(string _name, int _age, int _hitPoints, double _midichlorians, string _meditationSkill)
        // assign constructor params to parent class (super)
        : ForceSensitive(_name, _age, _hitPoints, _midichlorians)
    {
        meditationSkill = _meditationSkill;
    }

    //#4b: POLYMORPHISM Override
    void action()
    {
        cout << name << " is meditating with: " << meditationSkill << endl;
    }
};

int main(int argc, const char *argv[])
{
    // By default, each class has a default constructor by the compiler
    // Which will be replaced, once we declare our custom constructor
    Jedi grogu = Jedi(
        "Grogu",
        50,
        5000,
        22500,
        "Ataru");
    grogu.characterDetails();

    //#4c: POLYMORPHISM: Usage of Overriden Methods on Child Class (via Pointers and virtual parent's method)
    ForceSensitive *p_grogu = &grogu;
    p_grogu -> action();


    cout << endl;

    Sith darthTalon = Sith(
        "Darth Talon",
        24,
        4500,
        8800.0,
        "Elusive Dark Slash");

    // By default, inheritance is private, thus parent's methods aren't accessible
    // Fixed by adding public keyword after inheritance colon (extends)

    //#4c: POLYMORPHISM: Usage of Overriden Methods on Child Class (via Pointers and virtual parent's method)
    ForceSensitive *p_darth_talon = &darthTalon;
    p_darth_talon -> action();

    return 0;
}
