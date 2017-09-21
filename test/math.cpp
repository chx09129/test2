#include <string>
#include "math.h"
using namespace std;

// 預設建構函式

SafeArray::SafeArray(int len):length(len){
   // length=len;
    _array=new int [length];
    
}
// 刪除動態配置的資源
SafeArray::~SafeArray(){
    delete [] _array;
}
// 測試是否超出陣列長度
bool SafeArray::isSafe(int i){
    
    if (i>=length || i<0) {
        return false;
    } else {
        return true;
    }
}
// 取得陣列元素值
int SafeArray::get(int i){
    if(isSafe(i)){
        return _array[i];
    }
    return 0;
}
// 設定陣列元素值
void SafeArray::set(int i , int value){
    if (isSafe(i)) {
        _array[i]=value;
    }
    
}
const double SafeArray::PI=3.14159;
