#include <iostream>
using namespace std;

template<class X>
class AddElements {
    X element1;

public:
    AddElements(X a) {
        element1 = a;
    }

    X add(X b) {
        return element1 + b;
    }
};

template<>
class AddElements<string> {
    string element1;

public:
    AddElements(string a) {
        element1 = a;
    }

    string concatenate(string b) {
        return element1 + b;
    }
};

int main() {
    int n;
    cin >> n;

    while (n--) {
        string type;
        cin >> type;

        if (type == "float") {
            double a, b;
            cin >> a >> b;
            AddElements<double> obj(a);
            cout << obj.add(b) << '\n';
        } else if (type == "int") {
            int a, b;
            cin >> a >> b;
            AddElements<int> obj(a);
            cout << obj.add(b) << '\n';
        } else if (type == "string") {
            string a, b;
            cin >> a >> b;
            AddElements<string> obj(a);
            cout << obj.concatenate(b) << '\n';
        }
    }

    return 0;
}
