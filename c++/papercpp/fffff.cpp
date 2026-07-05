#include <iostream>
using namespace std;

float calculateAverage(int marks[], int n, float &avg)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];

    avg = (float)sum / n;
    return avg;
}

void identifyAboveAverage(string names[], int marks[], int n, float avg)
{
    cout << "\nStudents Above Average:\n";
    for(int i = 0; i < n; i++)
    {
        if(marks[i] > avg)
            cout << names[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
    int marks[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];
        cout << "Enter marks: ";
        cin >> marks[i];
    }

    float avg;
    calculateAverage(marks, n, avg);

    cout << "Class Average = " << avg << endl;

    identifyAboveAverage(names, marks, n, avg);

    return 0;
}