#include "SelectUser.hpp"

namespace controller {
namespace operation {

SelectUser::SelectUser(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void SelectUser::selectUser(std::string nameUser)
{
    mModelFamiliesUnits->setUserSelected(nameUser);
}

} // namespace operation
} // namespace controller
