#include<iostream>
using namespace std;
class Floor {
	 int SIZE;
	 bool buttonF;
public: 

	Floor() : SIZE(0) {
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
	Elevator() : buttonE(false) {}

	  void ActiveEl() {
		  Floor fl;
		  if (GetButtonE() == true || fl.GetButtonF() == true) {
			  cout << "Lift working" << endl;	
		  }
		  else {
			  cout << "Lift not working" << endl;
		  }
	  }
	  void DeactivateEl() {
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