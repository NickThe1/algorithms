//
// Created by 1 on 23.06.2022.
//

#include <algorithm>
#include <array>
#include <stack>
#include <queue>
#include <iterator>
#include <list>
#include <vector>
#include "iostream"
#include "data_structure.h"

using namespace std;

void present_array(){
    int myNum[3] = {10, 20, 30};
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    array<int, 5> ar1{{3, 4, 5, 1, 2}};
    array<int, 5> ar2 = {1, 2, 3, 4, 5};
    array<string, 2> ar3 = {{string("a"), "b"}};

    cout << "Sizes of arrays are" << endl;
    cout << ar1.size() << endl;
    cout << ar2.size() << endl;
    cout << ar3.size() << endl;

    cout << "\nInitial ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';

    // container operations are supported
    sort(ar1.begin(), ar1.end());

    cout << "\nsorted ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';

    // Filling ar2 with 10
    ar2.fill(10);

    cout << "\nFilled ar2 : ";
    for (auto i : ar2)
        cout << i << ' ';


    // ranged for loop is supported
    cout << "\nar3 : ";
    for (auto &s : ar3)
        cout << s << ' ';

}

void present_stack(){
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop();
    stack.pop();

    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
}

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

void present_queue(){
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);
}

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void present_list(){
    list<int> gqlist1, gqlist2;

    for (int i = 0; i < 10; ++i) {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
}

void present_vector(){
    // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // method 3
    vector<int> vector3(5, 12);

    cout << "vector1 = ";

    // ranged loop
    for (const int& i : vector1) {
        cout << i << "  ";
    }

    cout << "\nvector2 = ";

    // ranged loop
    for (const int& i : vector2) {
        cout << i << "  ";
    }

    cout << "\nvector3 = ";

    // ranged loop
    for (int i : vector3) {
        cout << i << "  ";
    }
}