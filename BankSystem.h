#include <string>
#include <vector>

//broken system fix later

using namespace std;
class BankSystem {
private:
    bool login();
    Client& IDlookup();
    void makeAccount();
    void deleteAccount();
    void deposit();
    void withdraw();
    
public:
    BankSystem (bool a, Client& b, void c, void d, void e, void f) {
        login = a;
        IDlookup = b;
        makeAccount = c;
        deleteAccount = d;
        deposit = e;
        withdraw = f;
    }
    
    // getters
    bool getLogin() {
        return login;
    }
    Client& getIDlookup() {
        return IDlookup;
    }
    void getMakeAccount() {
        return makeAccount;
    }
    void getDeleteAccount() {
        return deleteAccount;
    }
    void getDeposit() {
        return deposit;
    }
    void getWithdraw() {
        return withdraw;
    }

    // setters
    bool setLogin(bool a) {
        login = a;
    }
    void setIDlookup(Client& b) {
        IDlookup = b;
    }
};