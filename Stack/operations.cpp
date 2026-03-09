#include <iostream>
using namespace std;

class Stack {
public:
    int *array;
    int capacity;
    int top;

    Stack(int size) {
        capacity = size;
        array = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] array;
    }
};

int main() {
    int size, choice, value;

    cout << "Enter the size of stack: ";
    cin >> size;

    Stack s1(size); 
    do {
        cout << "\n===============SELECT YOUR CHOICE===================\n";
        cout << "1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
        cout << "Select your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // PUSH
                if (s1.top == s1.capacity - 1) {
                    cout << "\n====STACK OVERFLOW====\n";
                } else {
                    cout << "Enter value: ";
                    cin >> value;                 
                    s1.array[++s1.top] = value; 
                    cout << "ELEMENT ADDED SUCCESSFULLY\n";
                }
                break;

            case 2: // POP
                if (s1.top == -1) {
                    cout << "====STACK UNDERFLOW====\n";
                } else {
                    cout << "REMOVED ELEMENT: " << s1.array[s1.top--] << "\n";
                }
                break;

            case 3: // DISPLAY
                if (s1.top == -1) {
                    cout << "STACK IS EMPTY\n";
                } else {
                    cout << "Stack (top to bottom): ";
                    for (int i = s1.top; i >= 0; i--) {
                        cout << s1.array[i] << "   ";
                    }
                    cout << "\n";
                }
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "INVALID CHOICE! TRY AGAIN....\n";
        }

    } while (choice != 4);

    return 0;
}