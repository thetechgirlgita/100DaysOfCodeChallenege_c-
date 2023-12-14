//Encapsulation is used to ensure that "sensitive" data is hidden from users.

//To accomplish this, class variables/attributes must be declared private (they cannot be accessed from outside the class).

//You can give public get and set methods if you want others to read or change the value of a private member.

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

