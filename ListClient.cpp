#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

L1.insert (5, 1);
L1.insert (33, 2);
L1.insert (23, 3);
L1.insert (48, 4);

cout << "List size: " << L1.size() << endl;

cout << L1.get(1) << endl;
cout << L1.get(2) << endl;
cout << L1.get(3) << endl;
cout << L1.get(4) << endl;

cout << "List size: " << L1.size() << endl;

L1.clear();
cout << "List size: " << L1.size() << endl;

return 0;
}
