#ifndef CD_H_
#define CD_H_

class Cd {
    private: 
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        void Report() const;
        Cd & operator=(const Cd & d);
};

class Classic : public Cd {
    private:
        char details[100];
    public:
        Classic(const char * ch, const char * s1, const  char * s2, int n, double x);
        Classic(const Cd & d, const char * ch);
        Classic();
};

#endif
