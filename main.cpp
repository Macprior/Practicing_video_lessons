#include <iostream>
#include <vector>
#include <cmath>

// gives a new identifier for an existing data type

// typedef std::string text_t;
// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// same as typedef, but works better
using text_t =  std::string;

// allows for multiple values for the same variable
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int basicTerms() {
    // uses first namespace for the entire function
    // using namespace first;

    // whole numbers
    int x;

    x = 29;

    // numbers including decimals
    double y = 92.234;

    // single character
    char z = 'A';

    // true or false
    bool forSale = false;

    // string
    std::string name = "Marco";

    std::cout << name << '\n';

    // replaces the string func with text_t with the typedef
    text_t firstName = "Marco";

    // something that will stay the same throughout the program
    const double PI = 3.14159265358979323846;
    const double RADIUS = 10;
    const double CIRCUMFRENCE = 2 * PI * RADIUS;

    std::cout << "The circumfrence of your circle is " << CIRCUMFRENCE << std::endl;

    // output cout <<
    // std::cout << "whats your name?" << std::endl;

    // input cin >>
    // getline makes it where there can be spaces in the answer, std::ws makes it where any whitespaces are removed
    // std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';

    std::cout << x + y << '\n';
    std::cout << z << '\n';
    std::cout << forSale << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << "Your grade is " << z << '\n';
    std::cout << "The first name is " << firstName << '\n';
    return 0;
}

int math(){

    double firstNumber = 3.14;
    double secondNumber = 5;
    double outcome1;
    double outcome2;

    // minimum value
    outcome1 = std::min(firstNumber, secondNumber);

    // maximum value
    outcome2 = std::max(firstNumber, secondNumber);

    std::cout << outcome1 << '\n';
    std::cout << outcome2 << '\n';

    // raise to the power

    outcome1 = pow(2, 4);
    std::cout << outcome1 << '\n';

    // square root
    outcome1 = sqrt(9);
    std::cout << outcome1 << '\n';

    // absolute value
    outcome1 = abs(-7);
    std::cout << outcome1 << '\n';

    // round
    outcome1 = round(firstNumber);
    std::cout << outcome1 << '\n';

    // round up
    outcome1 = ceil(firstNumber);
    std::cout << outcome1 << '\n';

    // round down
    outcome1 = floor(firstNumber);
    std::cout << outcome1 << '\n';

    // calculate hypotenuse of triangle

    double a;
    double b;
    double c;

    // std::cout << "What is the value of a?" << std::endl;
    // std::cin >> a;

    // std::cout << "What is the value of b?" << std::endl;
    // std::cin >> b;

    // c = std::sqrt(pow(a,2) + pow(b,2));
    // std::cout << "The value of the hypotenuse is " << c << '\n';

    int students = 20;

    // all these do the same thing (add 1). all 3 of these ways work with add and subtract, but only way #1 and #2 work with mult and divide
    students = students + 1;
    students+= 1;
    students++;

    std::cout << students << '\n';

    students/=3;

    // shows the remainder with modulos
    int remainder = students % 2;

    std::cout << remainder << '\n';

    // converts 100 to a character
    std::cout << (char) 100 << std::endl;

    int correct = 8;
    int questions = 10;

    // this is WRONG as questions is an integer
    // double score = correct/questions * 100;

    double score = correct/(double)questions *100;

    std::cout << score << "%" << '\n';
    return 0;
}

int main() {
    std::cout << math() << '\n';
}
