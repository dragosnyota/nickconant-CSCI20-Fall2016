// Nick Conant and Tai
// 9 Sep 2016
// Monster Objects Lab

#include <iostream>
using namespace std;

struct MonsterStruct {
    int head; // 1 = Zombus, 2 = Franken, 3 = Wackus
    int eyes;
    int ears;
    int nose;
    int mouth;
};

int main() {
    
    MonsterStruct OneMonster;
    
    cout << "There are three types of monster parts available." << endl;
    cout << "Type 1 is Zombus, type 2 is Franken, and type 3 is Wackus" << endl;
    cout << "You will generate the first monster, then four more will be generated for you." << endl;
    cout << "Please enter a type for your monster's head: ";
    cin >> OneMonster.head;
    cout << "Please enter a type for your monster's eyes: ";
    cin >> OneMonster.eyes;
    cout << "Please enter a type for your monster's ears: ";
    cin >> OneMonster.ears;
    cout << "Please enter a type for your monster's nose: ";
    cin >> OneMonster.nose;
    cout << "Please enter a type for your monster's mouth: ";
    cin >> OneMonster.mouth;
    
    cout << "Your monster is:" << endl;
    cout << "Head: " << OneMonster.head << endl << endl;
    cout << "Eyes: " << OneMonster.eyes << endl << endl;
    cout << "Ears: " << OneMonster.ears << endl << endl;
    cout << "Nose: " << OneMonster.nose << endl << endl;
    cout << "Mouth: " << OneMonster.mouth << endl << endl;
    
    MonsterStruct TwoMonster;
    TwoMonster.head  = 2;
    TwoMonster.eyes  = 3;
    TwoMonster.ears  = 1;
    TwoMonster.nose  = 1;
    TwoMonster.mouth = 1;
    
    cout << "The second monster is:" << endl << endl;
    cout << "Head: " << TwoMonster.head << endl << endl;
    cout << "Eyes: " << TwoMonster.eyes << endl << endl;
    cout << "Ears: " << TwoMonster.ears << endl << endl;
    cout << "Nose: " << TwoMonster.nose << endl << endl;
    cout << "Mouth: " << TwoMonster.mouth << endl << endl;
    
    MonsterStruct ThreeMonster;
    ThreeMonster.head  = 3;
    ThreeMonster.eyes  = 2;
    ThreeMonster.ears  = 1;
    ThreeMonster.nose  = 2;
    ThreeMonster.mouth = 3;
    
    cout << "The third monster is:" << endl << endl;
    cout << "Head: " << ThreeMonster.head << endl << endl;
    cout << "Eyes: " << ThreeMonster.eyes << endl << endl;
    cout << "Ears: " << ThreeMonster.ears << endl << endl;
    cout << "Nose: " << ThreeMonster.nose << endl << endl;
    cout << "Mouth: " << ThreeMonster.mouth << endl << endl;
    
    MonsterStruct FourMonster;
    FourMonster.head  = 2;
    FourMonster.eyes  = 2;
    FourMonster.ears  = 1;
    FourMonster.nose  = 1;
    FourMonster.mouth = 2;
    
    cout << "The fourth monster is:" << endl << endl;
    cout << "Head: " << FourMonster.head << endl << endl;
    cout << "Eyes: " << FourMonster.eyes << endl << endl;
    cout << "Ears: " << FourMonster.ears << endl << endl;
    cout << "Nose: " << FourMonster.nose << endl << endl;
    cout << "Mouth: " << FourMonster.mouth << endl << endl;
    
    MonsterStruct FiveMonster;
    FiveMonster.head  = 2;
    FiveMonster.eyes  = 3;
    FiveMonster.ears  = 2;
    FiveMonster.nose  = 1;
    FiveMonster.mouth = 2;
    
    cout << "The final monster is:" << endl << endl;
    cout << "Head: " << FiveMonster.head << endl << endl;
    cout << "Eyes: " << FiveMonster.eyes << endl << endl;
    cout << "Ears: " << FiveMonster.ears << endl << endl;
    cout << "Nose: " << FiveMonster.nose << endl << endl;
    cout << "Mouth: " << FiveMonster.mouth << endl << endl;
    // cout << "you entered " << OneMonster.eyes << " and " << OneMonster.ears; // for testing values entered
}
