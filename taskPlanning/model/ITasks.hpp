#pragma once

#include <string>

#include <utils/Publisher.hpp>
#include <model/signal/AddedTask.hpp>

namespace model {

class ITasks : public utils::Publisher<model::signal::AddedTask>
{
public:
    ITasks() = default;

    virtual void addTask(std::string nameTask) = 0;
};

} // namespace model
