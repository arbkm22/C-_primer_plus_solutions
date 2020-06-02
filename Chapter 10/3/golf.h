#ifndef GOLF_H_
#define GOLF_H_

class Golf {
    enum {Len = 20};
    private:
        char fullname[Len];
        int handicap;
    public:
        Golf();
        Golf(const char * name, int hc);
        int SetGolf();
        void ShowGolf() const;
        void Handicap(int hc);
};
#endif
