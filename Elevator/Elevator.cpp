#include<iostream>
using namespace std;
class Floor {
	 int SIZE;
	 bool buttonF;
public: 

	Floor() : SIZE(0) {
	}
	Floor(const int size) : SIZE(size) {

	}
	void SetRange(int* arr[], int s) {
		if (s > 0) {
			SIZE = s;
			arr = new int* [SIZE];
			for (int i = 0; i < SIZE; i++) {
				
			}
		

		}
	}
	void StatusFl() {
		if (buttonF == true) {
			cout << "Lift working" << endl;
		}
		else {
			cout << "Lift not working" << endl;
		}
	}
};
class Elevator {
	Floor fl;
	bool buttonE;

public: 
	  void ActiveEl() {
	  }
	  void DeactivateEl() {
	  }
	  void CallEl() {
	  }
	  void ShowFloor() {
	  }
	  void StatusEl() {
	  }


};
int main() {

}