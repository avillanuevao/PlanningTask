#include "AssignTask.hpp"

namespace controller {
namespace operation {

AssignTask::AssignTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnit)
    : mModelFamiliesUnit(modelFamiliesUnit)
{}

void AssignTask::assignTask()
{
    mModelFamiliesUnit->assignTask();
}

} // namespace operation
} // namespace controller
