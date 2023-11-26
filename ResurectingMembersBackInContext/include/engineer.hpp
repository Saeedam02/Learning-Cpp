#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.hpp"

// Engineer is doing private inheritance

class Engineer : private Person {
  friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);

 public:
  Engineer();
  ~Engineer();

  void build_something() {
    m_full_name = "John Snow";  // OK
    m_age = 23;                 // OK
                                // m_address = "897-78-723"; Compiler error
  }
  // We use *using* keyword when we want to give access to private members of
  // parent class which is inheritanced privately and now we wanna use that
  // members in the child class of this class
 public:
  using Person::add;

 protected:
  using Person::get_address;
  using Person::get_age;
  using Person::get_full_name;
  // using Person::m_address; // Compiler error

  int get_contract_count() const { return contract_count; }

 private:
  int contract_count{0};
};

#endif  // ENGINEER_H