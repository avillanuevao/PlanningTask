#pragma once

#include <memory>
#include <string>

#include <model/ITask.hpp>

namespace model {

class IUser
{
public:
    IUser() = default;

    // virtual void assignTask(std::string nameTask, std::shared_ptr<model::ITask> task) = 0;
};

} // namespace model

