#pragma once
#include "Masina.h"
#include "Dacia.h"
#include "Toyota.h"
#include "FerrariRosu.h"
#include <vector>
class Parcare
{
public:
	int maxC;
	vector<Masina*> masini;
	void Create(int x){
		maxC = x;
	}
	void Add(Masina * m){
		if(maxC > masini.size())
			masini.push_back(m);
	}

	int GetCount() {
		return masini.size();
	}

	bool IsFull() {
		return maxC < masini.size()+1;
	}

	void ShowAll() {
		cout << "SHOW-ALL: ";
		for (auto m : masini) {
			cout << m->GetName() << "(" << m->GetColor() << "), ";
		}
		cout << endl;
	}

	void ShowByColor(string s) {
		cout << "SHOW-COLOR (" << s.c_str() << ") :"; 
		for (auto m : masini) {
			if (m->GetColor() == s) {
				cout << m->GetName() << ", ";
			}
		}
		cout << endl;
	}

	void RemoveByName(string s) {
		for (int i = 0; i < masini.size(); i++) {
			if (masini[i]->GetName() == s) {
				masini.erase(masini.begin() + i);
			}
		}
	}
};

