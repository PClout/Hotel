#include <iostream>
using namespace std;

class hotel{
public:
hotel(){
rooms = 0;
}

hotel(int init_rooms){
  rooms = init_rooms;
}

private:
  int rooms;

};



class employee{
public:
  employee(){
hours = 0;
wage = 0;
jobs = "empty";
  }
  employee(int init_hours, int init_wage, string init_jobs){
hours = init_hours;
wage = init_wage;
jobs = init_jobs;
  }
  private:
  double hours;
  double wage;
  string jobs;
};



class client{
public:

  client(){
first = "null";
last = "null";
nightStayed = 0;
hasPaid = false;
  }

client(string init_first, string init_last, int init_nightStayed, bool init_hasPaid){
  first = init_first;
  last = init_last;
  nightStayed = init_nightStayed;
  hasPaid = init_hasPaid;

}

private:
  string first;
  string last;
  int nightStayed;
  bool hasPaid;
};




int main(){

  return 0;
}
