#pragma once

#include <memory>

#include <controller/operation/IAddTask.hpp>
#include <model/ITasks.hpp>

namespace controller {
namespace operation {

class AddTask : public controller::operation::IAddTask
{
public:
    AddTask(std::shared_ptr<model::ITasks> modelTasks);

    void addTask(std::string nameTask) override;

private:
    std::shared_ptr<model::ITasks> mModelTasks;
};

} // namespace operation
} // namespace controller
