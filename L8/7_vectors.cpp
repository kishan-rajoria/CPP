#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> vec;
//     cout<<vec[0];
//     return 0;
// }

// int main(){
//     vector<int> vec ={1,2,3};
//     cout<<vec[0]<<endl;
//     return 0;
// }

// int main(){
//     vector<int> vec (0,5);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     cout<<vec[3]<<endl;
//     cout<<vec[4]<<endl;
//     return 0;
// }


// int main(){
//     vector<int> vec (5,0);

//     for (int i: vec) {
//         cout<< i << endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char> vec = {'a','b','c', 'd'};

//     for (char val: vec) {
//         cout<< val << endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char> vec = {'a','b','c', 'd'};
//     cout<<"size="<<vec.size()<<endl;

//     for (char val: vec) {
//         cout<< val << endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char> vec = {'a','c', 'd'};
//     cout<<"size="<<vec.size()<<endl;
//     vec.push_back('b');
//     cout<<"size ="<<vec.size()<<endl;

//     for (char val: vec) {
//         cout<< val << endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char> vec = {'a','c', 'd'};
//     cout<<"size="<<vec.size()<<endl;
//     vec.push_back('b');
//     cout<<"size ="<<vec.size()<<endl;
//     vec.pop_back();

//     for (char val: vec) {
//         cout<< val << endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char> vec = {'a','c', 'd'};
//     cout<<"size="<<vec.size()<<endl;
//     vec.push_back('b');
//     cout<<"size ="<<vec.size()<<endl;
//     vec.pop_back();
//     cout<<"front value="<<vec.front()<<endl;
//     cout<<"last value ="<<vec.back()<<endl;
//     cout<<"at function ="<<vec.at(2)<<endl;
//     cout<<"at function ="<<vec.at(3)<<endl;

//     return 0;
// }

// int main(){
//     vector<char> vec;

//     vec.push_back('a');
//     vec.push_back('b');
//     vec.push_back('c');
//     vec.push_back('d');

//     cout<<"size ="<<vec.size()<<endl;
//     cout<<"capacity="<<vec.capacity()<<endl;

//     return 0;
// }


int main(){
    vector<char> vec;

    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    vec.push_back('e');

    cout<<"size ="<<vec.size()<<endl;
    cout<<"capacity="<<vec.capacity()<<endl;

    return 0;
}