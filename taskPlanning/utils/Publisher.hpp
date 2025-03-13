#pragma once

#include <memory>
#include <vector>

#include <utils/Subscriber.hpp>

namespace utils {

template<typename T>
class Publisher
{
public:
    Publisher() = default;

    void addSubscriber(std::shared_ptr<utils::Subscriber<T>> subscriber)
    {
        mSubscribers.push_back(subscriber);
    };
    void notifySubscribers(const T &data)
    {
        for (auto &subscriber : mSubscribers) {
            if (subscriber) {
                subscriber->update(data);
            }
        }
    };

private:
    std::vector<std::shared_ptr<utils::Subscriber<T>>> mSubscribers;
};

} // namespace utils

