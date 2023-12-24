// trial_projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

int main()
{
    long long x, y, r;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    r = x * y;
    cout << "R: " << r;
}

/*
int main()
{
    FILE* file = fopen("phonebook.csv", "a");

    string name;
    string nmbr;

    cout << "name: " << endl;
    cin >> name;

    cout << "number: " << endl;
    cin >> nmbr;


}
*/

/*
void swap(int* a, int* b);

int main()
{
    int x = 1;
    int y = 2;

    cout << "x is : " << x << "\n" << "y is : " << y << "\n";
    swap(&x, &y);
    cout << "x is : " << x << "\n" << "y is : " << y << "\n";
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

/*
int main()
{
    int n = 10;
    int* p = &n;

    cout << n << endl;
    cout << &n << endl;
    cout << p << endl;
    cout << *p;
}
*/

/*
void draw(int n);

int main()
{
    int height;
    cout << "Enter Height: ";
    cin >> height;

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}
*/

/*
int main()
{
    string str[] = { "eye", "ear", "nose", "mouth", "lips", "neck" };

    string s;
    cout << "Enter part: ";
    cin >> s;

    for (int i = 0; i < 7; i++)
    {
        if (s.compare(str[i]) == 0)
        {
            cout << "Found it";
            return 0;
        }
    }
    cout << "Not Found";
    return 1;
}
*/

/*
int main()
{
    int number[] = {20, 5, 1, 100, 50, 10, 80};

    int n;
    cout << "Enter no: ";
    cin >> n;

    for (int i = 0; i < 7; i++)
    {
        if (n == number[i])
        {
            cout << "Found it";
            return 0;
        }
    }        
    cout << "Not Found";
    return 1;
}
*/

/*
int main(int argc, string argv[])
{
    cout << "Hello " << argv[1];
}
*/

/*
int main()
{
    string s;

    cout << "Name: ";
    cin >> s;

    cout << endl;
    cout << "After: ";
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cout << s[i] - 32;
        }
        else
            cout << s[i];
}
*/

/*
int main()
{
    string name;

    cout << "Enter Name: ";
    cin >> name;

    int n = 0;

    while (name[n] != '\0')
    {
        n++;
    }
    cout << "length of string: " << n << endl;
}
*/

/*
const int N = 3;

float avg(int array[]);

int main()
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Score: ";
        cin >> scores[i];
    }
    cout << "Average: " << avg << endl;
}

float avg(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return (sum / N);
}
*/