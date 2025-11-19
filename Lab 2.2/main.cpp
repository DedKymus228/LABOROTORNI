#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;



enum StudentName {
    Name1, Name2, Name3, Name4, Name5, Name6, Name7
};


string getNameString(StudentName name) {
    switch (name) {
        case Name1: return "Name1";
        case Name2: return "Name2";
        case Name3: return "Name3";
        case Name4: return "Name4";
        case Name5: return "Name5";
        case Name6: return "Name6";
        case Name7: return "Name7";
        default: return "Unknown";
    }
}


struct Task1 {
    StudentName name;
    double avgScore;
    bool isSport;
};


struct Task2 {
    StudentName name;
    char sex;
    bool isDorm;
};

int main() {
    cout << "=== TASK 1: Excellent Students in Sports ===\n";

    Task1 group1[7];

    double scores[7] = { 5.0, 4.2, 5.0, 3.5, 4.8, 5.0, 5.0 };
    bool sports[7]  = { true, true, false, false, true, true, true };


    for (int i = 0; i < 7; i++) {
        group1[i].name = static_cast<StudentName>(i);
        group1[i].avgScore = scores[i];
        group1[i].isSport = sports[i];
    }

    cout << "Name    | Score | Sport (1=Yes)\n";
    cout << "--------|-------|--------------\n";
    for (int i = 0; i < 7; i++) {
        cout << left << setw(8) << getNameString(group1[i].name) << "| "
             << fixed << setprecision(1) << group1[i].avgScore << "   | "
             << group1[i].isSport << endl;
    }

    int excellentSportCount = 0;
    for (int i = 0; i < 7; i++) {
        if (group1[i].avgScore >= 5.0 && group1[i].isSport == true) {
            excellentSportCount++;
        }
    }
    double percent = (static_cast<double>(excellentSportCount) / 7.0) * 100;

    cout << "--> Result: Percentage of excellent students in sports: "
         << setprecision(2) << percent << "%\n\n";
    cout << "=== TASK 2: Female Students in Dormitory ===\n";

    Task2 group2[7];

    char sexes[7]   = { 'M', 'M', 'F', 'F', 'M', 'F', 'M' };
    bool dorms[7]   = { true, false, true, false, true, true, false };

    for (int i = 0; i < 7; i++) {
        group2[i].name = static_cast<StudentName>(i);
        group2[i].sex = sexes[i];
        group2[i].isDorm = dorms[i];
    }

    cout << "Name    | Sex | Dorm (1=Yes)\n";
    cout << "--------|-----|-------------\n";
    for (int i = 0; i < 7; i++) {
        cout << left << setw(8) << getNameString(group2[i].name) << "| "
             << group2[i].sex << "   | "
             << group2[i].isDorm << endl;
    }

    int femaleDormCount = 0;
    for (int i = 0; i < 7; i++) {
        if (group2[i].sex == 'F' && group2[i].isDorm == true) {
            femaleDormCount++;
        }
    }

    cout << "--> Result: Number of females in dormitory: " << femaleDormCount << endl;
    system("pause");
    return 0;

}
