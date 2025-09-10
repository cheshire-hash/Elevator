#include<iostream>
using namespace std;
class Floor {
	 int SIZE;
	 bool buttonF;
public: 

	Floor() : SIZE(0), buttonF(false) {
	}
	Floor(const int size) : SIZE(size), buttonF(false) {

	}
	bool GetButtonF(){
		return buttonF;
	}

	void SetRange(int* arr[], int s) {
		if (s > 0) {
			SIZE = s;
			arr = new int* [SIZE];
			for (int i = 0; i < SIZE; i++) {
				
			}
	        delete[] arr;
		

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
	Elevator() : buttonE(false), fl(1) {}

	  void ActiveEl() {
		  Floor fl;
		  if (GetButtonE() == true || fl.GetButtonF() == true) {
			  cout << "Lift working" << endl;	
		  }
	  }
	  void DeactivateEl() {
		  Floor fl;
		  if (GetButtonE() == false && fl.GetButtonF() == false) {
			  cout << "Lift not working" << endl;
		  }
	  }
	  bool GetButtonE() {
		  return buttonE;
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