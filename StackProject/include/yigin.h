#ifndef YIGIN_H
#define YIGIN_H


class yigin
{
    public:
        yigin(int _maxSize);
        virtual ~yigin();
        bool push(int num);
        int pop();

    protected:

    private:
        int *arr ;
        int maxSize;
        int currentIndex;
};

#endif // YIGIN_H
