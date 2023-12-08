#include <iostream>
#include "Circularqueque.h"

using namespace std;

int main()
{

    Circularqueque bohca(8);
//084430//
    bohca.push(1);
    bohca.push(2);
    bohca.push(3);
    bohca.push(4);
    bohca.push(5);
    bohca.push(6);
    bohca.push(7);
    bohca.push(8);

    bohca.push(9);
    bohca.push(10);
    bohca.push(11);
    bohca.push(12);
    bohca.push(13);

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    bohca.push(14);
    bohca.push(15);
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    bohca.push(9);
    bohca.push(10);
    bohca.push(11);
    bohca.push(12);
    bohca.push(13);
    bohca.push(14);
    bohca.push(15);

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;

    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;
    cout << bohca.pop() << endl;

    return 0;
}
