#include <iostream>
#include <vector>
using namespace std;
#pragma pack(1)

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vi1, vi2, viinitial;
    vector<vector<int> > vvi;
    vector<vector<int> >::iterator vvi_iterator;
    vector<int>::iterator vi_iterator, vi2_iterator, vi3_iterator;

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
        viinitial = vvi_iterator;
        for (vi_iterator = (*vvi_iterator).begin(); vi_iterator != (*vvi_iterator).end(); ++vi_iterator) {
            cout << *vi_iterator<<":" <<  (vi_iterator - (*vvi_iterator).begin()) <<"("<<&(*vi_iterator)<<"-"<<&(*((*vvi_iterator).begin()))<<")"<< ":" << &viinitial[vi_iterator - (*vvi_iterator).begin()] << " ";
        }
        cout << endl;
    }
    cout << 1 << endl;

    for (vvi_iterator = vvi.begin(); vvi_iterator != vvi.end(); ++vvi_iterator) {
        //cout << &vvi_iterator[vvi_iterator - (*vvi_iterator).begin()] << " ";
        for (vi_iterator = (*vvi_iterator).begin(); vi_iterator != (*vvi_iterator).end(); ++vi_iterator) {
            cout << *vi_iterator<< ":"<< &(*vi_iterator) << " ";
        }
        cout << endl;
    }
    cout << 2 << endl;

    cout << sizeof(int) << "::" << sizeof(vi1) << "::" << sizeof(vi2) << endl;
    
    cout << vvi[1][1] << " " << &vvi[1][1] << endl;
    cout << vi2[0] << " " << &vi2[0] << " " << vi2[1] << " " << &vi2[1] << endl;
    vi2_iterator = vi2.begin();
    vi3_iterator = vi2_iterator;
    ++vi2_iterator;
    cout << *vi3_iterator << " " << &(*vi3_iterator) << " " << *vi2_iterator << " " << &(*vi2_iterator) << endl;
    return 0;
}
