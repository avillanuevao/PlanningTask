#pragma once

#include <memory>

#include <controller/operation/IAssignTask.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class AssignTask : public controller::operation::IAssignTask
{
public:
    AssignTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnit);

    void assignTask() override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnit;
};

} // namespace operation
} // namespace controller
