#include "ModelContext.hpp"

namespace model {

ModelContext::ModelContext() {
    initModels();
}

void ModelContext::initModels()
{
    mModelFamiliesUnits = std::make_shared<model::FamiliesUnits>();
    mModelUsers = std::make_shared<model::Users>();
    mModelTasks = std::make_shared<model::Tasks>();
}

std::shared_ptr<model::FamiliesUnits> ModelContext::getModelFamiliesUnits() const
{
    return mModelFamiliesUnits;
}

std::shared_ptr<model::Users> ModelContext::getModelUsers() const
{
    return mModelUsers;
}

std::shared_ptr<model::Tasks> ModelContext::getModelTasks() const
{
    return mModelTasks;
}

} // namespace model
