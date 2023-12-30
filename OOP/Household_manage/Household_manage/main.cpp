
#include"People.cpp"
#include"Family.cpp"
#include"Group.cpp"
#include <iostream>
using namespace std;

void displayAllPeoInGr(vector<Group> vtPeo)
{
    //Number Group
   
    cout << "____________________________________________" << endl;
    for (int indexGr = 0; indexGr < vtPeo.size(); indexGr++)
    {
        // Get Name Gr
        cout << "Number Family in Gr " << indexGr + 1 << ": " << vtPeo[indexGr].getNumberFamily() << endl;
        cout << "______________________" << endl;
        // Get vector<Family>
        vector<Family> familyInGr = vtPeo[indexGr].getF();

        //lopp all family in Group
        for (int indexF = 0; indexF < familyInGr.size(); indexF++)
        {
            familyInGr[indexF].display();
            cout << "______________________" << endl;
        }
    }
}

vector<Group> inputIn4()
{
    int numberGr = 0;
    int numberFamInGr = 0;
    int numberPeoInFam = 0;
    // People properties
    string namePeoInFam = "";
    int agePeoInFam = 0;
    string jobPeoInFam = "";
    string idPeoInFam = "0";
    // Family properties
    string nameF = "";
    string status = "";
    string add = "";
    // Gr properties
    string nameGr = "";

    vector<Family> familyInGr;
    vector<People> peopleInFam;
    vector<Group> groupInVill;

    cout << "Input number Group in Vill: ";
    cin >> numberGr;
    system("clear");
    cout << "Number group in Vill: " << numberGr << endl;
    cout << "input in4 Group: " << endl;
    cout << "____________________________________________" << endl;
    for (int indexGr = 0; indexGr < numberGr; indexGr++)
    {
        cout << "input name Group " << indexGr + 1 << ": ";
        cin >> nameGr;
        cout << "input number Family of Group " << nameGr << ": ";
        cin >> numberFamInGr;
        // loop all group
        for (int indexFamInGr = 0; indexFamInGr < numberFamInGr; indexFamInGr++)
        {
            // reset value
            string nameF = "";
            string status = "";
            string add = "";

            cout << "input number people in family " << indexFamInGr + 1 << ": ";
            cin >> numberPeoInFam;
            cout << "____________________________________________" << endl;
            // input inf boss family
            cout << "input boss family name " << indexFamInGr + 1 << ": ";
            cin >> nameF;
            cout << "input satus family of " << nameF << ": ";
            cin >> status;
            cout << "input address family of " << nameF << ": ";
            cin >> add;
            cout << "____________________________________________" << endl;
            for (int indexPeoInFam = 0; indexPeoInFam < numberPeoInFam; indexPeoInFam++)
            {
                // reset people properties value
                namePeoInFam = "";
                agePeoInFam = 0;
                jobPeoInFam = "";
                idPeoInFam = "0";
                // input people properties
                cout << "input name people " << indexPeoInFam + 1 << " in " << nameF << " family " << ": ";
                cin >> namePeoInFam;
                cout << "input age of " << namePeoInFam << ": ";
                cin >> agePeoInFam;
                cout << "input job of " << namePeoInFam << ": ";
                cin >> jobPeoInFam;
                cout << "input id of " << namePeoInFam << ": ";
                cin >> idPeoInFam;
                //push data to vector
                People peopleIn4(namePeoInFam, agePeoInFam, jobPeoInFam, idPeoInFam);
                peopleInFam.push_back(peopleIn4);
                cout << "___________" << " end people " << namePeoInFam << " in boss family: " << nameF << " of Gr " << nameGr << " ___________" << endl;
            }
            
        }
        //push data to vector
        Group groupIn4(nameGr, familyInGr);
        groupInVill.push_back(groupIn4);
        cout << "___________________________" << " end gr " << nameGr << " ___________________________" << endl;
    }
    return groupInVill;
}

int main()
{
    // input all infor people of Gr
    vector<Group> groupInVill;
    groupInVill = inputIn4();

    system("clear");
    // print all inf
    displayAllPeoInGr(groupInVill);
}