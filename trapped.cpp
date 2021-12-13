https://replit.com/@ShaneTrainham/trapped#main.cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
char choice;
cout << "level 1-You see a swarm of angry bats approching what will you do?" << endl;
cout << "A - Fight" << endl;
cout << "B - Avoid" << endl;
cin >> choice;
if (choice == 'A') {
  cout << "YOU DIED-THE BATS OVERNUMBERD YOU-RESTART TO TRY AGAIN ";
  exit(0); 
} else if (choice == 'B') {
  cout << "YOU LIVED-THE BATS FLEW RIGHT PAST YOU-GO ON TO LEVEL 2- ";
}
char _choice;
cout << "level 2 A few skeletons are standing still what will you do?" << endl;
cout << "C - Fight" << endl;
cout << "D - Avoid" << endl;
cin >> _choice;
if (_choice == 'C') {
  cout << "YOU LIVED-THE SKELETONS WERE NO MATCH FOR YOUR SWORD-GO ON TO  LEVEL 3- ";
} else if (_choice == 'D') {
  cout << "YOU DIED-WHEN TRYING TO AVOID THE SKELOTONS YOU FELL INTO A HOLE-RESTART TO TRY AGAIN ";exit(0);}
char cchoice;
cout << "Level 3 You see an archer in the distance" << endl;
cout << "E - Fight" << endl;
cout << "F - Avoid" << endl;
cin >> cchoice;
if (cchoice == 'E') {
 cout << "YOU DIED-HIT BY AN ARROW-RESTART TO TRY AGAIN "; 
 exit(0);
} else if (cchoice == 'F'){
  cout << "YOU LIVED-YOU AVOIDED THE ARCHERS ARROWS-GO TO LEVEL 4- ";}
char achoice;
cout << "Level 4 A giant snake comes slithering" << endl;
cout << "G - Fight" << endl;
cout << "H - Avoid" << endl;
cin >> achoice;
if (achoice == 'G') {
  cout << "YOU LIVED-WITH A QUICK STRIKE OF YOUR SWORD YOU CUT THE SNAKES HEAD OFF-GO TO LEVEL 5- ";
} else if (achoice == 'H'){
  cout << "YOU DIED-WHILE TRYING TO AVOID THE SNAKE IT SPITS VENOM AT YOU AND YOU DIE-RESTART TO TRY AGAIN ";exit(0);}
char schoice;
cout << "Level 5 an ogre stands next to the door" << endl;
cout << "I - FIGHT" << endl;
cout << "J - AVOID" << endl;
cin >> schoice;
if (schoice == 'I') {
  cout << "YOU DIED-THE OGRE WAS NOT FAZED BY YOUR ATTACKS AND HIT YOU-RESTART TO TRY AGAIN ";
  exit(0);
} else if (schoice == 'J') {
  cout << "YOU LIVED-THE OGRE WAS STUPID AND DIDNT SEE YOU-GO TO LEVEL 6-";}
char qchoice;
cout << " Level 6 A giant spider comes crwaling down the wall" << endl;
cout << "K - Fight" << endl;
cout << "L - Avoid" << endl;
cin >> qchoice;
if (qchoice == 'K') {
  cout << "YOU DIED-WHILE TRYING TO ATTACK THE SPIDER GOT YOU WITH ITS WEB-RESTART TO TRY AGAIN";
  exit(0);
} else if (qchoice == 'L') {
  cout << "YOU LIVED-THE SPIDER COULDN'T DETECT YOUR MOVEMENT,GO TO LEVEL 7-";}
char pchoice;
cout << "Level 7 Two trolls charge after you" << endl;
cout << "M - Fight" << endl;
cout << "N - Avoid" << endl;
cin >> pchoice;
if (pchoice == 'M') {
  cout << "YOU LIVED-THE TROLLS WERE SLOW AND U WERE EASILY ABLE TO BEET  THEM IN COMBAT,GO TO LEVEL 8- ";
} else if (pchoice == 'N') {
  cout << "YOU DIED-THEY SPOTTED YOU-RESART TO TRY AGAIN";exit(0);}
char xchoice;
cout << "Level 8 Angry wizard stands still" << endl;
cout << "O - Fight" << endl;
cout << "P - Avoid" << endl;
cin >> xchoice;
if (xchoice == 'O') {
  cout << "YOU LIVED-YOU DODGE THE WIZARDS ATTACKS AND BEAT HIM-GO TO LEVEL 9- ";
} else if (xchoice == 'P') {
  cout << "YOU DIED-THE WIZARD SAW YOU AND ATTACKED YOU-RESTART TO TRY AGAIN";exit(0);}
char tchoice;
cout << "A rock golem spawns in the room" << endl;
cout << "Q - Fight" << endl;
cout << "R - Avoid" << endl;
cin >> tchoice;
if (tchoice == 'Q') {
  cout << "YOU DIED-GOLEM SLAMS THE GROUND KILLING YOU-RESTART TO TRY AGAIN";
  exit(0);
} else if (tchoice == 'R'){
  cout << "YOU LIVED-THE GOLEM COULDNT FIND YOU-GO TO LEVEL 10- ";}
char zchoice;
cout << "You enter the last level and a dragon comes flying right to you" << endl;
cout << "S - Fight" << endl;
cout << "T - Avoid" << endl;
cin >> zchoice;
if (zchoice == 'S'){
  cout << "YOU LIVED-YOU SLAYED THE DRAGON-YOU LEAVE THE DUNGEON";
} else if (zchoice == 'T'){
  cout << "YOU DIED-THE DRAGON BURNED YOU-START OVER";exit(0);}





}
