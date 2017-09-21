#include "math.h"
#include <iostream>
#include <memory>
using namespace std;
int main() {
    SafeArray arrs[] = {SafeArray(5), SafeArray(10), SafeArray(15)};
    
    for(int i = 0; i < 3; i++) {
        SafeArray *safeArray_ptr = arrs ;
        safeArray_ptr+=i;
        for(int j = 0; j < safeArray_ptr->length; j++) {
            safeArray_ptr->set(j, (j + 1) * 10);
        }
    }
    
    for(int i = 0; i < 3; i++) {
        SafeArray *safeArray_ptr = arrs + i;
        for(int j = 0; j < safeArray_ptr->length; j++) {
            cout << safeArray_ptr->get(j) << " ";
        }
        cout << endl;
    }
    cout << endl<<endl;
    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < arrs[i].length; j++) {
            arrs[i].set(j, (j + 1) * 10);
            
        }
    }
    for(int i = 0; i < 3; i++) {
        
        for(int j = 0; j < arrs[i].length; j++) {
            cout <<arrs[i].get(j)<< " ";
            
        }
        cout << endl;
    }
    cout<<endl<<SafeArray::PI<<endl;
    return 0;
}
