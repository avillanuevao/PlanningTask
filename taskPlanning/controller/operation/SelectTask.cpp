#include "SelectTask.hpp"

namespace controller {
namespace operation {

SelectTask::SelectTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void SelectTask::selectTask(std::string nameTask)
{
    mModelFamiliesUnits->setTaskSelected(nameTask);
}

} // namespace operation
} // namespace controller
