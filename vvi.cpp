#include <iostream>
#include <vector>
using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vi1, vi2;
    vector<vector<int> > vvi;
    vector<vector<int> >::iterator vvi_iterator;
    vector<int>::iterator vi_iterator;

    vi1.push_back(10);
    vi1.push_back(20);
    vi2.push_back(30);
    vi2.push_back(40);
    vi2.push_back(50);

    vvi.push_back(vi1);
    vvi.push_back(vi2);


    for (vvi_iterator = vvi.begin(); vvi_iterator != vvi.end(); ++vvi_iterator) {
        for (vi_iterator = (*vvi_iterator).begin(); vi_iterator != (*vvi_iterator).end(); ++vi_iterator) {
            cout << *vi_iterator << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (vvi_iterator = vvi.begin(); vvi_iterator != vvi.end(); ++vvi_iterator) {
        //cout << &vvi_iterator[vvi_iterator - (*vvi_iterator).begin()] << " ";
        for (vi_iterator = (*vvi_iterator).begin(); vi_iterator != (*vvi_iterator).end(); ++vi_iterator) {
            cout << *vi_iterator<<":" << (long) (vi_iterator - (*vvi_iterator).begin()) << ":" << &vi_iterator[vi_iterator - (*vvi_iterator).begin()] << " ";
        }
        cout <<endl;
    }
    cout << endl;

    for (vvi_iterator = vvi.begin(); vvi_iterator != vvi.end(); ++vvi_iterator) {
        //cout << &vvi_iterator[vvi_iterator - (*vvi_iterator).begin()] << " ";
        for (vi_iterator = (*vvi_iterator).begin(); vi_iterator != (*vvi_iterator).end(); ++vi_iterator) {
            cout << *vi_iterator<< ":"<< &(*vi_iterator) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << sizeof(int *) << endl;

    return 0;
}
