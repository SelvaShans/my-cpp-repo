#include "Singleton.h"
#include <mutex>

SingleTon *SingleTon::mPtr = nullptr;
std::mutex SingleTon::mtx;

SingleTon::SingleTon(int value) {
    mValue = value;
}

SingleTon::~SingleTon() {
}

SingleTon *SingleTon::getInstance(int value)
{
    if (!mPtr) {
        mtx.lock();
        if (!mPtr) {
            mPtr = new SingleTon(value);
        }
        mtx.unlock();
    }
    return mPtr;
}

void SingleTon::setValue(int value)
{
    mValue = value;
}

int SingleTon::getValue()
{
    return mPtr->mValue;
}