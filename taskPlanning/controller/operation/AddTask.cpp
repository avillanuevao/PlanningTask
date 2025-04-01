#include "AddTask.hpp"

namespace controller {
namespace operation {

AddTask::AddTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void AddTask::addTask(std::string nameTask)
{
    mModelFamiliesUnits->addTask(nameTask);
}

} // namespace operation
} // namespace controller
