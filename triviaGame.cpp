#include <iostream>
using namespace std;

int main()
{
    string questions[10] = { "What is the name of Batman's second Robin?", "What is the name of the Penguin's club?", 
        "What is name of the Batman of the future (Batman Beyond)?","What alias did Barbara Gordon take on after being paralyzed by the Joker?", 
        "As the leader of the league of Assassin's, what is Ra's Al Ghul known as?", "What is the name of the man who killed Bruce Wayne's parents?", 
        "What is the name of the Black Mask's company?", "In the Flashpoint Paradox storyline, who becomes Batman?", 
        "What was the name of the trapeze group that the first Robin was apart of?", "Which Robin took on the name of Red Robin?"};

    string choices[10][4] = { {"Dick Grayson", "Tim Drake", "Damian Wayne", "Jason Todd"},
        {"The Igloo", "The Iceberg Lounge", "The Ice Box", "The Ice Cave"},
        {"Jean Paul Valley", "Slade Wilson", "Terry McGinnis", "Waylon Jones"},
        {"Oracle", "Spoiler", "Batgirl", "Robin"},
        {"The Prodigal Son", "The Demon's Head", "The Talon", "The Blacksmith"},
        {"Michael Bradshaw", "Kirk Langstrom", "Jim Hancock", "Joe Chill"},
        {"Daget Industries", "Queen Industries", "Sionis Industries", "Fox Industries"},
        {"Bruce Wayne", "Martha Wayne", "Thomas Wayne", "Dick Grayson"},
        {"The Skillful Six", "The Flying Fruits Flies", "The Daredevils", "The Flying Graysons"},
        {"Jason Todd", "Tim Drake", "Dick Grayson", "Carrie Kelly"} };

    string correctAnswers[10] = { "Jason Todd", "The Iceberg Lounge", "Terry McGinnis", "Oracle", "The Demon's Head", "Joe Chill", "Sionis Industries", 
        "Thomas Wayne", "The Flying Graysons", "Tim Drake" };

    int userInput[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int totalQuestions = 10;

    for (int i = 0; i < totalQuestions; i++) {

        cout << "Question #" << (i + 1) << endl;
        cout << questions[i] << endl;
        cout << "1) " << choices[i][0] << endl;
        cout << "2) " << choices[i][1] << endl;
        cout << "3) " << choices[i][2] << endl;
        cout << "4) " << choices[i][3] << endl;

        cout << "\nSelect the corresponding number (1-4) and press enter: " << endl;
        cout << "> ";
        cin >> userInput[i];

    }

    int correctResults = 0;
    int incorrectResults = 0;

    for (int i = 0; i < totalQuestions; i++) {

        if (correctAnswers[i] == choices[i][userInput[i] - 1]) {
            correctResults++;
        }
        else {
            incorrectResults++;
        }
    }

    cout << "You answered " << correctResults << " question(s) correctly." << endl;
    cout << "You answered " << incorrectResults << " question(s) incorrectly." << endl;

    return 0;
}

