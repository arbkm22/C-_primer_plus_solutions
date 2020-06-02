#ifndef PLORG_H_
#define PLORG_H_
const int len = 19;
class Plorg {
    private:
        char name[len];
        int ci;
    public:
        Plorg();
        Plorg(int n = 50, const char * fullname = "Plorga");
        void changeCI(int n);
        void report() const;
};
#endif
