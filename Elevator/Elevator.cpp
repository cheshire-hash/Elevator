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
	Floor* fl;
	bool buttonE;
	int size;

public: 
	  Elevator() : buttonE(false), fl(nullptr) {}

	  void SetRange(int l, int h) {
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
		  if (GetButtonE() == true || fl->GetButtonF() == true) {
			  cout << "Lift working" << endl;	
		  }
	  }
	  void DeactivateEl() {
		  if (GetButtonE() == false && fl->GetButtonF() == false) {
			  cout << "Lift not working" << endl;
		  }
	  }
	  bool GetButtonE() {
		  return buttonE;
	  }	
	  void CallEl(int number) {
		  fl[number - low].PressButtonF();

	  }
	  void ShowFloor(int number) {
		  current = number;
		  fl[number - low].UnpressButtonF();
		  cout << "Elevator arrives at floor: " << number << endl;
	  }
	  void StatusEl() {
		  if (buttonE == true) {
			  cout << "Elevator button is pressed" << endl
		  }
		  for (int i = 0; i < size; i++) {
			  int floorN = fl[i].GetNumber();
			  if (fl[i].GetButtonF()) {
				  if (floorN = current) {
					  cout << "Lift arrived at floor: " << floorN << endl;
				  }
			  }
		  }

	  }



};
int main() {

}