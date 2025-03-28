#pragma once

#include <model/FamiliesUnits.hpp>
#include <model/Users.hpp>
#include <model/Tasks.hpp>

namespace model {

class ModelContext
{
public:
    ModelContext();

    std::shared_ptr<model::FamiliesUnits> getModelFamiliesUnits() const;
    std::shared_ptr<model::Users> getModelUsers() const;
    std::shared_ptr<model::Tasks> getModelTasks() const;

private:
    void initModels();

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits;
    std::shared_ptr<model::Users> mModelUsers;
    std::shared_ptr<model::Tasks> mModelTasks;
};

} // namespace model
