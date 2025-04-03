#pragma once

#include <string>

#include <model/ITask.hpp>

namespace model {

class Task : public model::ITask
{
public:
    Task(std::string name);

    std::string getName() const override;

private:
    std::string mName;
};

} // namespace model


