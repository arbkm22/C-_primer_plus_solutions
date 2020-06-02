#ifndef CD_H_
#define CD_H_
#include <string>
using std::string;
class Cd {
    protected:
        char * performers;
        char * label;
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char *s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void report() const;
        Cd & operator=(const Cd & d);
};

class Classic : public Cd {
    private:
        char * details;
    public:
        Classic();
        Classic(const char * s1, const char * s2, const char * s3, int n, double x);
        Classic(const Classic & cl, const char * s);
        virtual ~Classic();
        virtual void report() const;
        Classic & operator=(const Classic & cl);
};

#endif
