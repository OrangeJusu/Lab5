#include <iostream>
#include "BLT.h"

using namespace std;

/*For the Lab instead of making two seperate classes for the nodes
  and having five files I thought I would slim it down and make the
  nodes a structure in the tree class and only having three files.
  
  Also for the print tree function its facing towards the right like this:
        yahoo.com
     google.com
        facebook.com
                azap.com
            apple.com
                amazon.com*/

int main() {
    BLT tree;
    tree.Add("google.com");
    tree.Add("facebook.com");
    tree.Add("apple.com");
    tree.Add("amazon.com");
    tree.Add("yahoo.com");
    tree.Add("azap.com");

    tree.Print();
    cout << endl;

    tree.RPrint();
    cout << endl;

    tree.TPrint();
    cout << endl;

    tree.Remove("facebook.com");
    tree.Remove("apple.com");

    tree.Print();
    cout << endl;

    tree.RPrint();
    cout << endl;

    tree.TPrint();
    cout << endl;
}
