#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand() % 10);
    return v;
}

void showVector(const vector<int>& vec){
    cout << "[";
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i];
        if(i == vec.size() - 1) cout << "]";
        else cout << " ";
    }
}

int dotProduct(const vector<int>& vecA, const vector<int>& vecB){
    int sum = 0;
    for(unsigned int i = 0; i < vecA.size(); i++) sum += vecA[i] * vecB[i];	
    return sum;
}

int main(){
    srand(time(0));
    vector<int> x = randomVector(5);
    vector<int> y = randomVector(5);
    int z = dotProduct(x, y);
    showVector(x);
    cout << " . ";
    showVector(y);
    cout << " = " << z;
    
    return 0;
}
