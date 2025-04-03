#pragma once

#include <map>

#include <model/IUser.hpp>
#include <model/ITask.hpp>

namespace model {

class User : public model::IUser
{
public:
    User(std::string name);

    void assignTask(std::string nameTask, std::shared_ptr<model::ITask> task) override;

private:
    std::string mName;
    std::map<std::string, std::shared_ptr<model::ITask>> mTasks;
};

} // namespace model

