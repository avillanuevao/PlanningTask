#include "AddUser.hpp"

namespace controller {
namespace operation {

AddUser::AddUser(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void AddUser::addUser(std::string nameUser)
{
    mModelFamiliesUnits->addUser(nameUser);
}

} // namespace operation
} // namespace controller
