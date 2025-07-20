#include <iostream>
using namespace std;

int main()
{
    string questions[] = {
        "What year was C++ invented ?",
        "Who invented C++ ?",
        "What is the predecessor of C++ ?",
        "Who is Ahmad ?",
    };
    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrop", "C. John Carmack", "D. Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Developer", "B. Actor", "C. Entrepreneur", "D. Failure"},
    };

    char answerKey[] = {
        'C',
        'B',
        'A',
        'A'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        cout << "***********************************\n";
        cout << questions[i] << endl;
        cout << "***********************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if (answerKey[i] == guess)
        {
            cout << "Correct!\n";
            score++;
        }
        else
        {
            cout << "Wrong!\n";
        }
    }

    cout << "************************************\n";
    cout << "*               Results            *\n";
    cout << "************************************\n";
    cout << "Correct guesses: " << score << '\n';
    cout << "# of questions: " << size << '\n';
    cout << "Score: " << (score / (double)size) * 100 << "%";
    return 0;
}
