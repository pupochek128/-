#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() {
        count = 1;
    }

    Counter(int initial_count) {
        count = initial_count;
    }

    void increment() {
        count++;
    }

    void decrement() {
        count--;
    }

    int getValue() {
        return count;
    }
};

int main() {
    Counter counter;

    std::string choice;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice;

    if (choice == "да") {
        int initial_value;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        counter = Counter(initial_value);
    }

    while (true) {
        std::string command;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increment();
        } else if (command == "-") {
            counter.decrement();
        } else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        } else if (command == "x") {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }

    return 0;
}