#include<bits/stdc++.h>
using namespace std;

class Car{

    public:
    string car_name;
    int x,y;

    Car(){

    }

    Car(string n, int x, int y){
        car_name = n;
        this->x = x;
        this->y = y;
    }

    int dis(){
        return x*x + y*y;
    }
};

bool comp(Car ob1, Car ob2){
    return ob1.dis() < ob2.dis();
}

int main(){

    int n;
    cin>>n;

    vector<Car> v;

    for(int i=0; i<n; i++){
        string name;
        int x,y;
        cin>>name>>x>>y;
        Car temp(name, x, y);

        v.push_back(temp);
    }

    sort(v.begin(), v.end(), comp);

    for(auto x:v){
        cout<<x.car_name<<" "<<x.dis()<<endl;
    }

    return 0;
}