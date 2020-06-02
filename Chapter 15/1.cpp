#include <iostream>

class Tv {
    private:
        int state;
        int volume;
        int maxchannel;
        int channel;
        int mode;
        int input;
        int in_mode;
    public:
        friend class Remote;
        enum {Off, On};
        enum {MinVal, MaxVal = 20};
        enum {Antenna, Cable};
        enum {TV, DVD};
        enum {Normal, Interactive};

        Tv(int s = Off, int mc = 125) :  state(s), volume(5), maxchannel(mc),
                                         channel(2), mode(Cable), input(TV), in_mode(Normal) {}
        void onoff() { state = (state == On) ? Off : On; }
        bool ison() const { return state == On; }
        bool volup();
        bool voldown();
        void chanup();
        void chandown();
        void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
        void set_input() { input = (input == TV) ? DVD : TV; }
        void settings() const;
        void set_in_mode() { in_mode = (in_mode == Normal) ? Normal : Interactive; }
};
class Remote {
    private:
        int mode;
    public:
        Remote(int m = Tv::TV) : mode(m) {}
        bool volup(Tv & t) { return t.volup(); }
        bool voldown(Tv & t) { return t.voldown(); }
        void onoff(Tv & t) { t.onoff(); }
        void chanup(Tv & t) { t.chanup(); }
        void chandown(Tv & t) { t.chandown(); }
        void set_chan(Tv & t, int c) { t.channel = c; }
        void set_mode(Tv & t) { t.set_mode(); }
        void set_input(Tv & t) { t.set_input(); }
        void set_in_mode(Tv & t) { t.set_in_mode(); }
};

// Tv Member Functions
bool Tv::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    }
    else 
        return false;
}
bool Tv::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    }
    else
        return false;
}
void Tv::chanup() {
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}
void Tv::chandown() {
    if (channel > 1)
        channel--;
    else 
        channel = maxchannel;
}
void Tv::settings() const {
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off ? "Off" : "On") << endl;
    if (state == On) {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
        cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
        cout << "Type = " << (in_mode == Normal ? "Normal" : "Interactive") << endl;
    }
}

//main() function
int main(void) {
    using std::cout;
    using std::endl;
    Tv s42;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();
    return 0;
}
