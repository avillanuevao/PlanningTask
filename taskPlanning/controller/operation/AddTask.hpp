#pragma once

#include <memory>

#include <controller/operation/IAddTask.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class AddTask : public controller::operation::IAddTask
{
public:
    AddTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void addTask(std::string nameTask) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller
