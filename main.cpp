#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> firstV;

    //add
    firstV.push_back(10);
    firstV.push_back(20);
    firstV.push_back(30);

    for(int i=0; i< firstV.size(); i++){
        cout<< i+1 <<". term inside of the vector: "<< firstV[i]<<endl;
    }

    cout<<endl;

    //delete
    firstV.pop_back();
    firstV.pop_back();

    for(int i=0; i< firstV.size(); i++){
        cout<< i+1 <<". term inside of the vector: "<< firstV[i]<<endl;
    }

    cout<<endl;


    //random add
    vector<int> secV;
    srand(time(NULL));
    for (int i = 0; i < 5; ++i) {
        secV.push_back(rand() % 100 + 1);
    }

    for(int i=0; i< secV.size(); i++){
        cout<< i+1 <<". term inside of the vector: "<< firstV[i]<<endl;
    }

    cout<<endl;
    cout<<endl;

    //array and vector
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    vector<int> thV(myArray, myArray + size);

    for (int num : thV) {
        cout << num << " ";
    }





    return 0;
}
