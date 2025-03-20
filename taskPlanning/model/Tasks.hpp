#pragma once

#include <map>
#include <memory>

#include <model/ITasks.hpp>
#include <model/ITask.hpp>

namespace model {

class Tasks : public model::ITasks
{
public:
    Tasks();

    void addTask(std::string nameTask) override;

private:
    std::map<std::string, std::shared_ptr<model::ITask>> mTasks;
};

} // namespace model


