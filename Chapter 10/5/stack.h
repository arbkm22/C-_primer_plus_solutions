#ifndef STACK_H_
#define STACK_H_

class Stack {
    private:
        char fullname[35];
        double payment;
    public:
        Stack();
        Stack(const char * name, double money);
        void Modify();
};
#endif
