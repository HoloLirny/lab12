    #include<iostream>
    #include<string>
    #include<ctime>
    #include<cstdlib>

    using namespace std;

    string n[9]={"A","B+","B","C+","C","D+","D","F","W"};

    string roll(){
        srand(time(0));
        return n[rand()%9];
    }

    int main(){
        srand(time(0));
        cout << "Press Enter 3 times to reveal your future.";
        cin.get();
        cin.get();
        cin.get();
        cout << "You will get "<<roll()<<" in this 261102.";
        return 0;
    }
