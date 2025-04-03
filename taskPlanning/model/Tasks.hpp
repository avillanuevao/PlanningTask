#pragma once

#include <map>

#include <model/ITasks.hpp>

namespace model {

class Tasks : public model::ITasks
{
public:
    Tasks();

    void addTask(std::string nameTask) override;
    std::shared_ptr<model::ITask> getTask(std::string nameTask) override;

private:
    std::map<std::string, std::shared_ptr<model::ITask>> mTasks;
};

} // namespace model


