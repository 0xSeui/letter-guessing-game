// Code Powered by 0xSeui 
#include <iostream>
#include <ctime>
using namespace std;
// Function Animation Introduction 
void animation()
{

      cout << "\n🎮 \033[1;34mGAME SETUP\033[0m 🎮\n";
      cout << "----------------------------------\n";
      cout << "👋 \033[1;33mHey!\033[0m How many \033[1;36mrounds\033[0m do you want to play?\n";
      cout << "----------------------------------\n";
      cout << "⏳ \033[1;32mEnter number of rounds: \033[0m";


}
// Function Idia Game 
void Introduction_about_game()
{

cout << "\033[1;36m========================================\033[0m\n";
cout << "\033[1;35m🎮 WELCOME TO THE LETTER GUESSING GAME!\033[0m\n";
cout << "\033[1;36m========================================\033[0m\n";
cout << "\033[1;33m👉 In this game, you'll be given random letters.\n";
cout << "🧠 Your mission: guess the correct number for each letter (A = 1, B = 2, ...).\n";
cout << "🔥 The more correct answers, the higher your score!\n";
cout << "🎯 Are you ready? Let's begin!\n\n\033[0m";


}
// Function View Total Points 
void view_total_points(int points)
{

cout << "\033[1;34m----------------------------------\033[0m\n";
cout << "\033[1;32m🎯 Your Points: \033[1;33m" << points << (points == 1 ? " Point" : " Points" )<< "\033[0m\n"; //ternary 
cout << "\033[1;34m----------------------------------\033[0m\n";



}
void Level_Low_Game(int round)
{
  int guessnum , points = 0 ;
  string Value_Key = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int Size_Value_key = Value_Key.size(); // 26

  srand(time(0));


  //cout << rand_Final;
  for(int i = 0 ; i < round ; i++)
{ 
    int rand_value_key = rand() % Size_Value_key; 
    int rand_Final = rand_value_key + 1;
    //cout << rand_Final << endl;
    cout << "---------------------------------\n";
    cout << "\033[1;35m🎯 Round Number: " << i+1 << "\033[0m\n";
    char c_v_k =  Value_Key[rand_value_key];
    //cout << "The Letter is : "<< c_v_k << "\n" ;
    cout << "\033[1;36m🔠 The Letter is: \033[1;33m" << c_v_k << "\033[0m\n";
    cout << "\033[1;36m👉 Please enter the letter number (A = 1, B = 2, ...): \033[0m";
    cin >> guessnum;
    if(guessnum == rand_Final)
    {
    cout << "\033[1;32m✅ Correct :)\033[0m\n";
    points++;



    }else{
     cout << "\033[1;31m❌ Wrong :( The correct number is: \033[1;33m" << rand_Final << "\033[0m\n";


  }


}

// 
view_total_points(points);
}

void Level_Medium_Game(int round)
{
  int guessnum_1 , guessnum_2 , points = 0 ;
  string Value_Key = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int Size_Value_key = Value_Key.size(); // 26
  srand(time(0));

  for(int i = 0 ; i < round ; i++)
{ 
    int rand_value_key_1 = rand() % Size_Value_key; 
    int rand_value_key_2 = rand() % Size_Value_key; 

    int rand_Final_1 = rand_value_key_1 + 1;
    int rand_Final_2 = rand_value_key_2 + 1;
    cout << "---------------------------------\n";
    cout <<"Number Round " << i+1 << endl;
    char c_v_k_1 =  Value_Key[rand_value_key_1];
    char c_v_k_2 =  Value_Key[rand_value_key_2];
    cout << "\033[1;36m🔠 The Letter I is: \033[1;33m" << c_v_k_1 << "\033[0m\n";
    cout << "\033[1;36m🔠 The Letter II is: \033[1;33m" << c_v_k_2 << "\033[0m\n";

       cout << "\033[1;36m👉 Please enter the letter number  (A = 1, B = 2, ...): \033[0m";
       cin >> guessnum_1;
       cout << "\033[1;36m👉 Please enter the letter number  (A = 1, B = 2, ...): \033[0m";
       cin >> guessnum_2;
       if(guessnum_1 == rand_Final_1 &&  guessnum_2 == rand_Final_2)
       { 
        
        cout << "\033[1;32m✅ Correct :)\033[0m\n";
        points++;



      }else{
           cout << "\033[1;31m❌ Wrong :( \033[0m";
           cout << "\033[1;36mThe numbers were: \033[1;33m" << rand_Final_1 << "\033[0m and \033[1;33m" << rand_Final_2 << "\033[0m\n";
      

   }


}
//
view_total_points(points);


}


void Level_High_Game(int round)
{
  int guessnum_1 , guessnum_2 , guessnum_3 , guessnum_4 , points = 0 ;
  string Value_Key = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int Size_Value_key = Value_Key.size(); // 26
  srand(time(0));

  for(int i = 0 ; i < round ; i++)
{ 
    int rand_value_key_1 = rand() % Size_Value_key; 
    int rand_value_key_2 = rand() % Size_Value_key; 
    int rand_value_key_3 = rand() % Size_Value_key; 
    int rand_value_key_4 = rand() % Size_Value_key; 

    int rand_Final_1 = rand_value_key_1 + 1;
    int rand_Final_2 = rand_value_key_2 + 1;
    int rand_Final_3 = rand_value_key_3 + 1;
    int rand_Final_4 = rand_value_key_4 + 1;
    cout << "---------------------------------\n";
    cout << "\033[1;35m🎯 Round Number: " << i+1 << "\033[0m\n";
    char c_v_k_1 =  Value_Key[rand_value_key_1];
    char c_v_k_2 =  Value_Key[rand_value_key_2];
    char c_v_k_3 =  Value_Key[rand_value_key_3];
    char c_v_k_4 =  Value_Key[rand_value_key_4];
    cout << "\033[1;36mThe Letter [ I   ]: \033[1;33m" << c_v_k_1 << "\033[0m\n";
    cout << "\033[1;36mThe Letter [ II  ]: \033[1;33m" << c_v_k_2 << "\033[0m\n";
    cout << "\033[1;36mThe Letter [ III ]: \033[1;33m" << c_v_k_3 << "\033[0m\n";
    cout << "\033[1;36mThe Letter [ IV  ]: \033[1;33m" << c_v_k_4 << "\033[0m\n";
        cout << "\033[1;36mPLEASE ENTER THE NUMBER OF THE LETTER [ I ]: \033[0m";
        cin >> guessnum_1;
        cout << "\033[1;36mPLEASE ENTER THE NUMBER OF THE LETTER [ II ]: \033[0m";
        cin >> guessnum_2;
        cout << "\033[1;36mPLEASE ENTER THE NUMBER OF THE LETTER [ III ]: \033[0m";
        cin >> guessnum_3;
        cout << "\033[1;36mPLEASE ENTER THE NUMBER OF THE LETTER [ IV ]: \033[0m";
        cin >> guessnum_4;

       if(guessnum_1 == rand_Final_1 &&  guessnum_2 == rand_Final_2 && guessnum_3 == rand_Final_3 && guessnum_4 == rand_Final_4 )
       { 
        
        cout << "\033[1;32m✅ Correct :)\033[0m\n";
        points++;



      }else{
        
          cout << "\033[1;31m❌ Wrong :( \033[0m\n";
          cout << "\033[1;36mThe correct numbers were:\033[0m\n";
          cout << "\033[1;33m I   → \033[0m" << rand_Final_1 << "\n";
          cout << "\033[1;33m II  → \033[0m" << rand_Final_2 << "\n";
          cout << "\033[1;33m III → \033[0m" << rand_Final_3 << "\n";
          cout << "\033[1;33m IV  → \033[0m" << rand_Final_4 << "\n";

        

   }


}

//
view_total_points(points);



}



void StartGame()
{
  char choice ;
int in_round  ;
cout << "\033[1;36mChoose Your Level:\033[0m\n";
cout << "\033[1;33m[ L ]\033[0m Low\n";
cout << "\033[1;33m[ M ]\033[0m Medium\n";
cout << "\033[1;33m[ H ]\033[0m High\n";
cout << "\033[1;32mChoice: \033[0m";
cin >> choice ;
switch (choice)
{
case 'L':
case 'l':
animation();
cin >> in_round;
Level_Low_Game(in_round);
  break;
case 'M':
case 'm':
animation();
cin >> in_round;
Level_Medium_Game(in_round);
  break;
case 'H':
case 'h':
animation();
cin >> in_round;
Level_High_Game(in_round);
  break;
default:
   cout << "\033[1;31m❌ Invalid Choice! Please try again.\033[0m" << endl;
   break;
}

 


}
// Function play game again
void PlayAgian()
{
  char in_c;
  cout << "\n\033[1;34m----------------------------------------\033[0m\n";
  cout << "\033[1;36m🔁 Do you want to play again? \033[1;33m(Y/N): \033[0m";
  cin >> in_c;
  cout << "\n\033[1;34m----------------------------------------\033[0m\n";
  
  if(in_c == 'Y' || in_c == 'y')
   {
           
        StartGame(); // recursion function
 
   }else{
        cout << "\n\033[1;32m👋 Thank you for playing!\033[0m\n";
        cout << "\033[1;36mSee you next time 🎮\033[0m\n";


   }





}

int main() { 
Introduction_about_game();
StartGame();
PlayAgian();



      return 0;
}
