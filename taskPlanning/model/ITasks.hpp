#pragma once

#include <string>
#include <memory>

#include <model/ITask.hpp>

namespace model {

class ITasks
{
public:
    ITasks() = default;

    virtual void addTask(std::string nameTask) = 0;
    virtual std::shared_ptr<model::ITask> getTask(std::string nameTask) = 0;
};

} // namespace model
