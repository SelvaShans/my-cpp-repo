#include <iostream>
#include <list>
using namespace std;

class Bank {
    public:
        virtual void message(string) = 0;
};
class CitiBank : public Bank {
    public:
    virtual void message(string data) {
        cout <<" I am broadcasting a message to all the reliable Citi Bank Customer " << data << std::endl;
    }
};

class Subscripers {
    private:
        list <Bank *> Users;
    public:
        void subscribe(Bank *user) {
            Users.push_back(user);
        }
        void unsubscribe(Bank *user) {
            Users.remove(user);
        }
        void publishMessage(string message) {
            for (auto user:Users) {
                user->message(message);
            }
        }
};

int main() {
    CitiBank *c1 = new CitiBank;
    CitiBank *c2 = new CitiBank;
    CitiBank *c3 = new CitiBank;

    Subscripers scup;
    scup.subscribe(c1);
    scup.subscribe(c2);
    scup.subscribe(c3);
    scup.publishMessage("Happy Weekend");

    scup.unsubscribe(c2);
    scup.publishMessage("Sorry to broadcast again");

    return 0;
}