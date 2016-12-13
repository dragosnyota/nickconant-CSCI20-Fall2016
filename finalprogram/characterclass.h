#ifndef CHARACTERCLASS_H
#define CHARACTERCLASS_H

class characterClass {
    
    public: 
    
    void loadTemplate(int);  // Peasant = 0, mercenary = 1, thief = 2, enemy = 3+
    void setClassName(string);
    void setMaxHP(int);
    void setCurrentHP(int);
    void setSTR(int);
    void setDEF(int);
    void setLUCK(int);
    
    private:
    
    string className;
    
    int maxHP;
    int currentHP;
    int STR;
    int DEF;
    int LUCK;
    
    
};

#endif