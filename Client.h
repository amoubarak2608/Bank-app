#include <string>

using namespace std;

class Client {
private:
    string ClientName;
    int ClientID;
    string AccountType;
    double Balance;

public:
    Client (string a, int b, string c, double d) {
        ClientName = a;
        ClientID = b;
        AccountType = c;
        Balance = d;
    }
    
    // getters
    string getClientName() {
        return ClientName;
    }
    int getClientID() {
        return ClientID;
    }
    string getAccountType() {
        return AccountType;
    }
    double getBalance() {
        return Balance;
    }
    
    // setters
    void setClientName(string a) { 
        ClientName = a;
    }
    void setAccountType(string d) { 
        AccountType = d;
    }
    void setBalance(double e) {
        Balance = e;
    }
};