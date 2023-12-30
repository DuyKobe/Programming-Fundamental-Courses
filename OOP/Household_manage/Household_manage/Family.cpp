#pragma once
#include <vector>
#include"People.cpp"

class Family {
private:
	string nameF;
	string status;
	string add;
	vector<People> p;
public:
	Family()
	{
		nameF = p[0].getName();
	}
	Family(string add, string status, vector<People>p) :add(add), status(status), p(p)
	{
		nameF = p[0].getName();
	}
	string getNameF()
	{
		return nameF;
	}
	string getStatus()
	{
		return status;
	}
	string getAdd()
	{
		return add;
	}
	vector<People> getP()
	{
		return p;
	}
	void display()
	{
		cout << "householder's name: " << nameF << endl;
		cout << "Number Member: " << p.size() << endl;
		cout << "Address: " << add << endl;
		cout << "Status: " << status << endl;
		cout << "List Information Member" << endl;
		for (int i = 0; i < p.size(); i++)
		{
			p[i].display();
		}
	} 
	//Get method  getPoorHousehold
	static vector<Family> getPoorHousehold(vector<Family> fa) {
		vector <Family> f;
		for (int i = 0; i < fa.size(); i++) {
			if (fa[i].getStatus() == "poor") {
				f.push_back(fa[i]);
			}
		}
		return f;
	}
	//Get method  findFamilySurename
	static vector<Family> findFamilySurename(vector<Family> fa, string surename) {
		vector <Family> f;
		for (int i = 0; i < fa.size(); i++) {
			if (fa[i].getNameF() == surename) {
				f.push_back(fa[i]);
			}

		}
		return f;
	}
};