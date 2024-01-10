#ifndef __Singleton__H_
#define __Singleton__H_

#include <memory>
#include <mutex>

using namespace std;

template<class T>
class Singleton {
    private:
        shared_ptr<T> instance_;

        Singleton ();
        Singleton (const Singleton&) = delete;
        Singleton &operator=(const Singleton&) = delete;

        static mutex mtx;

    public:
        virtual ~Singleton ();
        static T& getInstance() {
            static T singletonInstance;
            return singletonInstance;
        }
};

class SingleTon {
    private:
        static SingleTon *mPtr;
        int mValue = 0;

        SingleTon (int value);
        
        static std::mutex mtx;
    public:
        SingleTon (const SingleTon &) = delete;
        ~SingleTon ();
        SingleTon &operator=(int) = delete;
        static SingleTon *getInstance (int value);

        void setValue (int pValue);

        int getValue ();
};

#endif