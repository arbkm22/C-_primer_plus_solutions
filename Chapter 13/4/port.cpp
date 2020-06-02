#include <iostream>
#include <cstring>
class Port {
    private:
        char * brand;
        char style[20];
        int bottles;
    public:
        Port(const char * br = "none", const char * st = "none", int b = 0);
        Port(const Port & p);
        virtual ~Port() { delete [] brand; }
        Port & operator=(const Port & p);
        Port & operator+=(int b);
        Port & operator-=(int b);
        int BottleCount () const { return bottles; }
        virtual void Show() const;
        friend std::ostream & operator<<(std::ostream & os, const Port & p);
};
class VintagePort : public Port {
    private:
        char * nickname;
        int year;
    public:
        VintagePort();
        VintagePort(const char * br, int b, const char * nm, int y);
        VintagePort(const VintagePort & vp);
        ~VintagePort() { delete [] nickname; }
        VintagePort & operator=(const VintagePort & vp);
        void Show() const;
        friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};
Port::Port(const char * br, const char * st, int b) {
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    brand[strlen(br)] = '\0';
    strcpy(style, st);
    style[20] = '\0';
    bottles = b;
}
Port::Port(const Port & p) {
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}
Port & Port::operator=(const Port & p) {
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}
Port & Port::operator+=(int b) {
    bottles += b;
    return *this;
}
Port & Port::operator-=(int b) {
    bottles -= b;
    return *this;
}
void Port::Show() const {
    using std::cout;
    using std::endl;
    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}
std::ostream & operator<<(std::ostream & os, const Port & p) {
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}
VintagePort::VintagePort() : Port("The Noble", "Vintage") {
    nickname = new char[1];
    nickname = nullptr;
    year = 1900;  
}
VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "\0", b) {
        nickname = new char[strlen(nn) + 1];
        strcpy(nickname, nn);
        year = y;
    }
VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp) {
    if (this == &vp)
        return *this;
    else {
        Port::operator=(vp);
        delete [] nickname;
        nickname = new char[strlen(vp.nickname) + 1];
        strcpy(nickname, vp.nickname);
    }
    return *this;
}
void VintagePort::Show() const {
    using std::cout;
    using std::endl;
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}
std::ostream & operator<<(std::ostream & os, const VintagePort & vp) {
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}

int main(void) {
    Port new_port("Bhaskar", "Mahto", 69);
    new_port.Show();
    VintagePort new_vp("Bhaskar", 22, "hellking", 2000);
    new_vp.Show();

    return 0;
}
