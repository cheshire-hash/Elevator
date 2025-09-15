#include<iostream>
using namespace std;
class Floor {
	 int number;
	 bool buttonF;
public: 

	Floor() : number(0), buttonF(false) {
	}
	Floor(const int n) : number(n), buttonF(false) {

	}
	int GetNumber() {
		return number;
	}
	void PressButtonF() {
		buttonF = true;
	}
	void UnpressButtonF() {
		buttonF = false;
	}
	bool GetButtonF(){
		return buttonF;
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
	int low;
	int high;
	int current;
	Floor fl;
	bool buttonE;
	int size;

public: 
	  Elevator() : buttonE(false), fl(1) {}

	  void SetRange(int l, int h) {
		Floor* fl;
		if (l > h) swap(l, h);
		low = l;
		high = h;
		size = high - low + 1;

		delete[] fl;
		fl = new Floor[size]; 

		for (int i = 0; i < size; i++) {
			fl[i] = Floor(low + i); 
		}

		current = low; 
	  }


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