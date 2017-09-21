#include <string>
using namespace std;

class SafeArray {
public:
    static const double PI;
    // 建構函式
    SafeArray(int);
    // 解構函式
    ~SafeArray();
    
    int get(int);
    void set(int, int);
    
    int length;
private:
    int *_array;
    
    bool isSafe(int i);
};
