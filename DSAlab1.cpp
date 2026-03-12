#include <vector>
#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    // firstcode
    vector<string>cars={"Volvo","BMW","Honda"};
    for(string car:cars){
        cout<< car <<"\n";
    }
    
    cout << cars[0] << endl; // accessing element
    cout << cars[1] << endl;

    cout << cars.front() //firstelement
    cout << cars.back(); //lastelement

    cout << cars.at(1); //secondelement using .at()
    cout << cars[1]; //secondelement using index

    cars[0]="Opel"; //changing element
    cars.at(0)="Opel"; //changing element using .at()

    cars.push_back("Skoda"); //adding new element at last
    cars.pop_back(); //removing element from last

    cout << cars.size(); //number of elements

    cout << cars.empty(); //checks if vector is empty or not

    //loop through vector
    for(int i=0;i<cars.size();i++){
        cout << cars[i] <<"\n";
    }

    //assignmnet operator
    vector<string>myvector;
    myvector=cars;

    //swapping contents of two vectors
    myvector.swap(anothervector);
    swap(myvector,anothervector);


//2D vector
    vector <vector <int >> my2Dvector; //declaration of 2D vector
    vector <vector <int >> my2Dvector={{1,2,3},{4,5,6},{7,8,9}}; //initialization of 2D vector
    //accesing element
    int value=my2Dvector[1][2];

    //size related functions
    int numRows=my2Dvector.size(); //number of rows
    int numCols=my2Dvector[0].size(); //number of columns

    //iterating through 2D vector
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){
            cout << my2Dvector[i][j]<<endl;
        }
    }
    

//Map
    //Automatically sorted in ascending order by their keys
    map<string,int>people; //declaration of map
    map<string,int>people={{"john",32},{"ram",40},{"shyam",50}}; //initialised map

    cout << "john is" << people["john"]<<"\n"; //accessing value 
    cout << "john is" << people.at("john")<<"\n"; //by at.()

    people["john"]=100; //change value

    people["jonny"]=200; //adding key-value pair
    people.insert({"jonny",200}); //adding by insert function
    
    //We cannot have map with same keys but can have map with same value associated to  distinct keys

    people.erase("john"); //removing element
    people.clear(); //removing all elements

    cout << people.size()<<endl; //returns size of map(number of elements)

    cout << people.empty()<<endl; //returns 1 if empty map else 0;

    cout << people.count("jonny"); //output 1 if jonny exist

    for(auto insaan: people){
        cout << people.first << "is" << person.second<<endl; //loop through map
    }

    map<string,int,greater<string>>people; //reverse order map

    unordered_map<int,string>num; //unordered map

//Set
    //sorted in ascending order
    set<string>cars; //declaration of set
    set <string>cars={"bmw m2","bmw m3","bmw m4","bmw m5","bmw m6","bmw m8"}; //initialized set

    for(string gaadi:cars){
        cout << gaadi <<endl; //loop through set
    }

    set<string,greater<string>>BMW={"m5 g90","m5 comp","m5 f90"}; // reverse order map

    cars.insert("bmw x7"); // adding element
    cars.erase("bmw x7"); //removing element
    cars.clear(); //remove all elements

    cout << cars.size()<<endl; //number of elements

    cout << cars.empty() <<endl; //return 1 if empty else 0

    //Multiset(can store same elements)
    multiset<int>num; //declaration of multiset
    multiset <int>num={1,2,3,3} //initialized multiset 

//Pair (holds two values together and stored as single unit)

    pair<int,string>p1={18,"viratkohli"};
    pair<int,string>p2;
    p2.first=45;
    p2.second="rohitsharma";

    cout <<p1.first <<" " << p1.second;


//Tuples
    tuple <char,int,float >my;
    my=make_tuple("a",10,15.5); //assigning tuple with values

    cout <<get<0>(my) << get<1>(my)<< get<2>my<<endl;
    get<0>(my)="J"; //change value

}

