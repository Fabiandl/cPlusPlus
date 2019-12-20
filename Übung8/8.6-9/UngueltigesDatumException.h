#ifndef INC_8_6_9_UNGUELTIGESDATUMEXCEPTION_H
#define INC_8_6_9_UNGUELTIGESDATUMEXCEPTION_H
#include <exception>
#include <stdexcept>

//Macht man das so? Das wirkt irgendwie sehr sehr komisch.
class UngueltigesDatumException : public std::runtime_error{
public:
    UngueltigesDatumException() : std::runtime_error("UngueltigesDatumException"){}
    UngueltigesDatumException(const std::string& s) : std::runtime_error(s){}
};

#endif //INC_8_6_9_UNGUELTIGESDATUMEXCEPTION_H
