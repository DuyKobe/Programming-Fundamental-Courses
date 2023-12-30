#pragma once
#include"Family.cpp"

class Group {
private:
	string nameGr;
	vector <Family> f;
public:
	Group() {}//construction
	Group(string nameGr, vector <Family> f) : nameGr(nameGr), f(f) {}
	//function display
	void display()
	{
		cout << "Name Group " << nameGr << endl;
		for (int i = 0; i < f.size(); i++)
		{
			f[i].display();
		}
	}
	vector<Family> getF()
	{
		return f;
	}
	int getNumberFamily()
	{
		return static_cast<int>(f.size());
	}
	//Get method calculate average age of Group
	static double avgAgeGroup(Group v)
	{
		vector<Family> F(v.getF());
		double sum = 0;
		int n = 0;
		for (int i = 0; i < F.size(); i++)
		{
			vector<People> P(F[i].getP());
			for (int j = 0; j < P.size(); j++)
			{
				sum += P[j].getAge();
			}
			n += static_cast<int>(P.size());
		}
		return sum / n;
	}
	static vector<People> getPeopleHaveNotJob(Group g)
	{
		vector <People> v;
		vector <Family> F(g.getF());
		for (int i=0; i < F.size(); i++) {
			vector<People> P(F[i].getP());
			for (int j = 0; j < P.size(); j++) {
				if (P[j].getJob() == "") {
					v.push_back(P[j]);
				}
			}
		}
		return v;
	}
};