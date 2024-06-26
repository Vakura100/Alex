

#include <Iostream>
#include <string>

class persona {

public:

    persona() = default;//Default constructor
    persona(const persona &persona);// Copy constructor
    persona(std::string gender, std::string name, int age, float height, float weight);//Parameters    constructor
    ~persona() = default;//Destructor

    std::string getGender() const;
    void setGender(std::string gender);

    std::string getName() const;
    void setName(std::string name);

    int getAge() const;
    void setAge(int Age);

    float getHeight() const;
    void setHeight(float height);

    float getWeight() const;
    void setWeight(float weight);

private:

    std::string gender;
    std::string name;
    int age;
    float height;
    float weight;
};




#endif HERENCIA_PERSONA_H

