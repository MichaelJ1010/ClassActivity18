#include <iostream>

using namespace std;

namespace bubbleSort{
    void bubbleSort(int list[], int size){
        int wall = size - 1;
        while(wall > 0){
            for(int i = 0; i < wall; i++){
                cout << "comparing " << list[i] << " to " << list[i + 1] << endl;
                if(list[i] > list[i + 1]){
                    cout << list[i] << " is larger. Swapping values " << endl;
                    int temporaryHolder = list[i];
                    list[i] = list[i + 1];
                    list[i + 1] = temporaryHolder;
                }else{
                cout << list[i] << " is smaller, no swap." << endl;
                }
            }
            wall--;

        }
    cout << "sorted list: ";
    for(int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
        
    }
}