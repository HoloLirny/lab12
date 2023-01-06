    #include<iostream>
    #include<string>
    #include<cstdlib>

    using namespace std;

    string n[9]={"A","B+","B","C+","C","D+","D","F","W"};

    string roll(){
        return n[rand()%9+1];
    }

    int main(){
        cout << "Press Enter 3 times to reveal your future.";
        cin.get();
        cin.get();
        cin.get();
        cout << "You will get "<<roll()<<" in this 261102.";
    }
