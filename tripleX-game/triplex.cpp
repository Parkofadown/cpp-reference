#include <iostream>
#include <ctime>

using namespace std;

void PrintIntroduction(int Difficulty){
    // print welcome message to terminal
    cout << "\nYou are a secret agent breaking into a level " << Difficulty;
    cout << " secure vault \nYou need enter the correct codes to continue...\n\n";
}
bool PlayGame(int Difficulty){
    PrintIntroduction(Difficulty);
    // declare 3 number code
    const int CodeA{rand() % Difficulty + Difficulty};
    const int CodeB{rand() % Difficulty + Difficulty};
    const int CodeC{rand() % Difficulty + Difficulty};
    const int CodeSum{CodeA + CodeB + CodeC};
    const int CodeProduct{CodeA * CodeB * CodeC};
    // print sum and product to terminal
    cout << "There are 3 numbers in the code" ;
    cout << "\nThe codes add-up to " << CodeSum;
    cout << "\nThe codes multiply to " << CodeProduct << endl;
    int GuessA , GuessB, GuessC;
    cout << "\nEnter your guess... ";
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;
    int GuessSum { GuessA  + GuessB + GuessC};
    int GuessProduct{GuessA * GuessB * GuessC}; 

    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        cout << "You cracked the vault , get all the money and get out!!! Great Work Agent!!!\n\n";
        return true;
    }else
    {
        cout << "You didn't crack the vault Agent... try again\n\n";
        return false;
    }
    
}
int main(){
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);     
        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty; 
        }
    }
     return 0;
}